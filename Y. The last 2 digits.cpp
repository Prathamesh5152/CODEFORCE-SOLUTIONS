// Y. The last 2 digits
// time limit per test1 second
// memory limit per test256 megabytes
// Given 4 numbers A
// , B
// , C
//  and D
// . Print the last 2 digits from their Multiplication.

// Input
// Only one line containing four numbers A
// , B
// , C
//  and D
//  (2≤A,B,C,D≤109)
// .

// Output
// Print the last 2 digits from their Multiplication.

// Examples
// InputCopy
// 5 7 2 4
// OutputCopy
// 80
// InputCopy
// 3 9 9 9
// OutputCopy
// 87

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a , b, c ,d;
    cin>>a>>b>>c>>d;
    a=a%100;
    b=b%100;
    c=c%100;
    d=d%100;

    int ans = (a*b*c*d)%100;
    cout<<ans;

}