#include<iostream>
using namespace std;
//given an array whose leftpart is sorted and right part is also sorted divide into 2 
//parts left and right then merge them so that whole array is sorted.
//ip
//n=4 5 6 1 2 3
//op=1 2 3 4 5 6
void divideConquor(int a[],int low,int middle,int high){
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
            temp[r]=left[l];
            l++;
            r++;
        }
        else{
            temp[r]=right[k];
            r++;
            k++;
        }
       
    }

    while(l<n1){
    temp[r]=left[l];
    r++;
    l++;

   }
    while(k<n2){
    temp[r]=right[k];
    r++;
    k++;

   }

   for(int x:temp){
    cout<<x<<" ";
   }

    return;


}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l,m,r;
    l=0;
     r=n-1;
    m=l+(r-l)/2;
   

    divideConquor(arr,l,m,r);

    // for(int x:arr){
    //     cout<<x<<" ";
    // }
    cout<<endl;


    return 0;
}
