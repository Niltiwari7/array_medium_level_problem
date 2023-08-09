#include<bits/stdc++.h>
using namespace std;

void next_permutation(int arr[], int n) {
    int ind = -1;
    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] < arr[i + 1]) {
            ind = i;
            break;
        }
    }
    if(ind == -1) {
        reverse(arr, arr + n);
        for(int i = 0; i < n; i++) {
            cout << arr[i];
        }
        return;
    }
    for(int i = n - 1; i > ind; i--) {
        if(arr[i] > arr[ind]) {
            swap(arr[i], arr[ind]);
            break;
        }
    }
    reverse(arr + ind + 1, arr + n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    next_permutation(arr, n);
    
    return 0;
}
