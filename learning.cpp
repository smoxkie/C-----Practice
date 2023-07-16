#include <iostream>
using namespace std;
// #include<iostream>
#include<bits/stdc++.h>


// int main(){
//     int n;
//     cout << "Enter the no of rows: ";
//     cin >> n;



//     for(int i=n; i>=0; i--){
//         for(int j=1; j<=n-i; j++){
//             cout << "  ";
//         }

//         for(int j=1; j<=i; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }



// int main(){
//     int n;
//     cout<<"enter no of rows: ";
//     cin<<n;

    
// }
// palindrome number//

// bool isPalindrome(int n)
// {
//     // if divisible by 11 then true
//     if (n % 11 == 0) {
//         return true;
//     }
 
//     // if not divisible by 11
//     return false;
// }
 

// int main()
// {
//     isPalindrome(1236) ? cout << "Palindrome"
//                          : cout << "Not Palindrome";
//     return 0;
// }

// even or odd//
// int main() {
//   int n;

//   cout << "Enter an integer: ";
//   cin >> n;

//   if ( n % 2 == 0)
//     cout << n << " is even.";
//   else
//     cout << n << " is odd.";

//   return 0;
// }


// factorial//


//  int main(){
//     int n;
//     cin>>n;
//     for(int row=1;row<=n;row++){
//         for(int col=1; col<=n; col++){
//             if(col == 1 || col == n){
//                 cout<<"*";
//             }else if ((row > n/2)&&((row == col) ||(row+col == n+1))){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// int main(){
//     int n;
//     cin>>n;


//     int sp = n/2;
//     int st = 1;
//     for(int row = 1; row<=n; row++){
//         for(int col=1; col<=sp; col++){
//             cout<<"-";
//         }
//         for(int col=1; col<=st; col++){
//             cout<<"*";
//         }
//         if(row<=n/2){
//             st+=2;
//             sp--;
//         }else{
//             sp++;
//             st-=2;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;

//     int sp = n/2;
//     int st = 1;
//     int val = 1;
//     for(int row = 1; row<=n; row++){
//         for(int col = 1; col<=sp; col++){
//             cout<<" ";
//         }
//         int temp = val;
//         for(int col=1; col<=st; col++){
//             cout<<temp;
//             temp++;
//         }
//         if(row<=n/2){
//             st+=2;
//             sp--;
//             val++;
//         }else{
//             sp++;
//             st-=2;
//             val--;
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// int main(){
//     int n;
//     cin>>n;

//     int sp = n/2;
//     int st = 1;
//     int val = 1;
//     for(int row = 1; row<=n; row++){
//         for(int col=1; col<=sp; col++){
//             cout<<" ";
//         }
//         int temp = val;
//         for(int col=1; col<=st; col++){
//             cout<<temp;
//             if(col<=st/2){
//                 temp++;
//             }else{
//                 temp--;
//             }
            
//         }
//         if(row<=n/2){
//             st+=2;
//             sp--;
//             val++;
//         }else{
//             sp++;
//             st-=2;
//             val--;
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// int main(){
//     int n;
//     cin>>n;
//   int row, col;
     

//     for (row = 1;row <= n; row++)
//     {
//         for (col = 1; col <= (2 * n); col++)
//         {
//             //for Left 
//             if (row < col)
//                 cout << " ";
//             else
//                 cout << "1";
//             //for right
    
//             if (row <= ((2 * n) - col))
//                 cout << " ";
//             else
//                 cout << "1";
//         }
//         cout << "\n";
//     }
// }







// void swap(int arr[],int i,int j){
//     int temp=arr[i];
//     arr[i]=arr[j];
//      arr[j]=temp;
// }
// void reverseArray(int arr[],int size){
//     int start=0;
//     int end=size-1;
//     while(start<end){
//         swap(arr,start,end);
//         start++;
//         end--;
//     }
// }

// void reverseArray(vector<int> &arr)
// {
//     int first = 0;
//     int last = arr.size() - 1;

//     while (first <= last)
//     {
//         int temp = arr[first];
//         arr[first] = arr[last];
//         arr[last] = temp;

//         first++;
//         last--;
//     }
//     return;
// }

// int main()
// {
//     vector<int> arr{1, 2, 3, 4, 5};

//     reverseArray(arr);
//     for (int i{0}; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }
// }



// vector<int> addArray(vector<int>arr1,vector<int>arr2){
//     int i=arr1.size()-1;
//     int j=arr2.size()-1;
//     vector<int>ans;
//     int  carr=0;
//     while(j>=0 && i>=0){
//         int sum=arr1[i--]+arr2[j--];
//         if(sum>=10){
//            ans.push_back(digit(sum)+carr);
//         }
//         else{ 
//             ans.push_back(sum+carr);
//             if(sum+carr<=9)carr=0;
//         }
//         carr=carry(sum);
//     }
//     while(j>=0){
//        int sum=arr2[j--]+carr;
//         if(sum<=9)carr=0;
//        ans.push_back(sum);
//     }
//     while(i>=0){
//        int sum=arr1[i--]+carr;
//        if(sum<=9)carr=0;
//        ans.push_back(sum);
//     }
//     if(carr!=0)ans.push_back(carr);
//     reverseArray(ans);
//     return ans;
// }
// int main(){ vector<int>arr1={1,3,5,7,9};
//    vector<int>arr2={7,9};
//    vector<int> ans=addArray(arr1,arr2);
//    printArray(ans);

// }
//  int carry(int num){
//     return num/10;
// }
// int digit(int num){
//     return num%10;
// }























// int main(){
    
//     int arr[]={1,3,4,6,2,7,22,42};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     // cout<<mostOccurring(arr,size);
//     cout<<"Before Reverse:"<<endl;
//     printArray(arr,size);
//      cout<<endl;
//     reverseArray(arr,size);
//     cout<<"After Reversed:"<<endl;

//     printArray(arr,size);
//     cout<<endl;
//     cout<<repetitive(arr,size)<<endl;


// }