// H. One Prime
// time limit per test3 seconds
// memory limit per test64 megabytes
// Given a number X. Determine if the number is prime or not

// Note:

// A prime number is a number that is greater than 1 and has only two factors which are 1 and itself.

// In other words : prime number divisible only by 1 and itself.

// Be careful that 1 is not prime .

// The first few prime numbers are


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int count = 0;
    for(int i =1;i*i<=n;i++){
        if(n%i==0){
            count++;
            if(i != n/i){
                count++;
            }
        }
    }
    if(count ==2){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}