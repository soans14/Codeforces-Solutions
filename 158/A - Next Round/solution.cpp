#include <iostream>
using namespace std;
 
int main(){
    int n,k,l,count=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    l=arr[k-1];
    for(int i=0;i<n;i++){
        if(arr[i]>=l && arr[i]!=0){
            count++;
        }
    }  
    cout<<count<<endl;
}