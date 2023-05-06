//Maximum Product Subarray o(n) time complexity
#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int max_prod=nums[0];
        int curr_prod=1;
        for(int i=0;i<n;i++)
        {
            curr_prod*=nums[i];
            max_prod=max(max_prod,curr_prod);
            if(curr_prod==0)
            {
                curr_prod=1;
            }
        }
        curr_prod=1;
        for(int i=n-1;i>=0;i--)
        {
            curr_prod*=nums[i];
            max_prod=max(max_prod,curr_prod);
            if(curr_prod==0)
            {
                curr_prod=1;
            }
        }
        return max_prod;
    }

int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    cout<<maxProduct(nums);
    return 0;
}