#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,count1=0;
    string s;

    cin >> n;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(s[i]==s[i+1]){
            count1++;
        }
    }
    cout << count1 << endl;
    return 0;
}
