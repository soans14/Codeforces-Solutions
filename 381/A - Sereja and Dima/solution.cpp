#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    int n,temp,s=0,d=0,left,right;
    vector<int> card;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        card.push_back(temp);
    }
    temp=0;
    left=0;
    right=card.size()-1;
    while(left<=right){
        if(card[left]>card[right]){
            if(temp==0){
                s+=card[left];
                temp++;
            }
            else{
                d+=card[left];
                temp--;
            }
            left++;
        }
        else{
            if(temp==0){
                s+=card[right];
                temp++;
            }
            else{
                d+=card[right];
                temp--;
            }
            right--;
        }
    }
    cout<<s<<" "<<d;
    return 0;
}