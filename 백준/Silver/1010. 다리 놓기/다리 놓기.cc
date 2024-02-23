#include <iostream>

int main(){
    int t;
    long long result;
    int n, m;
    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        result = 1;
        scanf("%d %d", &m, &n);
        if (n / 2 < m){
            m = n - m;
        }
        for (int j = n - m + 1; j <= n; j++){
            result *= j;
        }
        for (int j = 1; j <= m; j++){
            result /= j;
        }
        printf("%lld\n", result);
    }
}