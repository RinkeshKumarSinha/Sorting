#include<iostream>
using namespace std;
#include <vector>
#include <algorithm>
//time complexity=O(n+m)
//space complexity=O(n+m)
//if we dont store the elements then its going to be O(1).
//array must be sorted
class solution{
    public:
    void solve(int arr1[],int n,int arr2[],int m){
        vector<int>v;
        int i,j;
        i=j=0;
        while(i<n&&j<m){
            if(i>0&&arr1[i]==arr1[i-1]){
              i++; 
              continue;
            }
            if(j>0&&arr2[j]==arr2[j-1]){
                j++;
                continue;
            }
            if(arr1[i]<arr2[j]){
                v.push_back(arr1[i]);
                i++;
            }
            else if(arr1[i]>arr2[j]){
                v.push_back(arr2[j]);
                j++;
            }
            else{
                v.push_back(arr1[i]);
                i++;
                j++;
            }
         }
         while(i<n){
            if(i>0&&arr1[i]!=arr1[i-1])v.push_back(arr1[i]);
            i++;
         }
         while(j<m){
            if(j>0&&arr2[j]!=arr2[j-1])v.push_back(arr2[j]);
            j++;
         }

         vector<int>::iterator it=v.begin();
         for(;it!=v.end();it++){
            cout<<*it<<" ";
         }

    }
};

int main()
{   
 int n,m;
 cin>>n>>m;
 int a[n];
 int b[m];
 for(int i=0;i<n;i++)cin>>a[i];
 for(int j=0;j<m;j++)cin>>b[j];
 class solution obj;
 obj.solve(a,n,b,m);

 return 0;
}
