#include<bits/stdc++.h>
using namespace std;
//brute force approach
// int main(){
//     int n;
//     cin>>n;
//     int tar;
//     cin>>tar;
//     int cnt=0;
//     vector<int>v(n);
//     for(auto &i:v)cin>>i;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int sum=0;

//             for(int k=i;k<=j;k++){
//                 sum+=v[k];
//             }
//             if(sum==tar)cnt++;
//         }
//     }
//     cout<<cnt;
// }

//better approach

int main(){
    int n;
    cin>>n;
    int tar;
    cin>>tar;
    vector<int>v(n);
    for(auto &it:v)cin>>it;
    int cnt=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=v[j];
            if(sum==tar)cnt++;
        }
    }
    cout<<cnt;
}