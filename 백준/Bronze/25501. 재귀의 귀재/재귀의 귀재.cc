#include <iostream>
#include <cstring>
using namespace std;

int recursion(const char* str, int l, int r, int &n){
    if (l >= r){
        n = l + 1;
        return 1;
    }
    else if (str[l] != str[r]){
        n = l + 1;
        return 0;
    }
    else
        return recursion(str, l+1, r-1, n);
}
int main(){
    int t;
    char str_input[1001];
    string str;
    int n = 1;
    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        scanf("%s", str_input);
        int result = recursion(str_input, 0, strlen(str_input) - 1, n);
        printf("%d %d\n", result, n);
    }
}