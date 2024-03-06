#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    string str, explosion, result;
    stack<char> stack;
    
    cin >> str >> explosion;
    result.reserve(1000000);
    for (int i = 0; i < str.length(); i++){
        stack.push(str[i]);
        if ((str[i] == explosion[explosion.length()-1]) && (stack.size() >= explosion.length())){
            string temp;
            for (int j = 0; j < explosion.length(); j++){
                temp.push_back(stack.top());
                stack.pop();
            }
            reverse(temp.begin(), temp.end());
            
            if (temp.compare(explosion) != 0)
                for (int j = 0; j < temp.length(); j++)
                    stack.push(temp[j]);
        }
    }
    while(!stack.empty()){
        result.push_back(stack.top());
        stack.pop();
    }
    reverse(result.begin(), result.end());
    if (result.empty())
        cout << "FRULA";
    else
        cout << result;
}