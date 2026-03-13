#include<iostream>
#include<vector>

using namespace std;

void reverseSection(vector<int>& arr, int start, int end){
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main(){

    int n;
    cin >> n;

    int k;
    cin >> k;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    k = k % n;   // important fix

    reverseSection(arr,0,k-1);
    reverseSection(arr,k,n-1);
    reverseSection(arr,0,n-1);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}