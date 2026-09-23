#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    int n,temp;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        cin>>temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end());
    cout<<a[0];
    for(int i=1;i<a.size();i++){
        cout<<" "<<a[i];
    }
    return 0;
}