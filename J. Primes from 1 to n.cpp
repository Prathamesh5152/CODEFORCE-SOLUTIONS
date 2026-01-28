// J. Primes from 1 to n
// time limit per test3 seconds
// memory limit per test256 megabytes
// Given a number N
// . Print all prime numbers between 1 and N
//  inclusive.

// A prime number is a number that is greater than 1 and has only two factors which are 1 and itself.

// In other words : prime number divisible only by 1 and itself.

// Be careful that 1 is not prime .


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i =2;i<=n;i++){
        bool p=true;
        for(int j =2;j*j<=i;j++){
            
            if(i%j==0){
                p=false;
                break;
            }
        }
        if(p){
            cout<<i<<" ";
        }
    }
    return 0;
}