#include <iostream>
using namespace std;
 
int main(){
    int n,temp,t1=0,t2=0,t3=0,t4=0,t=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1){
            t1++;
        }
        else if(a[i]==2){
            t2++;
        }
        else if(a[i]==3){
            t3++;
        }
        else{
            t4++;
        }
    }
    t=t4;
    if(t1>t3){
        t+=t3;
        t1-=t3;
        if(t2%2==0){
            t+=(t2/2);
            if(t1%4!=0){
                t+=((t1/4)+1);
            }
            else{
                t+=(t1/4);
            }
        }
        else if(t2%2!=0){
            t+=(t2/2);
            t1+=2;
            if(t1%4!=0){
                t+=((t1/4)+1);
            }
            else{
                t+=(t1/4);
            }
        }
    }
    else if(t1<=t3){
        t+=t3;
        if(t2%2==0){
            t+=(t2/2);
        }
        else if(t2%2!=0){
            t+=(t2/2);
            t++;
        }
    }
    cout<<t;
    return 0;
}