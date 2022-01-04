/* Question
Find total number of Squares in a N*N chessboard
*/

#include <bits/stdc++.h>
using namespace std;

int squaresInChessBoard(int N)
{
if(N==1) return 1;
        return (N*N)+squaresInChessBoard(N-1);
}

int main()
{
    int N=2;
    cout<<squaresInChessBoard(N);
    return 0;
}