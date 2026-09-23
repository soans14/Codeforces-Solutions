#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    double sum=0,temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        sum+=temp;
    }
    cout<<sum/n;
    return 0;
}