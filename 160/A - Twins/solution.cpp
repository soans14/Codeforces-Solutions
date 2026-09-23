#include <iostream>
 
using namespace std;
 
int main(){
    int n,temp;
    cin>>n;
    int q[n],p[n+1];
    p[0]=0;
    for(int i=0;i<n;i++){
        cin>>q[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(q[i]<q[j]){
                temp=q[i];
                q[i]=q[j];
                q[j]=temp;
            }
        }
    }
    for(int i=1;i<n+1;i++){
        p[i]=p[i-1]+q[i-1];
    }
    for(int i=0;i<n+1;i++){
        if(p[i]>(p[n]-p[i])){
            cout<<i;
            break;
        }
    }
    return 0;
}