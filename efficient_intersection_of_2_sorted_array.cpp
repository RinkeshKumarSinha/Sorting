#include<iostream>
using namespace std;
//intersection of 2 sorted arrays
//efficient solution
//time complextity linear
//auxiliary space constant
class solution{
  public:
  void solve(int arr1[],int n,int arr2[],int m){
   
  int a,b,c;
  a=b=c=0;
  while(a<n&&b<m){
    if(a>0&&arr1[a]==arr1[a-1]){
        a++;
        continue;
    }
    if(arr1[a]==arr2[b]){
        cout<<arr1[a]<<" ";
        a++;
        b++;
    }
    else if(arr1[a]>arr2[b])b++;
    else a++;
  }
  return;
  }

};




int main()
{   
    int n,m;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    solution obj;
    obj.solve(arr1,n,arr2,m);
    return 0;
}
