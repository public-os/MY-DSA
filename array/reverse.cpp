// Time: O(n) | Space: O(1)
#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    
    // Two pointer technique
    int s=0, e=n-1;
    while(s<e){ // O(n/2)
        swap(arr[s],arr[e]); //O(1)
        s++;
        e--;
    }
    // O(n/2)+O(1) = O(n)
    cout<<"Reverse : ";
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}