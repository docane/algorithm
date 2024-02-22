#include <iostream>
#include <deque>
using namespace std;

int main(){
    int n;
    int query;
    int element;
    deque<int> dq;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++){
        scanf("%d", &query);
        if (query == 1){
            scanf("%d", &element);
            dq.push_front(element);
        }
        else if (query == 2){
            scanf("%d", &element);
            dq.push_back(element);
        }
        else if (query == 3){
            if (dq.size() == 0){
                printf("%d\n", -1);
            }
            else {
                printf("%d\n", dq.front());
                dq.pop_front();
            }
        }
        else if (query == 4){
            if (dq.size() == 0){
                printf("%d\n", -1);
            }
            else {
                printf("%d\n", dq.back());
                dq.pop_back();
            }
        }
        else if (query == 5){
            printf("%ld\n", dq.size());
        }
        else if (query == 6){
            if (dq.empty()){
                printf("%d\n", 1);
            }
            else {
                printf("%d\n", 0);
            }
        }
        else if (query == 7){
            if (dq.size() == 0){
                printf("%d\n", -1);
            }
            else {
                printf("%d\n", dq.front());
            }
        }
        else if (query == 8){
            if (dq.size() == 0){
                printf("%d\n", -1);
            }
            else {
                printf("%d\n", dq.back());
            }
        }
    }
}