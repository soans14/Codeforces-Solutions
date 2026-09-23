#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    string a;
    vector<char> b;
    int count=0;
    cin>>a;
    for(int i=0;i<a.size();i+=2){
        b.push_back(a[i]);
    }
    sort(b.begin(),b.end());
    cout<<b[0];
    for(int i=1;i<b.size();i++){
        cout<<'+'<<b[i];
    }
    return 0;
}