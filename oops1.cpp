#include<iostream>
using namespace std;

class Hero{

    public: 
    int level=0;
    static int hellno ;
    Hero(int level){
        this->level = level;
    }
    // private: 
    int health=100;

    // public:
    int speed=55;
    int h(){
        return health;
    }
};

int Hero::hellno = 5;

int main(){
    Hero h1(69);
    // // cout << h1.health << endl;
    // cout << h1.level << endl;
    // cout << h1.speed << endl;
    // int he = h1.h();
    // cout << he << endl;
    //  cout << sizeof(h1) << endl;
    //  return 0
    Hero h2(h1);
    h1.health =99;
    cout << Hero::hellno << endl;
cout << h1.health <<" "<<h2.health << endl;
}