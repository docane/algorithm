#include <iostream>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int* arr = new int[n + 1];
    
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i <= n; i++){
        arr[i] = (arr[i - 1] + arr[i - 2]) % 15746;
    }
    printf("%d", arr[n]);
}