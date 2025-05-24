#include<iostream>
#include<iomanip>
using namespace std;
// global variable 
int id[100],qty[100],code[100];
string name[100];
float price[100];
int size;

void CreateProduct(){
	cout<<"Enter size for create : ";cin>>size;
	for(int i=0;i<size;i++){
		cout<<"Product #"<<i<<endl;
		cout<<"Enter id     : ";cin>>id[i];
		cout<<"Enter name   : ";cin.ignore();getline(cin,name[i]);
		cout<<"Enter Quantity : ";cin>>qty[i];
		cout<<"Enter price    : ";cin>>price[i];
		cout<<"Enter code     : ";cin>>code[i];
		cout<<"================================================"<<endl;
	}
	cout<<"Create Successfully!"<<endl;
}

void Display(){
	cout<<"ID"
		<<setw(20)<<"Name"
		<<setw(20)<<"Price"
		<<setw(20)<<"Quantity"
		<<setw(20)<<"Code"
		<<endl;
		cout<<"================================================"<<endl;
	for(int i=0;i<size;i++){
		cout<<id[i]
			<<setw(20)<<name[i]
			<<setw(20)<<price[i]
			<<setw(20)<<qty[i]
			<<setw(20)<<code[i]
			<<endl;
		cout<<"------------------------------------------------"<<endl;	
			
	}
}

void Update(){
	string pro_name;
	bool check = false;
	// input something to seach
	cout<<"Enter name for seaching : ";cin>>pro_name;
	// find in store
	for(int i=0;i<size;i++){	
		// condition 
		if(pro_name==name[i]){
			cout<<"Update product ID : "<<i<<endl;
			cout<<"Enter new name     : ";cin.ignore();getline(cin,name[i]);
			cout<<"Enter new Quantity : ";cin>>qty[i];
			cout<<"Enter new price    : ";cin>>price[i];
			cout<<"Enter new code     : ";cin>>code[i];
			check = true;
		}
	}
	if(!check){
		cout<<"Item not found!_!"<<endl;
	}
}

void Delete(){
	int pro_id;
	cout<<"Enter the ID for delete : ";cin>>pro_id;
	for(int i=0;i<size;i++){// check in store
		if(pro_id==id[i]){ // condition for id 
			for(int j=i;j<size-1;j++){ // change value by index i
				id[j] = id[j+1];
				name[j] = name[j+1];
				qty[j] = qty[j+1];
				price[j] = price[j+1];
				code[j] = code[j+1];
			}
			size--; // size - 1
		}
	}
}

void Search(){
	string pro_name;
	cout<<"Enter product name for search : ";cin>>pro_name;
	for(int i=0;i<size;i++){
		if(pro_name==name[i]){
			cout<<"ID"<<setw(20)<<"Name"<<setw(20)<<"Price"<<setw(20)<<"Quantity"<<setw(20)<<"Code"<<endl;
			cout<<"================================================"<<endl;
			cout<<id[i]<<setw(20)<<name[i]<<setw(20)<<price[i]<<setw(20)<<qty[i]<<setw(20)<<code[i]<<endl;
			cout<<"------------------------------------------------"<<endl;	
		}
	}
}

void Add(){
	int new_size;
	cout<<"Enter new size : ";cin>>new_size;
	for(int i=size;i<size+new_size;i++){
		cout<<"Product #"<<i<<endl;
		cout<<"Enter id     : ";cin>>id[i];
		cout<<"Enter name   : ";cin.ignore();getline(cin,name[i]);
		cout<<"Enter Quantity : ";cin>>qty[i];
		cout<<"Enter price    : ";cin>>price[i];
		cout<<"Enter code     : ";cin>>code[i];
		cout<<"================================================"<<endl;
	}
	size+=new_size; // size = size + new_size;
}

void Sort(){
	int option;
	cout<<"1. Sort Name "<<endl;
	cout<<"2. Sort ID   "<<endl;
	cout<<"3. Sort Price"<<endl;
	cout<<"4. Sort Quantity"<<endl;
	cout<<"Choose option : ";cin>>option;
	switch(option){
		case 1 : {
			for(int i=0;i<size;i++){
				for(int j=i+1;j<size;j++){
					if(name[i]>name[j]){ // k > a
						swap(id[i],id[j]);
						swap(name[i],name[j]);
						swap(price[i],price[j]);
						swap(qty[i],qty[j]);
						swap(code[i],code[j]);	
					}
				}
			}
			break;
		}
		case 2 : {
			for(int i=0;i<size;i++){
				for(int j=i+1;j<size;j++){
					if(id[i]>id[j]){ // k > a
						swap(id[i],id[j]);
						swap(name[i],name[j]);
						swap(price[i],price[j]);
						swap(qty[i],qty[j]);
						swap(code[i],code[j]);	
					}
				}
			}
			
			break;
		}
		case 3 : {
			for(int i=0;i<size;i++){
				for(int j=i+1;j<size;j++){
					if(price[i]>price[j]){ // k > a
						swap(id[i],id[j]);
						swap(name[i],name[j]);
						swap(price[i],price[j]);
						swap(qty[i],qty[j]);
						swap(code[i],code[j]);	
					}
				}
			}
			break;
		}
		case 4 : {
			for(int i=0;i<size;i++){
				for(int j=i+1;j<size;j++){
					if(qty[i]>qty[j]){ // k > a
						swap(id[i],id[j]);
						swap(name[i],name[j]);
						swap(price[i],price[j]);
						swap(qty[i],qty[j]);
						swap(code[i],code[j]);	
					}
				}
			}
			break;
		}
	}	
	
}
int main(){
	int chose;
	do{
		cout<<"================================================"<<endl;
		cout<<"              System Management                 "<<endl;
		cout<<"================================================"<<endl;
		cout<<" 1. Create the Product"<<endl;
		cout<<" 2. Display all Product"<<endl;
		cout<<" 3. Update the Product"<<endl;
		cout<<" 4. Delete the Product"<<endl;
		cout<<" 5. Search the product"<<endl;
		cout<<" 6. Add more product"<<endl;
		cout<<" 7. Sort the product"<<endl;
		cout<<" 0. Exit"<<endl;
		cout<<" Please choose the option [0-7] : ";cin>>chose;
		switch(chose){
			case 1 : {
				CreateProduct();			
				break;
			}// end case 1
			case 2 : {
				Display();
				break;
			}// end case 2
			case 3 : {
				Update();
				break;
			}// end case 3
			case 4 :{
				Delete();
				break;
			}
			case 5 : {
				Search();
				break;
			}
			case 6 : {
				Add();
				break;
			}
			case 7 : {
				Sort();
				break;
			}
			default: {
				cout<<"Invalid Choose.Try again"<<endl;
				break;
			}
		}
					
	}while(chose!=0);


	
	return 0;
}
