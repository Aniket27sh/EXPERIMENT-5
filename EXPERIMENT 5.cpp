#include <iostream>
using namespace std;

class Book 
{
    string title;
    string author;
    float price;

public:
    // Parameterized constructor
    Book(string t, string a, float p) {
        title = t;
        author = a;
        price = p;
    }

    // Copy constructor
    Book(const Book &b) {
        title = b.title;
        author = b.author;
        price = b.price;
    }

    // Display function
    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }

    // Destructor
    ~Book() {
        cout << "Destructor called for " << title << endl;
    }
};

int main() {
    // Original object using parameterized constructor
    Book b1("C++ Programming", "Aniket Sharma", 500);

    cout << "Original Book Details:" << endl;
    b1.display();

    // Copied object using copy constructor
    Book b2 = b1;

    cout << "\nCopied Book Details:" << endl;
    b2.display();

    return 0;
}