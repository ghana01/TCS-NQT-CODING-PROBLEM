#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    // take vector as a input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //finding the 2nd smallest and greatest  greatest number
    int smallest=arr[0];
    int secS=arr[0];
    int largest,secL=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            secS=smallest;
            smallest=arr[i];
        }
        
    }
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            secL=largest;
            largest=arr[i];
        }
    }
    cout<<"2nd largest element in the array"<<secL<<endl;
    cout<<"2nd smallesrt element in the array"<<secS<<endl;
}

