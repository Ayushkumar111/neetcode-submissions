class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int>ans ; 

        unordered_map<int,int>mp ; 
        unordered_map<int,int>mp2;

        for(int i = 0 ; i<n ; i++){
            mp[nums[i]]++;
            mp2[nums[i]] = i ;
        }

        for(int i = 0 ; i<n ;i++){
            int diff = target - nums[i];
            if(mp.find(diff)!=mp.end()){
                int idx = mp2[diff];
                if(idx!=i){
                if(idx>=i){
                    ans.push_back(i);
                    ans.push_back(idx);
                    break;
                }
                else{
                    ans.push_back(idx);
                    ans.push_back(i);
                    break;
                }
                }
            }

        }
        return ans ;
        
    }
};
