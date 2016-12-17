#include <iostream>
#include <string>
#include "Book.h"
using namespace std;

//function prototype
void showInfo(string, int, double);
void showInfo2(string *, int *, double *); //pointers
void showInfo3(Book &);
void showInfo4(Book *); //this time we're passing the address of the book
int main(){
    Book Noreason; //Let's create a Book object

    Noreason.qty = 10;

    cout << "Book's quantity is: " << Noreason.qty << endl;

    Book Onereason("Nice", 15, 20);
    //Pass the values of Onereason to showInfo method member by member
    showInfo(Onereason.title, Onereason.qty, Onereason.wholesale);
 
    //Pass the references of Onereason to showInfo2 member by member
    showInfo2(&Onereason.title, &Onereason.qty, &Onereason.wholesale);

    cout << "The values should have changed: " << endl;
    cout << Onereason.title << endl;
    cout << Onereason.qty << endl;
    cout << Onereason.wholesale << endl;

    showInfo3(Onereason);
    cout << "The values should have changed: " << endl;
    cout << Onereason.title << endl;
    cout << Onereason.qty << endl;
    cout << Onereason.wholesale << endl;
    
    //Passing the address of Onereason to showInfo4
    showInfo4(&Onereason);
    cout << "The values should have changed: " << endl;
    cout << Onereason.title << endl;
    cout << Onereason.qty << endl;
    cout << Onereason.wholesale << endl;

}//end of main

/* showInfo method */
void showInfo(string name, int num, double price){
    cout << "\nInfo of the second book: " << endl;
    cout << name << endl;
    cout << num << endl;
    cout << price << endl;

}

/* showInfo method */
void showInfo2(string *name, int *num, double *price){
    cout << "\nInfo of the second book by showInfo2: " << endl;
    cout << *name << endl;
    cout << *num << endl;
    cout << *price << endl;

    cout << "Changing the values of it...\n";
    *name = "NewName";
    *num = 50;
    *price = 20.5;
}

/* showInfo3 method */
void showInfo3(Book &booky){
    cout << "\nInfo of the second book by showInfo3: " << endl;
    cout << booky.title << endl;
    cout << booky.qty << endl;
    cout << booky.wholesale << endl;

    cout << "Changing the values of it...\n";
    booky.title = "NextName";
    booky.qty = 70;
    booky.wholesale = 22.5;
}

/* showInfo4 method */
void showInfo4(Book *booky){
    cout << "\nInfo of the second book by showInfo4: " << endl;
    cout << booky->title << endl;
    cout << booky->qty << endl;
    cout << booky->wholesale << endl;

    cout << "Changing the values of it...\n";
    booky->title = "FourthName";
    booky->qty = 75;
    booky->wholesale = 30.5;
}

