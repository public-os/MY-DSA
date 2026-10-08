#include<iostream>
using namespace std;

int main(){
    int arr[]={12,45,7,89,23};
    int n = 5;
    int mx=arr[0], mn=arr[0];
    for(auto i:arr){
        if(i>mx)
        mx = i;
        if(i<mn)
        mn = i;
    }

    cout<<"Max: "<<mx<<"\nMin: "<<mn;
    return 0;
}