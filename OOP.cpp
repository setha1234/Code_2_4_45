#include<iostream>
using namespace std;
// * Constructors - is a specail function doesn't have return-type and name the same class
class Crush{
    private:
        string name,color;
        int age;
        float height; 
    public:
    // default constructor
        Crush(){
            name = "No Name";
            color = "Unknow";
            age = 0;
            height = 0.0;
        }
        // constructor with parameter
        Crush(string n,string c,int a,float h){
        	name = n;
        	color = c;
        	age = a;
        	height = h;
		}
        void Input(){
        	cout<<"Enter age : ";cin>>age;
        	cout<<"Enter height : ";cin>>height;
        	cout<<"Enter color  : ";cin>>color;
		}
        void Display(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout<<"Color : "<<color<<endl;
            cout<<"Heiht : "<<height<<endl;
        }
};
int main(){
    Crush c1,c2,c3,c("Koko mama","Pink",20,1.50),c4;
//    c1.Input();
//    c1.Display();
//    c2.Input();
//    c2.Display();
//    c3.Input();
//    c3.Display();
    c.Display();
    c4 = Crush("mama","green",22,2.50);
    c4.Display();
    return 0;
}
