#include<iostream>
#include<string>
#include<conio.h>

using namespace std;


class BookStore {
public:
    string* title;
    string* author;
    float* price;
    int* stock;
    int* id;
    string* genre;
    int size;
  
    BookStore(int s) {
        size = s;
        title = new string[size];
        author = new string[size];
        price = new float[size];
        stock = new int[size];
        id = new int[size];
        genre = new string[size];
    }

   ~BookStore() {
        delete[] title;
        delete[] author;
        delete[] price;
        delete[] stock;
        delete[] id;
        delete[] genre;
    }
};


class Genre : public BookStore {
public:
    Genre(int s) : BookStore(s) {}

    void AddDetails() {
        cout << "Enter the number of books to be placed in store: ";
        cin >> size;

        for (int i = 0; i < size; i++) {
            cout << "\nEnter the details for book " << i + 1 << ":\n";
            cout << "Enter the title of Book: ";
            cin>>title[i];

            cout << "Enter the name of Author: ";
            cin>>author[i];

            cout << "Enter the price of book:$ ";
            cin >> price[i];

            cout << "Enter the ID no. of the book: ";
            cin >> id[i];

            cout << "Enter the total books of \"" << title[i] << "\" in stock: ";
            cin >> stock[i];

            cout << "Enter the genre of the book: ";
            cin>>genre[i];
        }
    }

    void ViewBooks() {
        system("CLS");
        if (size == 0) {
            cout << "No books in store.\n";
            return;
        }
cout<<"List of all the books available online on our application\n";
        for (int i = 0; i < size; i++) {
            cout<<"-----------------------------------------------------\n";
            cout << "\nBook " << i + 1 << " Details:\n";
            cout << "|Title: " << title[i]<< endl;
            cout << "|Author: " << author[i] << endl;
            cout << "|Price :$ " << price[i] << endl;
            cout << "|ID: " << id[i] << endl;
            cout << "|Stock: " << stock[i]<< endl;
            cout << "|Genre: " << genre[i]<< endl;
            cout<<"-----------------------------------------------------\n";
        }
    }

    void DeleteBookByTitle() {
        string targetTitle;
        cout << "Enter the title of the book to delete: ";
    cin>>targetTitle;
        bool found = false;
        

        for (int i = 0; i < size; i++) {
            if (title[i] == targetTitle) {
                for (int j = i; j < size - 1; j++) {
                    title[j] = title[j + 1];
                    author[j] = author[j + 1];
                    price[j] = price[j + 1];
                    id[j] = id[j + 1];
                    stock[j] = stock[j + 1];
                    genre[j] = genre[j + 1];
                }
                size--;
                cout << "Book titled \"" << targetTitle << "\" deleted successfully.\n";
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Error! Book not found.\n";
        }
    }

    void FilterByGenre() {
        string searchGenre;
        cout << "Enter genre to filter: ";
        cin>>searchGenre;
        bool found = false;

        for (int i = 0; i < size; i++) {
            if (genre[i] == searchGenre) {
                cout << "\nBook " << i + 1 << ":\n";
                cout << "Title: " << title[i] << endl;
                cout << "Author: " << author[i] << endl;
                cout << "Price:$ " << price[i] << endl;
                cout << "ID: " << id[i] << endl;
                cout << "Stock: " << stock[i] << endl;
                cout << "Genre: " << genre[i] << endl;
                found = true;
            }
        }

        if (!found) {
            cout << "No books found in genre \"" << searchGenre << "\".\n";
        }
    }
};


int main() {
    Genre g(100); 
    int choice;

    while(true)
    {
        cout << "\n========== ONLINE BOOKSTORE APP ==========\n";
        cout<<"Please select a task\n";
        cout << "|1. Add New Books\n";
        cout << "|2. View All Books\n";
        cout << "|3. Delete Book by Title\n";
        cout << "|4. Filter Books by Genre\n";
        cout << "|5. Exit\n";
        

        cout << "Enter your choice: ";
        cin >> choice;
        

        switch (choice) {
        case 1:
            g.AddDetails();
            break;
        case 2:
            g.ViewBooks();
            break;
        case 3:
            g.DeleteBookByTitle();
            break;
        case 4:
            g.FilterByGenre();
            break;
        case 5:
            cout << "Exiting application...\n";
            exit(0);
        default:
            cout << "Invalid choice. Try again.\n";
        }

    }

    return 0;
}
