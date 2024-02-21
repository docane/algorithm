#include <stack>
#include <iostream>
using namespace std;

int main(){
    stack<int> stack;
    int n;
    int input_num;
    long long sum = 0;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++){
        scanf("%d", &input_num);
        if (input_num == 0){
            stack.pop();
        }
        else {
            stack.push(input_num);
        }
    }
    int temp = stack.size();
    for (int i = 0; i < temp; i++){
        sum += stack.top();
        stack.pop();
    }
    printf("%lld", sum);
}