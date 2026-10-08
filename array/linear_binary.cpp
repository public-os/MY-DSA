#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int k){
    for(int i=0;i<n;i++){  //O(n)
        if(arr[i]==k)
        return i;
    }
    return -1;
}

int binarySearch(int arr[],int n,int k){
    int low=0,high=n-1;

    while(low<=high){ //O(log n)

        int mid = low+(high-low)/2;

        if(arr[mid]==k)
        return mid;

        else if (arr[mid]<k)
        low = mid+1;

        else
        high = mid-1;       
    }
    return -1;
}
int main(){
    int arr[] = {2,5,8,12,16,23};
    int n=6;
    cout<<"Linear Search: "<<linearSearch(arr,n,16);
    cout<<"\nBinary Search: "<<binarySearch(arr,n,8);
    return 0;
}