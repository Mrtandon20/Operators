#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Value of N : ";
    cin>>n;

    int rev =0;
    int temp =n;
    while(temp!=0){
        int ld = temp%10;
        rev = rev*10 +ld;
        temp = temp/10;
    }
    cout<<"Reverse of a N : "<<rev;
}