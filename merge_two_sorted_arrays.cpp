#include<iostream>
using namespace std;
//given 2 sorted array you need to merge them.
//space complexity and time complexity=O(n+m)
void merge(int arr1[],int n,int arr2[],int m){
    int arr3[n+m];
    int l,r,k;
    l=r=k=0;
    while(l<n&&r<m){
        if(arr1[l]<arr2[r]){
            arr3[k]=arr1[l];
            k++;
            l++;
        }
        else if(arr1[l]>arr2[r]){
            arr3[k]=arr2[r];
            k++;
            r++;
        }
    }
    while(l<n){
        arr3[k]=arr1[l];
        l++;
        k++;
    }
    while(r<m){
        arr3[k]=arr2[r];
        k++;
        r++;
    }
    
    for(int i=0;i<n+m;i++){
        cout<<arr3[i]<<" ";
    }
   
}
int main()
{   int n,m;
    n=5;
    m=7;
    int arr1[n]={10,29,40,70,100};
    int arr2[m]={1,2,3,4,5,6,7};
    merge(arr1,n,arr2,m);
    
    return 0;
}
