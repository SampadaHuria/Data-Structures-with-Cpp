#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
public:
    void merge(int nums1[], int n, int nums2[], int m, int nums3[]) {

        int i=0,j=0;
        int k=0;
        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                nums3[k++]=nums1[i++];
            }
            else{
                nums3[k++]=nums2[j++];
            }
        }
        while(i<n){
            nums3[k++]=nums1[i++];
        }
        while(j<m){
            nums3[k++]=nums2[j++];
        }
    }
    void print(int ans[],int n)
    {
        for(int i=0;i<n;i++){
            cout<<ans[i]<<"";
        }
        cout<<endl;
    }
   
};
