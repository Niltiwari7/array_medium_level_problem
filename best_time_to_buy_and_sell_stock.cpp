#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int price[n];
    for(int i=0;i<n;i++)cin>>price[i];
    int mini=price[0];
    int profit=0;
    for(int i=1;i<n;i++){
       int cost=price[i]-mini;
        profit=max(profit,cost);
        mini=min(price[i],mini);
    }
    cout<<profit;
}