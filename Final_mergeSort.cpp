#include<iostream>
using namespace std;


void merge(int a[],int low,int middle,int high){
     int n1=middle-low+1;
    int n2=high-middle;
     int left[n1];
    int right[n2];
     for(int i=0;i<n1;i++){
           left[i]=a[low+i];

    }
        for(int j=0;j<n2;j++){
           right[j]=a[middle+j+1];
    }
   //conquor
    int temp[n1+n2];
     int l,k,r;
     l=k=0;
     r=low;
        while(l<n1&&k<n2){
        if(left[l]<right[k]){
            a[r]=left[l];
            l++;
            r++;
        }
        else{
            a[r]=right[k];
            r++;
            k++;
        }
       
    }

    while(l<n1){
    a[r]=left[l];
    r++;
    l++;

   }
    while(k<n2){
    a[r]=right[k];
    r++;
    k++;

   }
  

    




}

void mergeSort(int a[],int l,int h){
    if(l<h){
     int m=l+(h-l)/2;

       mergeSort(a,l,m);
       mergeSort(a,m+1,h);
       merge(a,l,m,h);
    }
    
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];

    }
    int l,h;
    l=0;
    h=n-1;
    mergeSort(arr,l,h);
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
