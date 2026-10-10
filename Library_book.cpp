#include <iostream>
#include <string>
using namespace std;
class book
{
	private:
    	int bookid;
    	string title;
    	string author;
    	float price;
    	static int bookcount;

	public:
	    book(int id, string t, string a, float p)
    	{
        	bookid = id;
	        title = t;
	        author = a;
	        price = p;
	        bookcount++;
	        cout << "Book object created. Total books: "<< bookcount << endl;
    	}

    book(const book& b)
    {
        bookid = b.bookid;
        title = b.title;
        author = b.author;
        price = b.price;
        bookcount++;
        cout << "Book object copied. Total books: "<< bookcount << endl;
    }
    ~book()
    {
        bookcount--;

        cout << "Book object destroyed. Total books: "<< bookcount << endl;
    }

    void display()
    {
        cout << "Book ID: " << bookid << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }

    static int getbookcount()
    {
        return bookcount;
    }
};

int book::bookcount = 0;
int main()
{
    cout << "Initial Book count: "<< book::getbookcount() << endl;
    cout << "------------------------" << endl;
    book book1(101, "C++ Programming", "Bjarne Stroustrup", 4500);
    book1.display();
    cout << "\n------------------------" << endl;
    book book2 = book1;
    cout << endl;
    book2.display();
    cout << "\n------------------------" << endl;
    cout << "Current Book count: "<< book::getbookcount() << endl;
    return 0;
}
