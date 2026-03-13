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
    //finding the smallest element in the array
    int smallest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    cout<<"The smallest element in the array is: "<<smallest<<endl;
}



