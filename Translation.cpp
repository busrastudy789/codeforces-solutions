#include <iostream>

using namespace std;
int main()
{
    string s,t;
    char temp;
    cin >> s;

    int len = s.length();
    for(int i = 0; i < len/2; i++){
        temp = s[i];
        s[i] = s[len-1-i];
        s[len-1-i] = temp;
    }
    cin >> t;
    if(t == s){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
