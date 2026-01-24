// time limit per test1 second
// memory limit per test256 megabytes
// You are given a range represented by two integers L
//  and R
// , and you should find the sum of the numbers in the range between L
//  and R
//  inclusive.

// Input
// First line contains a number T
//  (1≤T≤105
// ) – the number of test cases.

// Each of the next T
//  lines contains two numbers L,R
//  (1≤L,R≤109
// ).

// Output
// For each test case, print the sum.

// Example
// InputCopy
// 4
// 3 6
// 2 11
// 4 16
// 7 17
// OutputCopy
// 18
// 65
// 130
// 132  


#include<iostream>
using namespace std;
int main(){
    int t;
    while(t--){
        int l , r;
        cin>>l>>r;
        long long left = l * 1ll * (l+1)/2;
        long long right = r * 1ll * (r+1)/2;
        long long ans = right - left;
        cout<<ans<<endl;

    }
}