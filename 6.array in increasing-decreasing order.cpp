#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int main(){

    // taking input
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    // in this question first we make half of the array increasing then last half in decreasing

    sort(arr.begin(),arr.end());
    //now after sorting full array we reverse the last half array
    reverse(arr.begin()+n/2,arr.end());//

}
   



