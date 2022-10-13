#include<iostream>
using namespace std;
//intersection of 2 sorted arrays.
//using set to handle duplicates.
//time complexity=O(m*n)
#include <vector>
#include <set>
class solution{
    public:
    void solve(int arr1[],int n,int arr2[],int m){
         set<int>s;
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr1[i]==arr2[j])s.insert(arr1[i]);
            }
         }
        set<int>::iterator it=s.begin();
        for(;it!=s.end();it++){
            cout<<*it<<" ";
        }

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
