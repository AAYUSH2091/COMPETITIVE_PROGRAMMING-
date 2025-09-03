/*#include <bits/stdc++.h>
using namespace std;

void solve() {
   int row_of_1=-1;
   int col_of_1=-1;

    for(int i=0;i<5;i++){
         for(int j=0;j<5;j++){
              int x;
              cin>>x;
              if(x==1){
                row_of_1=i;
                col_of_1=j;
              }
         }
    }
    cout<<abs(2-row_of_1)+abs(2-col_of_1)<<endl;



}

int main() {

    // Now, main() is very simple. It just calls solve() once.
    solve();

    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int start_r=-1;
    int start_c=-1;

    int val;

    for(int i=0;i<5;i++){
         for(int j=0;j<5;j++){
              cin>>val;
              if(val==1){
                start_r=i;
                start_c=j;
              }
         }
    }

    queue<tuple<int,int,int>> q;

    bool visited[5][5]={false};

    q.push({start_r,start_c,0});

    visited[start_r][start_c]=true;
    
    int dr[4]={-1,1,0,0};
    int dc[4]={0,0,-1,1};
    
    while(!q.empty()){
        auto [r,c,dist]=q.front(); //whats happening here i can 't able to understand here 
        q.pop();
        if(r==2 && c==2){   
            cout<<dist<<endl;
            return;
        }
        for(int i=0;i<4;i++){
            int new_r=r+dr[i];
            int new_c=c+dc[i];
            if(new_r>=0 && new_r<5 && new_c>=0 && new_c<5 && !visited[new_r][new_c]){ // whats this !visited[new_r][new_c] doing here
                visited[new_r][new_c]=true;
                q.push({new_r,new_c,dist+1});
            }
        }
    }

}

int main() {

    solve();

    return 0;
}