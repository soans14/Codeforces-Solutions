#include <iostream>
 
using namespace std;
 
int main() {
    int n,max=0,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(max<a[i]){
            max=a[i];
        }
    }
    for(int i:a){
        sum+=(max-i);
    }
    cout<<sum;
    return 0;
}