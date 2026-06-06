#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int a = 0, b = 0;
    for(int i = 0; i < n; i++){
        if(v[0] > v.back()){
            if(i % 2 == 0){
                a = a + v[0];
            }
            else{
                b = b + v[0];
            }
            v.erase(v.begin());
        }
        else{
            if(i % 2 == 0){
                a = a + v.back();
            }
            else b = b + v.back();
            v.pop_back();
        }
    }

    return 0;
}
