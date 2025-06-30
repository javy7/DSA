#include<iostream>
using namespace std;

int minimum(int arr[],int n){
    if(n==0){
        return 0;
    }

    int low=0;
    int high=n-1;

    while(low<=high){

       int mid=(low+high)/2;

        if(arr[low]<=arr[high]){
            return arr[low];
        }
         
        if(arr[mid]<=arr[high]){
            high=mid;
        }
        
        else{
            low=mid+1;
        }

    }
    return -1;
    
}
int main(){

    int arr[]={4,5,6,0,1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=3;

    int x=minimum(arr,n);
    cout<<"Result:"<<x;
}