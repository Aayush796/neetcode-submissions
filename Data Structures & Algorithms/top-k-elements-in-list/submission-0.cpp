class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int x:nums){
            freq[x]++;
        }
        vector<pair<int,int>> arr;
        for(const auto& y:freq){
            arr.push_back({y.second,y.first});
        }
        sort(arr.rbegin(),arr.rend());
        vector<int> result;
        for(int i=0;i<k;i++){
            result.push_back(arr[i].second);
        }
        return result;
    }
};
