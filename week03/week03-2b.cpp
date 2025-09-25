//week03-2a.cpp二合一 要寫兩次
//LeetCode
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1; //因為
        for(int i=0; i<nums.size(); i++){
            ans *= nums[i];
        }
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};
