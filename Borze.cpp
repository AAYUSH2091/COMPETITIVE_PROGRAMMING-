#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>>s;

    for(size_t i=0;i<s.size();)
    {
        if(s[i]=='.')
        {
            cout<<"0";
            i=i+1;
        }
        else if(s[i]=='-')
        {
            if(s[i+1]=='.')
            {
                cout<<"1";
            }
            else if(s[i+1]=='-')
            {
                cout<<"2";
            }
            i=i+2;
        }
    }
}

int main() {

    solve();

    return 0;
}