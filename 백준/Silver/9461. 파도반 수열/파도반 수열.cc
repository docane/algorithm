#include <iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    long long p[101];
    p[0] = 0;
    p[1] = 1;
    p[2] = 1;
    p[3] = 1;
    p[4] = 2;
    p[5] = 2;
    for (int i = 6; i < 101; i++)
        p[i] = p[i-1] + p[i-5];
    
    for(int i = 0; i < t; i++){
        cin >> n;
        cout << p[n] << endl;
    }
}