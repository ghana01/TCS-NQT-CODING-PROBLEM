#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
 

    // reverse the array
    //brute force
    vector<int>ans(n);// we are suing the extrea vector 
    for(int i=0;i<n;i++){
        ans[i]=arr[n-1-i];
    }

    int i=0;int j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
    }
    
}
