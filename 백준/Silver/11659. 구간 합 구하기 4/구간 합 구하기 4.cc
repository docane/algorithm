#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    int int_input;
    vector<int> nums, prefix_sum;
    int left, right;
    
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++){
        scanf("%d", &int_input);
        nums.push_back(int_input);
    }
    prefix_sum.push_back(0);
    for (int i = 0; i < n; i++){
        prefix_sum.push_back(nums[i] + prefix_sum[i]);
    }
    for (int i = 0; i < m; i++){
        scanf("%d %d", &left, &right);
        printf("%d\n", prefix_sum[right] - prefix_sum[left - 1]);
    }
}