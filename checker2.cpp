#include<iostream>
using namespace std;

int checker(int arr[],int n,int key){

    if(n==0){
        return 0;
    }

    int low=0;
    int high=n-1;

    while(low<=high){

        int mid=(low+high)/2;

        if(arr[mid]==key){
            return mid;
        }

        if(arr[low]<=arr[mid]){
            if(arr[low]<=key && key<=arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        else{
           if(arr[mid]<=key && key<=arr[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }

    }
    return -1;
}

int main(){

    int arr[]={4,5,6,1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=3;

    int x=checker(arr,n,key);
    cout<<"Result:"<<x;
}