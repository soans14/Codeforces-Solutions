#include <iostream>
 
using namespace std;
 
int main() {
    long long n,sum=0;
    cin>>n;
    cout<<((n/2)*((n/2)+1))-((n-n/2)*(n-n/2));
    return 0;
}