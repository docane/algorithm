#include <iostream>
#include <queue>
using namespace std;

int main(){
    int t, k;
    long long cost;
    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        scanf("%d", &k);
        priority_queue<long long, vector<long long>, greater<long long>> min_q;
        cost = 0;
        for (int j = 0; j < k; j++){
            int num;
            scanf("%d", &num);
            min_q.push(num);
        }
        while (min_q.size() >= 2){
            long long c1 = min_q.top();
            min_q.pop();
            long long c2 = min_q.top();
            min_q.pop();
            min_q.push(c1 + c2);
            cost += c1 + c2;
        }
        printf("%lld\n", cost);
    }
}