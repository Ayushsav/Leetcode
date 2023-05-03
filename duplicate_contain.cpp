#include<iostream>
#include<bits/stdc++.h>
using namespace std;


 bool findDuplicate(vector<int>& nums) {
        
        return nums.size() > set<int> (nums.begin(),nums.end()).size();
 }
int main(){
    vector<int> nums = {1,3,4,2,2};
    cout<<findDuplicate(nums);
    return 0;}
