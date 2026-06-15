#include<iostream>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int t=n,sum=0;
    while(t>0){
        int d=t%10; 
        sum+=d*d*d; 
        t/=10;
    }
    if(sum==n) 
    {
        cout<<"Armstrong";
    }
    else
    {
        cout<<"Not Armstrong";
    }
    return 0;
}