#include<bits/stdc++.h>
using namespace std;

vector<int> two_sum(int *arr,int n,int k,vector<int>&ans){
    int l=0;
    int hi=n-1;
    while(l<=hi){
        int mid=(l+hi)/2;
        if(arr[mid]+arr[mid+1]==k){
            ans[0]=mid;
            ans[1]=(mid+1);
            return ans;
        }
        else if(arr[mid]+arr[mid+1]<k){
            l=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    int k;
    cin>>k;
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    vector<int>ans(2,-1);
    two_sum(arr,n,k,ans);
    for(auto it:ans)cout<<it<<" ";
    
}