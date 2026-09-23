#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    cout<<min(min(abs(a-b)+abs(a-c),abs(b-a)+abs(b-c)),abs(c-a)+abs(c-b));
    
    return 0;
}