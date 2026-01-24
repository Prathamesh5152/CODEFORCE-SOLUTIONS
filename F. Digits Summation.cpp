// Given two numbers N and M. Print the summation of their last digits.

// Input
// Only one line containing two numbers N, M (0 ≤ N, M ≤ 1018).

// Output
// Print the answer of the problem.


#include<iostream>
using namespace std;

int main(){
    string a , b;
    cin>>a>>b;
    int x , y;
    x = a[a.size()-1]-'0';
    y = b[b.size()-1]-'0';
    cout<<x+y;
    
}