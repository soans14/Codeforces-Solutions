#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int min=10000,max=0,i=0,j=n-1;
    for(int k=0;k<n;k++){
        if(a[k]>max){
            max=a[k];
            i=k;
        }
        if(a[k]<=min){
            min=a[k];
            j=k;
        }
    }
    if(i==0){
        cout<<n-1-j;
    }
    else if(j==n-1){
        cout<<i;
    }
    else if(i>j){
        cout<<n-2-j+i;
    }
    else{
        cout<<n-1-j+i;
    }
    return 0;
}