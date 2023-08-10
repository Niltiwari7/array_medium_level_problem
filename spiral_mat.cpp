#include<bits/stdc++.h>
using namespace std;

void spiral_matrix(vector<vector<int>>&v,int n,int m){
    int top=0,left=0,bottom=n-1,right=m-1;
    vector<int>ans;
    while(top<=bottom && left<=right){
        //moving left to right
        for(int i=top;i<=right;i++)
           ans.push_back(v[top][i]);
        top++;

        //moving top to bottom
        for(int i=top;i<=bottom;i++){
            ans.push_back(v[i][bottom]);
        }
           right--;

        if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(v[bottom][i]);
            }
              bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(v[i][left]);
            }
            left++;
        }
    }
    for(auto it:ans)cout<<it<<" ";
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    spiral_matrix(v,n,m);
}