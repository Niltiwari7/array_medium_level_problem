#include<bits/stdc++.h>
using namespace std;
//brute force because space complexity is o(n^2)
vector<vector<int>>rotate_image(vector<vector<int>>&mat,int n,int m){
    vector<vector<int>>rotated(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            rotated[j][n-i-1]=mat[i][j];
        }
    }
    return rotated;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>mat(n,vector<int>(m));
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    vector<vector<int>>ans=rotate_image(mat,n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}