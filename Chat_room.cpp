#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    int flagh = 0, flage = 0, flagl = 0, flago = 0;
    cin >> s;
    for(char c : s){
        if(c == 'h' && flagh == 0){
            flagh = 1;
            
        }
        else{
            if(c == 'e' && flage == 0 && flagh == 1){
                flage = 1;
            }
            else{
                if(c == 'l' && flagl < 2 && flagh == 1 && flage == 1){
                    flagl++;
                }
                else{
                    if(c == 'o' && flago == 0 && flagh == 1 && flage == 1 && flagl == 2){
                        flago = 1;
                    }
                }
            }
        }
    }
    if(flagh == 1 && flage == 1 && flagl == 2 && flago == 1){
            cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    return 0;
}