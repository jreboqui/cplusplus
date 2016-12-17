#include <string>
using namespace std;

class Book {
    public:
        string title;
        int qty;
        double wholesale;
   //Constructor
   Book()
   {
    title = "";
    qty = 0;
    wholesale = 0;
   }
   Book(string booktitle, int num, double price)
   {
    title = booktitle;
    qty = num;
    wholesale = price;
   } 
}; //end of book

