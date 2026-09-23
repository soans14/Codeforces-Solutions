#include <iostream>
using namespace std;
 
int main() {
    long long n,temp,pos,neg;
    cin>>n;
    pos=100000;
    neg=-100000;
    for(int i=1;i<=n;i++){
        cin>>temp;
        if(temp<0){
            if(temp>neg){
                neg=temp;
            }
        }
        else if(temp>0){
            if(temp<pos){
                pos=temp;
            }
        }
        else{
            pos=0;
            break;
        }
    }
    if(neg<0 && neg!=-100000){
        if((-1)*neg<pos){
            cout<<(-1)*neg<<endl;
        }
        else{
            cout<<pos<<endl;
        }
    }
    else{
        cout<<pos<<endl;
    }
    return 0;
}