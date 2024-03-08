#include <iostream>
using namespace std;

int triangle[501][501];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int n;
    
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < i+1; j++)
            cin >> triangle[i][j];
    
    for (int i = n-1; i >= 1; i--)
        for (int j = 0; j < i; j++)
            triangle[i-1][j] += max(triangle[i][j], triangle[i][j+1]);
    
    cout << triangle[0][0];
}