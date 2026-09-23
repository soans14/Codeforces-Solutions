#include <iostream>
#include <cstring>
using namespace std;
 
int main(){
    char a[101],b[101];
    cin>>a;
    cin>>b;
    int c=strlen(a);
    for(int i=0;i<c;i++){
        if(a[i]!=b[c-i-1] || c!=strlen(b)){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}