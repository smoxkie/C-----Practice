#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

void printDec(int n){
    if(n == 0){
        return;
    }
    cout<<n<<endl;
    printDec(n-1);
}

void printInc(int n){
    if(n==0){
        return;
    }
    printInc(n-1);
    cout<<n<<endl;
}

void printIncDec(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    printIncDec(n-1);
    cout<<n<<endl;
}

int fact(int n){
    if(n==1){
        return 1;
    }
  int  fnm1 = fact(n-1);
  int  fn = n*fact(n-1);
    // cout<<fn<<endl;
    return fn;
}

void printOddEven(int a, int b){
    if(a==b+1){
        return ;
    }
    if(a%2==0){
        cout<<a<<endl;
    }
    printOddEven(a+1,b);
    if(a%2!=0){
        cout<<a<<endl;
    }
}

int power(int x, int n){
    if(n==0){
        return 1;
    }
    int pnm1 = power(x,n-1);
    int pn = pnm1*x;
    
    return pn;
}

int main() {
   
    // printDec(10);
    // printInc(10);
    // printIncDec(5);
    // cout<<fact(5);
    cout<<power(2,5);
    // printOddEven(1,10);
    return 0;
}