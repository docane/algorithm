#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

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
    cin >> m;
    for (int i = 0; i < m; i++){
        int target;
        cin >> target;
        cout << upper_bound(have.begin(), have.end(), target) - lower_bound(have.begin(), have.end(), target) << ' ';
    }
}