#include <iostream>
#include<vector>
#include<string>
#include <bits/stdc++.h>
using namespace std;

int queenPermutation(vector<bool> &box, int qpsf, int tnq, string ans){
    if(qpsf==tnq){
        cout<<ans<<endl;
        return 1;
    }
    int count = 0;
    for(int i=0;i<box.size();i++){
        if(!box[i]){
            box[i] = true;
            count+=queenPermutation(box,qpsf+1,tnq, ans + "b" + to_string(i) + "q" + to_string(qpsf));
            box[i] = false;
        }
        
    }
    return count;
}

int queenCombination(int box, int idx, int qpsf, int tnq, string ans){
    if(qpsf==tnq){
        cout<<ans<<endl;
        return 1;
    }
    int count = 0;
    for(int i=idx;i<box;i++){
        count+=queenCombination(box,i+1,qpsf+1,tnq,ans+"b"+to_string(i)+"q"+to_string(qpsf));
                                                                                                                                 }
    return count;
}


bool isSafePlaceQueen(vector<vector<bool>>board, int row, int col){
    vector<vector<int>>dirA = {{0,-1}, {-1,0}, {-1,-1}, {-1,1}};
    for(int d=0;d<dirA.size();d++){
        for(int rad=1;rad<=board.size();rad++){
           int x=row+rad*dirA[d][0] ;
           int y=col+rad*dirA[d][1] ;
           if(x>=0 && y>=0 && x<board.size() && y<board[0].size()){
            if(board[x][y]){
                return false;
            }
            }
            else{
                 break;
           }
        }
    }
        return true;
    
}
// int queen2Dcomb(vector<vector<bool>> &board, int idx, int qpsf, int tnq, string ans){
    int NQueen(vector<vector<bool>> &board, int idx, int qpsf, int tnq, string ans){
    if(qpsf==tnq){
        cout<<ans<<endl;
        return 1;
    }
    int count = 0;
    int n=board[0].size();
    for(int i=idx;i<n;i++){
      int row = i/n;
      int col = i%n;
      if(isSafePlaceQueen(board, row, col)){
        board[row][col] = true;
        count+=NQueen(board, i+1, qpsf+1, tnq, ans+"("+to_string(row)+","+to_string(col)+")");
      }
    //    count+=queen2Dcomb(board,i+1,qpsf+1,tnq,ans+"("+to_string(row)+","+to_string(col)+")");

    }
    return count;
}

int queen2Dperm(vector<vector<bool>> &board, int qpsf, int tnq, string ans){
    if(qpsf==tnq){
        cout<<ans<<endl;
        return 1;
    }
    int count = 0;
    for(int i=0;i<board.size()*board[0].size();i++){
        int row = i/board[0].size();
        int col = i%board[0].size();
        if(!board[row][col]){
            board[row][col] = true;
            count+=queen2Dperm(board, qpsf+1,tnq,ans+"("+to_string(row)+","+to_string(col)+")");
            board[row][col] = false;
    }
    }
    return count;

}


int main(){
    // cout<<queenCombination(5,0,0,3,"")<<endl;
    // vector<bool>box(5, false);
    // cout<<queenPermutation(box,0,3,"")<<endl;
    // vector<vector<bool>>board(4,vector<bool>(4,false));
    // cout<<queen2Dcomb(board, 0, 0, 4, "")<<endl;
    // 
    //  vector<vector<bool>>board(4,vector<bool>(4,false));
    //  cout<<queen2Dperm(board,0,4,"")<<endl;
     vector<vector<bool>>board(4,vector<bool>(4,false));
     cout<<NQueen(board, 0, 4, "");


    return 0;
}