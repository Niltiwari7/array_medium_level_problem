#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>rotate(vector<vector<int>>&mat,int n,int m){
    //transpose the matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            mat[i][j]=mat[j][i];
        }
    }
    //reverse each row of mat
    for(int i=0;i<n;i++){
        reverse(mat[i].begin(),mat[i].end());
    }
    return mat;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>mat(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    vector<vector<int>>ans=rotate(mat,n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}