#include<iostream>
using namespace std;
#include <set>
//intersection of 2 sorted arrays.
//using set to handle duplicates.
//time complexity=O(m+n)
//space complexity=O(m+n)
class solution{
    public:
    void solve(int arr1[],int n,int arr2[],int m){
           set<int>s;
             for(int i=0;i<n;i++){        
                s.insert(arr1[i]);
                
             }
             for(int i=0;i<m;i++){
                s.insert(arr2[i]);
             }
             set<int>::iterator it=s.begin();
             while(it!=s.end()){
                cout<<*it<<" ";
                it++;
             }

             return;
    }
};

int main()
{   int n;
    cin>>n;

    int arr1[n];
   
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
     
      int m;
    cin>>m;
 int arr2[m];
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    class solution obj;
    obj.solve(arr1,n,arr2,m);

    
    return 0;
}
