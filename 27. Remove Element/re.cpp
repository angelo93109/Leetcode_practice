class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int head_pointer = 0;
        int tail_pointer = nums.size() - 1;
        // int matched_num = 0;
        // int iter = 0;
        while(head_pointer <= tail_pointer){
            // cout << "Iteration " << iter << "th" << endl;
            // cout << "head_pointer = " <<  head_pointer << ", head_num = " << nums[head_pointer] << endl; 
            // cout << "tail_pointer = " << tail_pointer << ", tail_num = " << nums[tail_pointer] << endl; 
            if(nums[head_pointer] == val){ //Remove
                nums[head_pointer] = nums[tail_pointer]; 
                tail_pointer--;
            } else { 
                head_pointer++; 
            } //iter++; 
        } return head_pointer; 
    }
};
