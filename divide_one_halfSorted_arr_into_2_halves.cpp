#include<iostream>
using namespace std;
//given one array in which left half and right half are sorted but whole array is
//not sorted divide the array into 2 halves.
//based on setting up auxiliary arrrays.
void divide(int a[],int low,int mid,int high)
{   int n1=mid-low+1;
    int n2=high-mid;
    int left[n1];
    int right[n2];
    for(int i=0;i<n1;i++){
           left[i]=a[low+i];

    }
    for(int j=0;j<n2;j++){
           right[j]=a[mid+j+1];
    }
    cout<<"the first sorted array:";
    cout<<endl;
    for(int x:left){
        cout<<x<<" ";
    }
    cout<<"the second sorted array:";
    for(int p:right){
        cout<<p<<" ";
    }

    return;
}

int main()
{   
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int l=0;
    int h=n-1;
    int m=((l+(h-l))/2);
    divide(arr,l, m,h);
    
    return 0;
}
