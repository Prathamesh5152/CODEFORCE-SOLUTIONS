// time limit per test1 second
// memory limit per test64 megabytes
// Given two numbers A and B. Print "Yes" if A is greater than or equal to B. Otherwise print "No".

// Input
// Only one line containing two numbers A and B (0  ≤  A, B  ≤  100).

// Output
// Print "Yes" or "No" according to the statement.


#include<iostream>
using namespace std;    
signed main(){
    

    long long a , b;
    cin>>a>>b;
    if(a>=b){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }   
}