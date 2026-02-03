// A. Magic Numbers
// time limit per test2 seconds
// memory limit per test256 megabytes
// A magic number is a number formed by concatenation of numbers 1, 14 and 144. We can use each of these numbers any number of times. Therefore 14144, 141414 and 1411 are magic numbers but 1444, 514 and 414 are not.

// You're given a number. Determine if it is a magic number or not.

// Input
// The first line of input contains an integer n, (1 ≤ n ≤ 109). This number doesn't contain leading zeros.

// Output
// Print "YES" if n is a magic number or print "NO" if it's not.

// Examples
// InputCopy
// 114114
// OutputCopy
// YES
// InputCopy
// 1111
// OutputCopy
// YES
// InputCopy
// 441231
// OutputCopy
// NO


#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int i =0;bool ok = true;
    while(i<s.size()){
        if(i+2<s.size() && s.substr(i,3)=="144")i+=3;
        else if(i+1<s.size() && s.substr(i,2)=="14")i+=2;
        else if(s[i]=='1')i+=1;
        else{
            ok = false;
            break;
        }



    }
        if(ok){
            cout<<"YES";;
        }else{
            cout<<"NO";
        }
}