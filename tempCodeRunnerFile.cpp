#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    vector<int> digits;
    for(char c: s){
        if(isdigit(c)){
            digits.push_back(c);
        }
    }
   
    sort(digits.begin(), digits.end());
    if(digits.size() == 1){
        cout << digits[0] << endl;
    } else {
        for(int i = 0; i < digits.size() - 1; i++){
            cout << digits[i] << "+";
        }
        cout << digits[digits.size() - 1] << endl;
    }
    return 0;
}