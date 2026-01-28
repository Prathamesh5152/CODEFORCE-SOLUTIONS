// Z. Hard Compare
// time limit per test1 second
// memory limit per test256 megabytes
// Given 4 numbers A,B,C
//  and D
// . If AB
//  > CD
//  print "YES" otherwise, print "NO".

// Input
// Only one line containing 4 numbers A,B,C
//  and D
//  (1≤A,C≤107)
//  , (1≤B,D≤1012)

// Output
// Print "YES" or "NO" according to the problem above.

// Examples
// InputCopy
// 3 2 5 4
// OutputCopy
// NO
// InputCopy
// 5 2 4 2
// OutputCopy
// YES
// InputCopy
// 5 2 5 2
// OutputCopy
// NO

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a ,b, c, d;
    cin>>a>>b>>c>>d;
    if(b*(log(a))>d*(log(c))){
        cout<<"YES";

    }else{
        cout<<"NO";
    }
}
