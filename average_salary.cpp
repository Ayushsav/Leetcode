//average salary
#include<bits/stdc++.h>
using namespace std;    
double average(vector<int>& salary) {
        int min = INT_MAX;
        int max = INT_MIN;
        int sum = 0;
        for(int i=0;i<salary.size();i++){
            if(salary[i]<min){
                min = salary[i];
            }
            if(salary[i]>max){
                max = salary[i];
            }
            sum+=salary[i];
        }
        return (sum-min-max)/(salary.size()-2.0);
    }

int main(){
    vector<int> salary = {4000,3000,1000,2000};
    cout<<average(salary);
    return 0;
}