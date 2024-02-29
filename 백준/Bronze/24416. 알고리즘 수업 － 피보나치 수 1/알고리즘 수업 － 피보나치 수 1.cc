#include <iostream>
using namespace std;

int fibonacci(int n, int& result){
    result++;
    if (n == 1 || n == 2){
        return 1;
    }
    else {
        return (fibonacci(n - 1, result) + fibonacci(n - 2, result));
    }
}

int fibonacci_dp(int* f, int n){
    int result = 0;
    f[0] = f[1] = 1;
    for (int i = 2; i < n; i++){
        f[i] = f[i - 1] + f[i - 2];
        result += 1;
    }
    return result;
}

int main(){
    int n;
    int result = 0;
    scanf("%d", &n);
    int* f = new int[n];
    printf("%d %d", fibonacci(n, result), fibonacci_dp(f, n));
}