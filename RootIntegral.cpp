#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of N : ";
    cin>>n;

    int count =0;

    for(int i=1; i*i<=n; i++){
        count++;
    }
    cout<<"Ans : "<<count;
}