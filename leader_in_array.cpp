#include<bits/stdc++.h>
using namespace std;

// brute force
// vector<int>find_leader(int *arr,int n){
//     vector<int>ans;
//     for(int i=0;i<n;i++){
//         bool flag=true;
//         for(int j=i+1;j<n;j++){
//             if(arr[i]<arr[j])flag=false;
//         }
//         if(flag)ans.push_back(arr[i]);
//     }
//     return ans;
// }

vector<int>find_leader(int *arr,int n){
    vector<int>ans;
    int maxi=arr[n-1];
    ans.push_back(maxi);
    for(int i=n-2;i>=0;i--){
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
            maxi=arr[i];
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
   
    vector<int>v=find_leader(arr,n);
    for(int i=v.size()-1;i>=0;i--)cout<<v[i]<<" ";
}