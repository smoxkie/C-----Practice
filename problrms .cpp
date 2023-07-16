#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin >> n;
   
    int row = 1;
    
    
    while(row <= n){
        int space = n - row;
        while(space){
            cout<<" ";
            space = space - 1;
            // star = star -1;
        }
        int col = 1;
        while(col<=row){
        cout << col;
            col = col + 1;
        }
        cout<<endl;
        row=row+1;
    }

    return 0;
}