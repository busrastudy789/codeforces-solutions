#include <iostream>
using namespace std;
int main()
{
    string f,s;
    int fLen,sLen;
    cin >> f;
    fLen = f.length();
    for(int i = 0; i < fLen; i++){
        if(f[i] >= 'a'){
            f[i] -= 32;
        }

    }
    cin >> s;
    sLen = s.length();
    for(int i = 0; i < sLen; i++){
        if(s[i] >= 'a'){
            s[i] -= 32;
        }

    }
    if(f < s){
        cout << -1 << endl;
    }
    else if (f > s){
        cout << 1 << endl;
    }
    else{
        cout << 0 << endl;
    }
    return 0;
}
