#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void find(vector<int> &arr, int left, int right, int target){
    int result;
    int center = (left + right) / 2;
    
    if (arr[center] == target){
        printf("1\n");
        return;
    }
    else if (left > right){
        printf("0\n");
        return;
    }
    else if (arr[center] > target) {
        find(arr, left, center - 1, target);
    }
    else {
        find(arr, center + 1, right, target);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    vector<int> arr;
    int element;
    int result;
    
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> element;
        arr.push_back(element);
    }
    sort(arr.begin(), arr.end());
    cin >> m;
    for (int i = 0; i < m; i++){
        cin >> element;
        find(arr, 0, n - 1, element);
    }
}