#include <iostream>
using namespace std;

int matrix[501][2];
int dp[501][501];

int main(){
    int n, r, c;
    int INT_MAX = 1000000000;
    
    
    
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        scanf("%d %d", &r, &c);
        matrix[i][0] = r;
        matrix[i][1] = c;
    }
    for (int i = 1; i < n; i++){
        for (int j = 1; i + j <= n; j++){
            dp[j][i+j] = INT_MAX;
            for (int k = j; k <= i + j; k++){
                dp[j][i+j] = min(dp[j][i+j], dp[j][k] + dp[k+1][i+j] + matrix[j][0] * matrix[k][1] * matrix[i+j][1]);
            }
        }
    }
    printf("%d", dp[1][n]);
}