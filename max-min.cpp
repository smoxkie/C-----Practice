#include<iostream>
#include<climits>
using namespace std;

// simple print of array//

// int main(){
// int n;
// cin>>n;
// int arr[n];
// for(int i=0; i<n; i++){
//     cin>>arr[i];
// }
// for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
// }
// return 0;
// }

// maximum and minimum value print//


int main(){
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
int maxNo= INT_MIN;
int minNo= INT_MAX;

   for(int i=0; i<n; i++){
    // if(arr[i]>maxNo){
    //     maxNo=arr[i];
    // }  or we can can do this.
    maxNo=max(maxNo,arr[i]);
    // if(arr[i]<minNo){
    //     minNo=arr[i];
    // }  we can do same as before.
    minNo=min(minNo,arr[i]);
   }
   cout<<maxNo<<" "<<minNo<<endl;

   return 0;
}

