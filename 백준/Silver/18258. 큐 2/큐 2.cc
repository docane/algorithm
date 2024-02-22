#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n;
    char str_2[6];
    string str;
    queue<int> q;
    int num;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++){
        scanf("%s", str_2);
        str = str_2;
        if (str == "push\0"){
            scanf("%d", &num);
            q.push(num);
        }
        else if (str == "pop"){
            if (q.size() == 0){
                printf("%d\n", -1);
            }
            else {
                printf("%d\n", q.front());
                q.pop();
            }
        }
        else if (str == "size"){
            printf("%ld\n", q.size());
        }
        else if (str == "empty"){
            if (q.size() == 0){
                printf("%d\n", 1);
            }
            else {
                printf("%d\n", 0);
            }
        }
        else if (str == "front"){
            if (q.size() == 0){
                printf("%d\n", -1);
            }
            else {
                printf("%d\n", q.front());
            }
        }
        else if (str == "back"){
            if (q.size() == 0){
                printf("%d\n", -1);
            }
            else {
                printf("%d\n", q.back());
            }
        }
    }
}