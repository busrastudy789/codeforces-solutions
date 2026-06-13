#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int counter = 0;

    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i]=='4' || s[i]=='7'){
            counter++;
        }
    }
    if(counter == 4 || counter == 7){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
