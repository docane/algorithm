#include <iostream>
#include <vector>
#include <string>
using namespace std;

void dnq(vector<vector<int>> board, int n, string* result){
    int sum = 0;
    vector<vector<int>> temp_board;
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            sum += board[i][j];
        }
    }
    if (sum == 0){
        (*result).append("0");
    }
    else if (sum == (n * n)){
        (*result).append("1");
    }
    else {
        (*result).append("(");
        for (int i = 0; i < n / 2; i++){
            vector<int> v;
            for (int j = 0; j < n / 2; j++){
                v.push_back(board[i][j]);
            }
            temp_board.push_back(v);
        }
        dnq(temp_board, n / 2, result);
        temp_board.clear();
        
        for (int i = 0; i < n / 2; i++){
            vector<int> v;
            for (int j = n / 2; j < n; j++){
                v.push_back(board[i][j]);
            }
            temp_board.push_back(v);
        }
        dnq(temp_board, n / 2, result);
        temp_board.clear();
        
        for (int i = n / 2; i < n; i++){
            vector<int> v;
            for (int j = 0; j < n / 2; j++){
                v.push_back(board[i][j]);
            }
            temp_board.push_back(v);
        }
        dnq(temp_board, n / 2, result);
        temp_board.clear();
        
        for (int i = n / 2; i < n; i++){
            vector<int> v;
            for (int j = n / 2; j < n; j++){
                v.push_back(board[i][j]);
            }
            temp_board.push_back(v);
        }
        dnq(temp_board, n / 2, result);
        temp_board.clear();
        (*result).append(")");
    }
}

int main(){
    int n;
    vector<vector<int>> board;
    string* result = new string();
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        vector<int> v;
        for (int j = 0; j < n; j++){
            int element;
            scanf("%1d", &element);
            v.push_back(element);
        }
        board.push_back(v);
    }
    dnq(board, n, result);
    cout << *result;
}