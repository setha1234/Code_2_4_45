//#include<iostream>
//using namespace std;
//int main(){
//	
////	for (int a=10;a>0;a--){
////		cout<<a<<"Hello world"<<endl;
////	}
////	
////	for (int i=1;i<=10;i++){
////		cout<<i<<"Hello crush!!"<<endl;
////	}
//
////	int number,i;
////	cout<<"Enter number : ";cin>>number;
////	for(i=1;i<=number;i++){
////		cout<<i<<" B somtus huniii"<<endl;
////	}
//
//	// syntax for loop : 
//	// for(start;stop;step){}
//	
//	/*
//	syntax while loop  : 
//	start;
//	while(stop){
//		statement
//		step;
//	}
//	*/
////	int i=0;// start
////	while (i<100){ // stop 
////		cout<<"Hello Guy!!!"<<endl;
////		i++; // step
////	}
//	
//	/*
//	syntax : 
//	start;
//	do{
//		statement // excute statemt
//		step; // step
//	}while(stop); // stop / condition
//	*/
//	
////	int a = 1;
////	do{
////		cout<<a<<"Hello Crush!!"<<endl;
////		a++;
////	}while(a<=10);
////
////	for(int i=i;i<=10;i++){
////		cout<<"Sorry! My Love"<<endl;
////	}
//
//	int number = 6;
//	for(int i=1;i<=10;i++){
//		cout<<number<<" * "<<i<<" = "<<number * i<<endl;
//	}
//	
//	
//	
//	
//	return 0;
//}



//
//#include<iostream>
//using namespace std;
// create a function : Create()
// Non-Return with non-parameter
//void Create(){
//	// local variable 
//	string name;
//	char gender;
//	int id;
//	float salary;
//	
//	cout<<"Enter your name : ";cin>>name;
//	cout<<"Enter your id   : ";cin>>id;
//	cout<<"Enter your gender : ";cin>>gender;
//	cout<<"Enter your salary : ";cin>>salary;
//		
//}

// Non_Return with Parameter
// syntax : void function_name(parameter 1,paramter 2,...){}
//void Input(int a,int b,float c){
//	cout<<"a + b "<<a+b<<endl;
//	cout<<"c = "<<c<<endl;
//}

// Return : 
// Return with non-parameter

//int ValueA(){
//	int a = 10;
//	
//	return a;
//}
//float ValueB(){
//	float b = 3.14;	
//	return b;
//}
//
//float Sum(){	
//	return ValueB()+ValueA();
//}

// Return Function with parameter

//int Fun_A(int a)
//{
//	a + 10;
//	return a;
//}
//int main(){
//	
//	int num;
//	cout<<"Enter value a :";cin>>num;	
//	cout<<"Function A  : "<<Fun_A(num);
//		
//	return 0;
//}





#include<iostream>
using namespace std;
// global variable

int code,qty;
double price;
string name;

void Create(){
	cout<<"Enter code     : ";cin>>code;
	cout<<"Enter name     : ";cin>>name;
	cout<<"Enter price    : ";cin>>price;
	cout<<"Enter quantity : ";cin>>qty;	
}

float Total(){
	return price * qty;
}

int Discount(){
	float total = Total();
	// Ternary : short cut if else statement
	// variable (condtition 1) ? true : false;
	
	int discount =  (total > 1 && total <= 10) ? 10 :
					(total > 10 && total <= 20) ? 20 : 
					(total > 20 && total <= 30 )? 30 : 
					(total > 30 && total <= 40 )? 40 : 
					(total > 40 && total <= 50 )? 50 : 
					(total > 50 && total <= 60 )? 60 : 
					(total > 60 ) ? 70 : 0;				
	return discount;
}

double Payment(){
	double pay = Total() - (Total() * Discount() / 100);
	
	return pay;
}

void Display(){
	cout<<"Code     : "<<code<<endl;
	cout<<"Name     : "<<name<<endl;
	cout<<"Quantity : "<<qty<<endl;
	cout<<"Price    : "<<price<<endl;
	cout<<"Total    : "<<Total()<<endl;
	cout<<"Discount : "<<Discount()<<endl;
	cout<<"Total Dis: "<<(Total() * Discount() / 100)<<endl;
	cout<<"Payment  : "<<Payment()<<endl;
}


int main(){
	Create();
	Display();
	return 0;
}



