#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int lower_bound(vector<int>& arr, int left, int right, int target){
    while (left < right){
        int mid = (left + right) / 2;
        if (arr[mid] < target){
            left = mid + 1;
        }
        else {
            right = mid;
        }
    }
    // printf("%d ", right);
    return right;
}

int upper_bound(vector<int>& arr, int left, int right, int target){
    while (left < right){
        int mid = (left + right) / 2;
        if (arr[mid] <= target){
            left = mid + 1;
        }
        else {
            right = mid;
        }
    }
    // printf("%d ", right);
    return right;
}

// void find(vector<int>& arr, int left, int right, int target, int* result){
//     int center = (left + right) / 2;
//     
//     if (arr[center] == target){
//         int lower = lower_bound(arr, left, right, target);
//         int upper = upper_bound(arr, left, right, target);
//         
//         (*result) += upper - lower + 1;
//         // while ((arr[center] == target) && (center > 0)){
//         //     center--;
//         //     if (arr[center] == target){
//         //         (*result)++;
//         //     }
//         // }
//         // center = (left + right) / 2;
//         // while ((arr[center] == target) && (center < arr.size())){
//         //     center++;
//         //     if (arr[center] == target){
//         //         (*result)++;
//         //     }
//         // }
//         return;
//     }
//     else if (left > right){
//         return;
//     }
//     else if (arr[center] > target){
//         find(arr, left, center - 1, target, result);
//     }
//     else {
//         find(arr, center + 1, right, target, result);
//     }
// }

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    vector<int> have;
    
    cin >> n;
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        have.push_back(temp);
    }
    sort(have.begin(), have.end());
    // for (int i = 0; i < n; i++){
    //     cout << have[i] << ' ';
    // }
    // cout << endl;
    cin >> m;
    for (int i = 0; i < m; i++){
        int target;
        int* result = new int(0);
        cin >> target;
        // find(have, 0, (int)have.size(), target, result);
        //printf("%d\n", *result);
        cout << upper_bound(have, 0, have.size(), target) - lower_bound(have, 0, have.size(), target) << ' ';
    }
}
