#include <iostream>
using namespace std;
int main()
{
    int n,sizee;
    cin >> n;
    string a;
    while(n>0){
        cin >> a;
        sizee = a.size();
        if(sizee > 10){
            cout << a[0]<<(a.size()-2)<<a.back()<< endl;
        }
        else{
            cout << a << endl;
        }
        n--;
    }
    return 0;
}
