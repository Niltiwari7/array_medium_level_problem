#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>set_zero(vector<vector<int>>&mat,int n,int m){
    int col[m]={0};
    int row[n]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==0){
                row[i]=1;
                col[i]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i]||col[j]){
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
    vector<vector<int>>ans=set_zero(mat,n,m);
    for(auto it:mat){
        for(auto ele:it){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}