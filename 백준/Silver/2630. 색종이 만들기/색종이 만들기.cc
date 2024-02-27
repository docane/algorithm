#include <iostream>
#include <vector>
using namespace std;

void dnq(vector<vector<int>> board, int n, int* result){
    int temp[2];
    int sum = 0;
    vector<vector<int>> temp_board;
    vector<int> v;
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            sum += board[i][j];
        }
    }
    if (sum == 0){
        result[0]++;
    }
    else if (sum == (n * n)){
        result[1]++;
    }
    else {
        for (int i = 0; i < (n / 2); i++){
            for (int j = 0; j < (n / 2); j++){
                v.push_back(board[i][j]);
            }
            temp_board.push_back(v);
            v.clear();
        }
        dnq(temp_board, n / 2, result);
        temp_board.clear();
        
        for (int i = 0; i < (n / 2); i++){
            for (int j = n / 2; j < n; j++){
                v.push_back(board[i][j]);
            }
            temp_board.push_back(v);
            v.clear();
        }
        dnq(temp_board, n / 2, result);
        temp_board.clear();
        
        for (int i = n / 2; i < n; i++){
            for (int j = 0; j < (n / 2); j++){
                v.push_back(board[i][j]);
            }
            temp_board.push_back(v);
            v.clear();
        }
        dnq(temp_board, n / 2, result);
        temp_board.clear();
        
        for (int i = n / 2; i < n; i++){
            for (int j = n / 2; j < n; j++){
                v.push_back(board[i][j]);
            }
            temp_board.push_back(v);
            v.clear();
        }
        dnq(temp_board, n / 2, result);
        temp_board.clear();
    }
}

int main(){
    int n;
    vector<vector<int>> board;
    int temp;
    vector<int> v;
    int result[2] = {0, 0};
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &temp);
            v.push_back(temp);
        }
        board.push_back(v);
        v.clear();
    }
    dnq(board, n, result);
    printf("%d\n%d", result[0], result[1]);
}