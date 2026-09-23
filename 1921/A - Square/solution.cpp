#include <iostream>
using namespace std;
 
int main(){
    int x[4],y[4],t,xa,ya;
    cin>>t;
    int ans[t];
    for(int j=0;j<t;j++){
        xa=0;
        ya=0;
        for(int i=0;i<4;i++){
            cin>>x[i]>>y[i];
        }
        for(int i=0;i<3;i++){
            if(x[i]>x[i+1]){
                xa=x[i]-x[i+1];
            }
            if(y[i]>y[i+1]){
                ya=y[i]-y[i+1];
            }
        }
        if(xa==0){
            ans[j]=ya*ya;
        }
        else{
            ans[j]=xa*xa;
        }
    }
    for(int i=0;i<t;i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}