// CRUD : Create, Read, Update, Delete
// Exercise about object-oriented programming (OOP) in C++
// this code is a simple implementation of a CRUD application using classes and objects array in C++ about Books.
// Data Member :
/*
- title: string
- author: string
- year: int
- publisher: string
- price: double
- quantity: int
*/
// Member Function :
/*
- constructor: initializes the data members
- display(): displays the book information
- addBook(): adds a new book to the array
- updateBook(): updates the information of an existing book
- deleteBook(): deletes a book from the array
- searchBook(): searches for a book by title
- displayAllBooks(): displays all the books in the array
- sortBooks(): sorts the books by title
- clearScreen(): clears the console screen
- main(): the main function that runs the program
- menu(): displays the menu options
- getInput(): gets the input from the user
- getBookInfo(): gets the book information from the user
*/

#include <iostream>
#include <iomanip>
using namespace std;
class Book{
    private:
        // data members
        string title;
        string author;
        int year;
        string publisher;
        double price;
        int quantity;
        int id;

    public:
        // constructor with default values
        Book(){
            id = 0;
            title = "No Title";
            author = "No Author";
            year = 0;
            publisher = "No Publisher";
            price = 0.0;
            quantity = 0;
        }
        // constructor with parameters
        Book(int i,string t, string a, int y, string p, double pr, int q){
            id = i;
            title = t;
            author = a;
            year = y;
            publisher = p;
            price = pr;
            quantity = q;
        }
        // getData Function
        int GetId()       { return id; }
        string GetTitle()   { return title; }
        string GetAuthor()  { return author; } 
        int GetYear()       { return year; }
        string GetPublisher(){ return publisher; }
        double GetPrice()   { return price; }
        int GetQuantity()   { return quantity; }


        // display function
        void display(){
            cout << "================================================" << endl;
            cout << "Book ID: " << id << endl;
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Year: " << year << endl;
            cout << "Publisher: " << publisher << endl;
            cout << "Price: $" << price << endl;
            cout << "Quantity: " << quantity << endl;
        }

};
int main(){
    // create an array of Book objects
    int choice,size;
    Book books[100];
    do{
        cout << "================================================" << endl;
        cout << "              System Management                 " << endl;
        cout << "================================================" << endl;
        cout << "1. Create Product" << endl;
        cout << "2. Display Product" << endl;
        cout << "3. Update Product" << endl;
        cout << "4. Delete Product" << endl;
        cout << "5. Search Product" << endl;
        cout << "6. Sort Product" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";cin >> choice;
        switch(choice){
            case 1 : {
                cout<<"================================================"<<endl;
                cout<<"              Create Product                    "<<endl;
                cout<<"================================================"<<endl;
                cout<<"Enter the number of books : ";cin>>size;
                for(int i=0;i<size;i++){
                    string title, author, publisher;
                    int year, quantity,id;
                    double price;
                    cout << "Book #" << i+1 << endl;
                    cout << "Enter book ID: "; cin >> id;
                    cout << "Enter book title: "; cin >> title;
                    cout << "Enter book author: "; cin >> author;
                    cout << "Enter book year: "; cin >> year;
                    cout << "Enter book publisher: "; cin >> publisher;
                    cout << "Enter book price: "; cin >> price;
                    cout << "Enter book quantity: "; cin >> quantity;

                    books[i] = Book(id,title, author, year, publisher, price, quantity);
                }
            }
            case 2 : {
                cout<<"================================================"<<endl;
                cout<<"              Display Product                   "<<endl;
                cout<<"================================================"<<endl;
                for(int i=0;i<size;i++){
                    
                    books[i].display();
                    
                }
                break;
            }
            case 3 :{
                cout<<"================================================"<<endl;
                cout<<"              Update Product                    "<<endl;
                cout<<"================================================"<<endl;
                int id;
                cout << "Enter the ID of the book to update: "; cin >> id;
                for(int i=0;i<size;i++){ // loop 1 for search data 
                    if(books[i].GetId() == id ){ // condition for search data in array
                        string title, author, publisher;
                        int year, quantity;
                        double price;
                        cout << "Enter new book title: "; cin >> title;
                        cout << "Enter new book author: "; cin >> author;
                        cout << "Enter new book year: "; cin >> year;
                        cout << "Enter new book publisher: "; cin >> publisher;
                        cout << "Enter new book price: "; cin >> price;
                        cout << "Enter new book quantity: "; cin >> quantity;

                        books[i] = Book(id,title, author, year, publisher, price, quantity);
                    }
                   
                }
                break;
            }
            case 4 : {
                cout<<"================================================"<<endl;
                cout<<"              Delete Product                    "<<endl;
                cout<<"================================================"<<endl;
                int Del_id; // 
                cout << "Enter the ID of the book to delete: "; cin >> Del_id;
                for (int i=0;i<size;i++ ){
                    if(books[i].GetId() == Del_id){
                        for(int j=i;j<size-1;j++){
                            books[j] = books[j+1];
                        }
                        size--;
                        cout << "Book with ID " << Del_id << " deleted successfully." << endl;
                    }
                }
                
                break;
            }
            case 5 : {
                cout<<"================================================"<<endl;
                cout<<"              Search Product                    "<<endl;
                cout<<"================================================"<<endl;
                int search_id;
                cout<<"Enter the ID of the book to search: "; cin >> search_id;
                for(int i=0;i<size;i++){
                    if(books[i].GetId() == search_id){
                        cout << "================================================" << endl;
                        cout << "Book found!" << endl;
                        books[i].display();
                        cout << "================================================" << endl;
                    }
                }
                break;
            }
            case 6 : {
                int choice;
                cout<<"================================================"<<endl;
                cout<<"              Sort Product                      "<<endl;
                cout<<"================================================"<<endl;
                cout<<"1. Sort by Title "<<endl;
                cout<<"2. Sort by Id"<<endl;
                cout<<"3. Sort by Price"<<endl;
                cout<<"4. Sort by Quantity"<<endl;
                cout<<"Enter your choice: "; cin >> choice;
                switch(choice){
                    case 1 : {
                        for(int i=0;i<size;i++){
                            for(int j=i+1;j<size;j++){
                                if(books[i].GetTitle() > books[j].GetTitle()){
                                    swap(books[i], books[j]);
                                }
                            }
                        }
                        break;
                    }
                    case 2 : {
                        for(int i=0;i<size;i++){
                            for(int j=i+1;j<size;j++){
                                if(books[i].GetId() > books[j].GetId()){
                                    swap(books[i], books[j]);
                                }
                            }
                        }
                        break;
                    }
                    case 3 : {
                        for(int i=0;i<size;i++){
                            for(int j=i+1;j<size;j++){
                                if(books[i].GetPrice() > books[j].GetPrice()){
                                    swap(books[i], books[j]);
                                }
                            }
                        }
                        break;
                    }
                    case 4 : {
                        for(int i=0;i<size;i++){
                            for(int j=i+1;j<size;j++){
                                if(books[i].GetQuantity() > books[j].GetQuantity()){
                                    swap(books[i], books[j]);
                                }
                            }
                        }
                        break;
                    }
                }
                break;
            }
            default: {
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }

    }while(choice != 0);



    return 0;
}

