#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int original_n=n;
    while(n>0){
        int last_digit= n%10;
        sum= sum + round(pow(last_digit,3));
        n=n/10;
    }
    if(sum==original_n){
        cout<<"Armstrong no."<<endl;
    }
    else{
        cout<<"not an armstrong no."<<endl;
    }
    return 0;
}