#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of N : ";
    cin>> n;

    int base = 1;
    int temp = n;
    int ans = 0;
    while(temp!=0){
        int ld = temp%10;
        ans = ld*base + ans;
        temp = temp/10;
        base = base*2;
    }
     cout<<"ans : "<<ans;
}