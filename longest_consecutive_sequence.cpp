#include<bits/stdc++.h>
using namespace std;

int find_longest_seq(int *arr,int n){
    sort(arr,arr+n);   
    int lastsmaller=INT_MIN;
    int cnt=0;
    int longest=1;
    for(int i=0;i<n;i++){
        if(arr[i]-1==lastsmaller){
            cnt+=1;
            lastsmaller=arr[i];
        }
        else if(arr[i]!=lastsmaller){
            cnt=1;
            lastsmaller=arr[i];
        }
        longest=max(longest,cnt);

    }   
    return longest;        

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int ans=find_longest_seq(arr,n);
    cout<<ans;
}