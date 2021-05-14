//
// Created by Sashulya Tarasenko on 14.05.2021.
//

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    cout << "Number of 'e':" << count(s.begin(),s.end(),'e') << endl;
    int c = 0;
    for(int i = 1; i < s.size(); i++){
        if(s[i-1]== 'e' && s[i] != 'r')
            c++;
    }
    cout << "Number of 'e' without next 'r':" << c;
}