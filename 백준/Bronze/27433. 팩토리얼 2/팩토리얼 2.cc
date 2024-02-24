#include <iostream>

long long int rf(int n){
    if (n == 0){
        return 1;
    }
    else if (n == 1){
        return 1;
    }
    else {
        return n * rf(n - 1);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%lld", rf(n));
}