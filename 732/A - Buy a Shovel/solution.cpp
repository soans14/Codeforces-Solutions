#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    int temp,k,r,s=1;
    cin>>k>>r;
    temp=k;
    while(temp%10!=r && temp%10!=0){
        s++;
        temp+=k;
    }
    cout<<s;
    return 0;
}