#include<iostream>
#include<vector>

using namespace std;


bool isValidSudoku(vector<vector<char> > &board)
{

    bool rows[10][10];
    bool cols[10][10];
    bool squs[10][10];
    int match[256];
    int i,j;

    match['0'] = 0;
    match['1'] = 1;
    match['2'] = 2;
    match['3'] = 3;
    match['4'] = 4;
    match['5'] = 5;
    match['6'] = 6;
    match['7'] = 7;
    match['8'] = 8;
    match['9'] = 9;
    
    for (i=0;i<10;i++)
        for (j=0;j<10;j++)
        {
            rows[i][j] = false;
            cols[i][j] = false;
            squs[i][j] = false;
        }

    for (i=0;i<9;i++)
        for (j=0;j<9;j++)
            if (board[i][j] != '.')
            {
                if (rows[i][match[board[i][j]]])
                    return false;
                else
                    rows[i][match[board[i][j]]] = true;

                cout<<i<<' '<<j<<endl;
                if (cols[j][match[board[i][j]]])
                    return false;
                else
                    cols[j][match[board[i][j]]] = true;

                if (squs[i/3*3+j/3][match[board[i][j]]])
                    return false;
                else
                    squs[i/3*3+j/3][match[board[i][j]]] = true;
            }
    return true;
}

int main()
{
    int i,j;
    char t;

    vector<vector<char> > board;
    vector<char> p;

    for (i=0;i<9;i++)
    {
       p.clear();
       for (j=0;j<9;j++)
       {
           cin>>t;
           p.push_back(t);
       }
       board.push_back(p);
    } 
//    for (i=0;i<9;i++)
//    {
//       for (j=0;j<9;j++)
//       {
//           cout<<board[i][j];
//       }
//       cout<<endl;
//    } 

    cout<<isValidSudoku(board)<<endl;

    return 0;
}
