#include<bits/stdc++.h>
using namespace std;
//Best Time to Buy and Sell Stock optimal solution
int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minPrice){
                minPrice = prices[i];
            }
            else if(prices[i]-minPrice>maxProfit){
                maxProfit = prices[i]-minPrice;
            }
        }
        return maxProfit;
    }

int main(){
    vector<int> prices = {7,1,5,3,6,4};
    cout<<maxProfit(prices);
    return 0;
}


    
