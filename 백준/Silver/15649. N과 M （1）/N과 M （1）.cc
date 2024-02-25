#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void recursion(vector<int> arr, int n, int m, int temp){
    if (m == temp){
        for (int i = 0; i < arr.size(); i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    else {
        for (int i = 1; i <= n; i++){
            auto it = find(begin(arr), end(arr), i);
            if (it == end(arr)){
                arr.push_back(i);
                recursion(arr, n, m, temp + 1);
                arr.pop_back();
            }
        }
    }
}

int main(){
    int n, m;
    vector<int> arr;
    scanf("%d %d", &n, &m);
    recursion(arr, n, m, 0);
}