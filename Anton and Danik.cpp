#include <iostream>
using namespace std;
int main(){
    int num,countA = 0,countD = 0;
    string s;
    cin >> num;
    cin >> s;
    int length = s.length();
    for(int i = 0; i < length; i++){
        if(s[i] == 'D'){
            countD++;
        }
        else{
            countA++;
        }
    }
    if(countA < countD){
        cout << "Danik" << endl;
    }
    else if (countA > countD){
        cout << "Anton" << endl;
    }
    else{
        cout << "Friendship" << endl;
    }
    return 0;
}
