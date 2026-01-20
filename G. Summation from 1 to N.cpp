// G. Summation from 1 to N
// time limit per test0.25 seconds
// memory limit per test256 megabytes
// Given a number N
// . Print the summation of the numbers that is between 1 and N
//  (inclusive).

// .∑i=1Ni
// Input
// Only one line containing a number N
//  (1≤N≤109)

// Output
// Print the summation of the numbers that are between 1 and N
//  (inclusive).

// Examples
// InputCopy
// 3
// OutputCopy
// 6
// InputCopy
// 10
// OutputCopy
// 55

#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long ans = n * 1ll * (n+1)/2;
    cout<<ans<<endl;
}