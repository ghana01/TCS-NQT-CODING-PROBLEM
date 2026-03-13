#include<iostream>
#include<vector>

using namespace std;

int main(){

    // taking input
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //finding the largest element in the array
    int greatest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>greatest){
            greatest=arr[i];
        }
    }
    cout<<"The largest element in the array is: "<<greatest<<endl;
}



