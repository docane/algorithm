#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n, input;
    priority_queue<int, vector<int>> q;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &input);
        if (input == 0){
            if (q.size() == 0){
                printf("0\n");
            }
            else {
                printf("%d\n", q.top());
                q.pop();
            }
        }
        else {
            q.push(input);
        }
    }
}