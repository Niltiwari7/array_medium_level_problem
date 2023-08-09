#include<bits/stdc++.h>
using namespace std;

void markRow(vector<vector<int>>&mat,int n,int m,int i){
    for(int j=0;j<m;j++){
        if(mat[i][j]!=0)
        mat[i][j]=-1;
    }
}

void markCol(vector<vector<int>>&mat,int n,int m,int j){
    for(int i=0;i<n;i++){
        if(mat[i][j]!=0)
        mat[i][j]=-1;
    }
}
vector<vector<int>>set_mat_zero(vector<vector<int>>&mat,int n ,int m){
    //find where is zero
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==0){
                markRow(mat,n,m,i);
                markCol(mat,n,m,j);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==-1){
                mat[i][j]=0;
            }
        }
    }
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
    vector<vector<int>>ans=set_mat_zero(mat,n,m);
    for(auto it:mat){
       for(auto ele:it){
          cout<<ele<<" ";
       }
       cout<<endl;
    }
}