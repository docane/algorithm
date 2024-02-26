#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k;
    vector<int> v;
    int a;
    int quotient;
    int result = 0;
    
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++){
        scanf("%d", &a);
        v.push_back(a);
    }
    for (int i = v.size() - 1; i >= 0; i--){
        if (k - v[i] >= 0){
            quotient = k / v[i];
            k = k - v[i] * quotient;
            result += quotient;
        }
    }
    printf("%d", result);
}