#include<iostream>
using namespace std;
int main()
{
	// Declare variable
	int a;
	float b;
	double c;
	long d;
	// assign variable
	a = 10;
	b = 3.14;
	c = 3252.234;
	d = 134253;
	// print-output variable

//	cout<<"a : "<<a<<endl;
//	cout<<"b : "<<b<<endl;
//	cout<<"c : "<<c<<endl;
//	cout<<"d : "<<d<<endl;
//	
//	cout<<"a + b : "<<a+b<<endl;
//	cout<<"d - c : "<<d-c<<endl;
//	cout<<"b * d : "<<b*d<<endl;
//	cout<<"c / a : "<<c/a<<endl;
//	cout<<"d % a : "<<d%a<<endl;
	
	// DataType Charactor
	// Declare and assign variable
//	char gender = 'M';
//	char name[11] = "Setha Sith";
//	string address = "Phnom Penh City";
//	string username = "seawrtqljklawdfassgergad";
//	// output variable withh charactor
//	cout<<"Name : "<<name<<endl;
//	cout<<"Gender : "<<gender<<endl;
//	cout<<"Address : "<<address<<endl;
//	cout<<username<<endl;

	int id;
	string username,email,gender;
	// cin is used input value to variable
	cout<<"=========[Input Informaiton]=========="<<endl;
	cout<<"Enter ID          : ";cin>>id; 
	cout<<"Enter Username    : ";cin.ignore();getline(cin,username);
	cout<<"Enter Email       : ";cin>>email;
	cout<<"Enter your gender : ";cin>>gender;
	cout<<"=========[Output Information]=============="<<endl;
	cout<<"ID     : "<<id<<endl;
	cout<<"Name   : "<<username<<endl;
	cout<<"Email  : "<<email<<endl;
	cout<<"Gender : "<<gender<<endl;
	
	
	return 0;
}
