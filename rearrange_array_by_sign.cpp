#include<bits/stdc++.h>
using namespace std;


// brute force approach
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)cin>>arr[i];
//     vector<int>neg;
//     vector<int>pos;
//     for(int i=0;i<n;i++){
//         if(arr[i]<0)neg.push_back(arr[i]);
//         else pos.push_back(arr[i]);
//     }
//     for(int i=0;i<n/2;i++){
//         arr[2*i]=pos[i];
//         arr[2*i+1]=neg[i];
//     }
//     for(int i=0;i<n;i++)cout<<arr[i]<<" ";
// }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    vector<int>ans(n,0);
    int posIdx=0,negIdx=1;

    for(int i=0;i<n;i++){
        if(arr[i]<0){
            ans[negIdx]=arr[i];
            negIdx+=2;
        }
        else{
            ans[posIdx]=arr[i];
            posIdx+=2;
        }
    }
    for(auto it:ans)cout<<it<<" ";
}