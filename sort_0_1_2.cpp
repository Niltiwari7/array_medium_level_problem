#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int cnt0=0,cnt1=0,cnt2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)cnt0++;
        else if(arr[i]==1)cnt1++;
        else cnt2++;
    }
    vector<int>ans;
    while(cnt0--)ans.push_back(0);
    while(cnt1--)ans.push_back(1);
    while(cnt2--)ans.push_back(2);
    for(auto it:ans)cout<<it<<" ";
}