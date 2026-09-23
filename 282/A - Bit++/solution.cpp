#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    int t,x=0;
    string s;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>s;
        if(s=="++X" || s=="X++"){
            x++;
        }
        else{
            x--;
        }
    }
    cout<<x;
    return 0;
}