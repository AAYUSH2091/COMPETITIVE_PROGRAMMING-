#include <bits/stdc++.h>
using namespace std;

void solve() {
    unordered_map<int, int> mp;

    int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    mp[s1]++;
    mp[s2]++;
    mp[s3]++;
    mp[s4]++;
    int ans=0;
    for(auto it:mp)
    {
        if(it.second>=1)
        {
            ans++;
        }
    }
    cout<<4-ans<<endl;
}

int main() {

    solve();

    return 0;
}