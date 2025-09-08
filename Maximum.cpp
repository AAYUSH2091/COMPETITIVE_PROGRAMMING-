// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int k;
//     cin>>k;

//     int maxSum=0;
//     for(int i=0;i<=n-k;i++){
//         int currentSum=0;
//         for(int j=i;j<i+k;j++){
//             currentSum+=arr[j];
//         }
//         maxSum=max(maxSum,currentSum);
//     }
//     cout<<maxSum<<endl;
// }

// int main() {

//     solve();

//     return 0;
// }

//OPTIMISED APPROACH


#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;

    int windowSum=0;
    int maxSum=0;
    int windowstart=0;  
    for(int windowend=0;windowend<n;windowend++){
        windowSum+=arr[windowend];
        if(windowend>=k-1){
            maxSum=max(maxSum,windowSum);
            windowSum-= arr[windowstart];
            windowstart++;
        }
    }

    cout<<maxSum<<endl;
}

int main() {

    solve();

    return 0;
}