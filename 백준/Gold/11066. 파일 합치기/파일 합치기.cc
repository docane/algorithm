#include <iostream>
#include <cstring>
using namespace std;

const int INF = 987654321;
int cache[501][501];
int cost[501];
int preSum[501];

int dp(int left, int right){
    if (left==right)
        return cost[left];
    
    int& ret = cache[left][right];
    if (ret != -1)
        return ret;
    
    ret = INF;
    int sum = preSum[right+1] - preSum[left];
    
    for (int i = left; i < right; i++)
        ret = min(ret, dp(left, i) + dp(i + 1, right) + sum);
    return ret;
}

int main(){
    int t, k;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++){
        memset(cache, -1, sizeof(cache));
        scanf("%d", &k);
        
        for (int j = 0; j < k; j++){
            int num;
            scanf("%d", &num);
            cost[j] = num;
        }
        
        for (int j = 1; j <= k; j++)
            preSum[j] = preSum[j-1] + cost[j-1];
        
        int ret = INF;
        for (int j = 0; j < k - 1; j++)
            ret = min(ret, dp(0, j) + dp(j + 1, k - 1));
        
        printf("%d\n", ret);
    }
}