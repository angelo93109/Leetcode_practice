class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> output (nums.size(), 0); 
        int neg_pointer = 0;
        int pos_pointer = nums.size() - 1; 
        int output_pointer = nums.size() - 1;
        // int r = 0;
        do{
            ///// For Testing //////
            // cout << "Iteration " << r << endl;
            // cout << "neg_pointer = " <<neg_pointer<< endl;
            // cout << "pos_pointer = " <<pos_pointer<< endl;
            // cout << "output_pointer = " <<output_pointer<< endl;
            // r++;
            ///////////////////////
            // if(nums[neg_pointer] < 0) neg_to_pos_temp = -nums[neg_pointer];
            // else neg_to_pos_temp = nums[neg_pointer];
            if(-nums[neg_pointer] > nums[pos_pointer]){
                output[output_pointer] = nums[neg_pointer] * nums[neg_pointer];
                neg_pointer++; 
                output_pointer--;
            } else if(-nums[neg_pointer] <= nums[pos_pointer]) {
                output[output_pointer] = nums[pos_pointer] * nums[pos_pointer];
                pos_pointer--;
                output_pointer--;
            } else if (neg_pointer == pos_pointer) {
                output[output_pointer] = nums[pos_pointer] * nums[pos_pointer];
                output_pointer--;
            } 
        } while(output_pointer >= 0);
        return output; 
    };
};
