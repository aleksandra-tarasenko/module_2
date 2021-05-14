//#include <iostream>
//#include <algorithm>
//#include <string>
//
//using namespace std;

//int main() {
//    string s;
//    cin >> s;
//    cout << "Number of 'e':" << count(s.begin(), s.end(), 'e') << endl;
//    int c = 0;
//    for (int i = 1; i < s.size(); i++) {
//        if (s[i - 1] == 'e' && s[i] != 'r')
//            c++;
//    }
//    cout << "Number of 'e' without next 'r':" << c;


#include <iostream>

using namespace std;
#define INITIAL_CAPACITY 5

template <class T>
class dynamyc_array{
    T*array;
    int MIN_Capacity = INITIAL_CAPACITY;
    int GROWTH_FACTOR = 2;
    int size;


public:
    dynamyc_array(){
        array = new T[MIN_Capacity];
        size = 0;
    }
    void show(){
        for(int i=0; i<size; i++){
            cout << array[i] << " ";
        }
    }
    void append(T element) {
        if(size == MIN_Capacity){
            resize();
        }
    }


};