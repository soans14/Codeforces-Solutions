#include <iostream>
 
using namespace std;
 
int main(){
    int n,p,q,j,k;
    cin>>n>>p;
    int x[p];
    for(int i=0;i<p;i++){
        cin>>x[i];
    }
    cin>>q;
    int y[q];
    for(int i=0;i<q;i++){
        cin>>y[i];
    }
    int a[n];
    for(int i=0;i<n;i++){
        for(j=0;j<p;j++){
            if(x[j]==i+1){
                a[i]=i+1;
            }
        }
        for(k=0;k<q;k++){
            if(y[k]==i+1){
                a[i]=i+1;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]!=i+1){
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    cout<<"I become the guy.";
    return 0;
}