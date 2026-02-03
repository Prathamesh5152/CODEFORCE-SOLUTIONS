// A. Fair Playoff
// time limit per test2 seconds
// memory limit per test256 megabytes
// Four players participate in the playoff tournament. The tournament is held according to the following scheme: the first player will play with the second, and the third player with the fourth, then the winners of the pairs will play in the finals of the tournament.

// It is known that in a match between two players, the one whose skill is greater will win. The skill of the i
// -th player is equal to si
//  and all skill levels are pairwise different (i. e. there are no two identical values in the array s
// ).

// The tournament is called fair if the two players with the highest skills meet in the finals.

// Determine whether the given tournament is fair.

// Input
// The first line contains a single integer t
//  (1≤t≤104
// ) — the number of test cases.

// A single line of test case contains four integers s1,s2,s3,s4
//  (1≤si≤100
// ) — skill of the players. It is guaranteed that all the numbers in the array are different.

// Output
// For each testcase, output YES if the tournament is fair, or NO otherwise.

// Example
// InputCopy
// 4
// 3 7 9 5
// 4 5 6 9
// 5 3 8 1
// 6 5 3 2
// OutputCopy
// YES
// NO
// YES
// NO
// Note
// Consider the example:

// in the first test case, players 2
//  and 3
//  with skills 7
//  and 9
//  advance to the finals;
// in the second test case, players 2
//  and 4
//  with skills 5
//  and 9
//  advance to the finals. The player with skill 6
//  does not advance, but the player with skill 5
//  advances to the finals, so the tournament is not fair;
// in the third test case, players 1
//  and 3
//  with skills 5
//  and 8
//  advance to the finals;
// in the fourth test case, players 1
//  and 3
//  with skills 6
//  and 3
//  advance to the finals. The player with skill 5
//  does not advance, but the player with skill 3
//  advances to the finals, so the tournament is not fair.


#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
    int t ;
    cin>>t;
    while(t--){
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll mx1 =max({a,b,c,d});
        ll mx2;
        if(mx1==a){
            mx2=max({b,c,d});

        }else if (mx1 ==b){
            mx2 = max({a,c,d});
        }else if (mx1 ==c){
            mx2 =max({a,b,d});

        }else{
            mx2 = max({a,b,c});
        }
        ll w1 = max({a,b});
        ll w2 = max({c,d});
        ll wm1,wm2;
        if(w1>w2){
            wm1=w1;
            wm2=w2;
        }else{
            wm1 = w2;
            wm2 = w1;
        }
        if(wm1== mx1 && wm2 == mx2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }



}
