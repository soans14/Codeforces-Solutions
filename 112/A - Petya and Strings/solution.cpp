#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    string a,b;
    int count=0;
    cin>>a>>b;
    for(int i=0;i<a.size();i++){
        a[i]=tolower(a[i]);
        b[i]=tolower(b[i]);
        count=a[i]-b[i];
        if(count==0){
            continue;
        }
        else{
            break;
        }
    }
    if(count<0){
        cout<<-1;
    }
    else if(count>0){
        cout<<1;
    }
    else{
        cout<<0;
    }
    return 0;
}