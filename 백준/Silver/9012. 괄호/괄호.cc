#include <iostream>
#include <stack>
using namespace std;

int main(){
    int n;
    cin >> n;
    getchar();
    for (int i = 0; i < n; i++){
        stack<int> stack;
        string str;
        int flag = 0;
        getline(cin, str);
        for (int i = 0; i < str.size(); i++){
            if (str[i] == '(')
                stack.push(0);
            else {
                if (stack.size() == 0){
                    flag = 1;
                    break;
                }
                stack.pop();
            }
        }
        if ((flag == 1) || (stack.size() != 0))
            printf("NO\n");
        else
            printf("YES\n");
    }
}