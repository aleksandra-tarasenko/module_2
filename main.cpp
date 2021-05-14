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
#include <math.h>
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
    void deleteAt(int pos){
        if ((pos > size) || (pos <0)){
            cout << "Invalid index";
            return;
        }
        for(int i = pos; i <= size; i++){
            array[i] = array[i+1];
        }
        size --;
    }
    void insertAt(int element, int pos){
        if((pos > size) || (pos <0)){
            cout << "Invalid index";
            return;
        }
        if (size == MIN_Capacity){
            resize();
        }
        size ++;

        for(int i = size -1; i >=pos; i--){
            if(i == pos){
                array[i] = element;
            } else {
                array[i] = array [i-1];
            }
        }
    }



    void resize(){
        MIN_Capacity = MIN_Capacity + ceil(MIN_Capacity/2);
        T *temp = new T[MIN_Capacity];
        copy(temp);
        delete [] array;
        array = temp;


    }

};