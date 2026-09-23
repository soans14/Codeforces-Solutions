#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    string h,g,p;
    int arr[26]={0};
    cin>>h>>g>>p;
    if(h.size()+g.size()!=p.size()){
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<h.size();i++){
        arr[h[i]-'A']++;
    }
    for(int i=0;i<g.size();i++){
        arr[g[i]-'A']++;
    }
    for(int i=0;i<p.size();i++){
        arr[p[i]-'A']--;
    }
    for(int i=0;i<26;i++){
        if(arr[i]!=0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}