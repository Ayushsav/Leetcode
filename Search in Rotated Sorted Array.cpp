//Search in Rotated Sorted Array
#include<bits/stdc++.h>
using namespace std;
     
int search(vector<int>& nums, int target) {
    int n=nums.size();
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target)
            return mid;
        else if(nums[mid]>=nums[low]){
            if(target>=nums[low] && target<nums[mid])
                high=mid-1;
            else
                low=mid+1;
        }
        else{
            if(target<=nums[high] && target>nums[mid])
                low=mid+1;
            else
                high=mid-1;
        }
    }
    return -1;
}

int main()  
{  
    vector<int> nums={4,5,6,7,0,1,2};
    int target=0;
    cout<<search(nums,target);
    return 0;  
}