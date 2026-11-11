class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(),0);
        int product=1;
        int zeros=0;
        int idx;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zeros++;
                idx=i;
            }
            else{
                product*=nums[i];
            }
        }
        if(zeros>1){
            return result;
        }
        if(zeros==1){
            result[idx]=product;
            return result;
        }
        else{
            for(int i=0;i<nums.size();i++){
                result[i]=product/nums[i];
            }
            return result;
        }
    }
};
