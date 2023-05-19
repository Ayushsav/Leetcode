//sum-of-two-integers binary
#include<iostream>
using namespace std;

int getSum(int a, int b) {
    int sum = a;
    while(b != 0){
        sum = a ^ b;
        b = (a & b) << 1;
        a = sum;
    }
    return sum;
}

int main(){
    int a = 1, b = 2;
    cout << getSum(a, b) << endl;
    return 0;
}