#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    unordered_set<int> seen;

    for(int i = 0; i < n; i++){
        if(!seen.count(arr[i])){
            cout << arr[i] << " ";
            seen.insert(arr[i]);
        }
    }

    return 0;
}