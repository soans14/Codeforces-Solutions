#include <iostream>
using namespace std;
 
int main(){
    char a[100];
    int i,count=1;
    cin>>a;
    for(i=0;a[i]!='\0';i++){
        if(a[i]==a[i+1]){
            count++;
        }
        else{
            count=1;
        }
        if(count==7){
            cout<<"YES";
            break;
        }
    }
    if(a[i]=='\0'){
        cout<<"NO";
    }
}