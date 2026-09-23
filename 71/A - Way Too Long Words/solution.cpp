#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    string s;
    char b,l;
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s.size()<=10){
            cout<<s<<endl;
        }
        else{
            a=s.size()-2;
            b=s[0];
            l=s[s.size()-1];
            s.clear();
            cout<<b<<a<<l<<endl;
        }
    }
    return 0;
}