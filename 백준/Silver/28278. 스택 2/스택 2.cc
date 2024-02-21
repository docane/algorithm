#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> stack;
    int n;
    scanf("%d", &n);
    int query;
    int temp;
    for(int i = 0; i < n; i++){
        scanf("%d", &query);
        if (query == 1){
            scanf("%d", &temp);
            stack.push(temp);
        }
        else if (query == 2) {
            if (stack.size() == 0){
                printf("%d\n", -1);
            }
            else {
                printf("%d\n", stack.top());
                stack.pop();
            }
        }
        else if (query == 3) {
            printf("%ld\n", stack.size());
        }
        else if (query == 4) {
            if (stack.size() == 0){
                printf("%d\n", 1);
            }
            else {
                printf("%d\n", 0);
            }
        }
        else if (query == 5){
            if (stack.size() == 0){
                printf("%d\n", -1);
            }
            else {
                printf("%d\n", stack.top());
            }
        }
    }
    return 0;
}