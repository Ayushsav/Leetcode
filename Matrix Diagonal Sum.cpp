//Matrix Diagonal Sum
#include<bits/stdc++.h>
using namespace std;
 

int diagonalSum(vector<vector<int>>& mat) {
    int n=mat.size();
    cout<<n;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=mat[i][i];
        cout<<mat[i][i]<<"<<<<ii<<<"<<sum<<endl;
        sum+=mat[i][n-i-1];
        cout<<mat[i][n-i-1]<<"<<<<i n-i-1<<<"<<sum<<endl;
    }       
    if(n%2==1){
        sum-=mat[n/2][n/2];
        cout<<sum<<"n/2"<<endl;
    return sum;}
}

int main(){
    vector<vector<int>> mat={{1,2,3},{4,5,6},{7,8,9}};
    cout<<diagonalSum(mat);
    return 0;
}