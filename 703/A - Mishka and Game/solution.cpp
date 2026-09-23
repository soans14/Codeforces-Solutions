#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    int t,a,b,c1=0,c2=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        if(a>b){
            c1++;
        }
        else if(a<b){
            c2++;
        }
    }
    if(c1>c2){
        cout<<"Mishka";
    }
    else if(c1<c2){
        cout<<"Chris";
    }
    else{
        cout<<"Friendship is magic!^^";
    }
    return 0;
}