#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    vector<char> s2;
    for(char c : s){
        if(!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y' || c == 'y')){
            s2.push_back(tolower(c));
        }
    }

    for(int i = 0; i < s2.size(); i++){
        cout << '.' <<s2[i];
    }
    return 0;
}