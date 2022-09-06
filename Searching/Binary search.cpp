#include<iostream>
using namespace std;

bool binarySearch(int arr[],int s,int e,int k)
{
    //base case
    if(s>e)
        return -1;   //element not found
    int mid=s+(e-s)/2;
    if(arr[mid]==k)
        return true;  //element found
    if(arr[mid]<k)
    {
        return binarySearch(arr,mid+1,e,k);
    }
    else{
        return binarySearch(arr,s,mid-1,k);
    }
}
int main()
{

    int arr[6]={2,4,6,10,14,18};
    int size=6;
    int key=18;
    cout<<"Present or not "<<binarySearch(arr,0,5,key)<<endl;
    return 0;
}
