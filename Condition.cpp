#include<iostream>
using namespace std;
int main(){
//	int age = 18;
//	int age;
//	cout<<"Enter your age : ";cin>>age;
//	if(age >= 18){ // age > 18 = 1
//		cout<<"You are older than 18"<<endl;
//	}else if(age == 18){ // age == 18 
//		cout<<"You are 18 year old."<<endl;
//	}else{
//		cout<<"You are to young"<<endl;
//	}
//	
//	float score;
//	cout<<"Enter your score : ";cin>>score;
//	if(score >= 50){
//		cout<<"You are pass."<<endl;
//	}else if(score < 50){
//		cout<<"You are fault."<<endl;
//	}else{
//		cout<<"Invalid number."<<endl;
//	}
//	

// 	int char
	int option;
	cout<<"==========================="<<endl;
	cout<<"1 . Color Yellow."<<endl;
	cout<<"2 . Color Green."<<endl;
	cout<<"3 . Color Blue."<<endl;
	cout<<"4 . Color Red."<<endl;
	cout<<"=> Please choose the option : ";cin>>option;
	switch(option){ // \033[Valuem
		case 1 : cout<<"\033[33mYou are select option 1.\033[0m"<<endl; break;
		case 2 : cout<<"\033[32mYou are select option 2.\033[0m"<<endl; break;
		case 3 : cout<<"\033[34mYou are select option 3.\033[0m"<<endl; break;
		case 4 : cout<<"\033[31mYou are select option 4.\033[0m"<<endl; break;
		default : cout<<"Invalid option."<<endl; break;
	}
	
	return 0;
}
