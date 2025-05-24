#include<iostream>
using namespace std;
// * Constructors

class Crush{
    private:
        string name;
        int age;
    public:
    // default constructor
        Crush(){
            name = "No Name";
            age = 0;
        }
        void Display(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

int mian(){
    Crush c1;
    c1.Display();
    return 0;
}ob