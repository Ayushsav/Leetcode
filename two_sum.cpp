#include<bits/stdc++.h>
using namespace std;
//Two Sum
vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(m.find(target-nums[i])!=m.end()){
                v.push_back(m[target-nums[i]]);
                v.push_back(i);
                return v;
            }
            m[nums[i]] = i;
        }
        return v;
    }
int main(){
    vector<int> v = {2,7,11,15};
    int target = 9;
    vector<int> ans = twoSum(v,target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}