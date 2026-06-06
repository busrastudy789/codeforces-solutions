#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<string, int> mp;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        // if(mp[s] ) evabe korle index toiri hobe, 0 value dekhabe
        //if(mp.count()) dile jodi age nai tahole notun kore toiri hobena
        if(mp.count(s) > 0){
            cout << s << mp[s] << endl;
        }
        else{
            cout << "OK" << endl;
        }
        mp[s]++;
    }
    return 0;
}
