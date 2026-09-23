#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    string s;
    cin>>s;
    if(s[0]-'a'<0){
        cout<<s;
    }
    else{
        s[0]=s[0]-32;
        cout<<s;
    }
    return 0;
}