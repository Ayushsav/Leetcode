//  Find Minimum in Rotated Sorted Array
#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]>nums[high])
            {
                low=mid+1;
            }
            else
            {
                high=mid;
            }
        }
        return nums[low];
    }

int main()  
{  
    vector<int> nums={3,4,5,1,2};
    cout<<findMin(nums);
    return 0;  
}