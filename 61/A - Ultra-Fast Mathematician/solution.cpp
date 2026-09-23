#include <iostream>
#include <cstring>
using namespace std;
 
int main(){
    char a[101],b[101],c[101];
    cin>>a;
    cin>>b;
    for(int i=0;i<strlen(a);i++){
        if(a[i]==b[i]){
            c[i]='0';
        }
        else{
            c[i]='1';
        }
        cout<<c[i];
    }
}