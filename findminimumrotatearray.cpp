//  Find Minimum in Rotated Sorted Array
#include<bits/stdc++.h>
using namespace std;


int findMini(vector<int>& nums) {
    //using sorting
    sort(nums.begin(),nums.end());
    return nums[0];
    }


int main()  
{  
    vector<int> nums={4,5,6,7,0,1,2};
    cout<<findMini(nums);
    return 0;  
}