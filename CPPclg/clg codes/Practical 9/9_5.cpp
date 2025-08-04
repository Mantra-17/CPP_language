#include <iostream>
#include <map>
#include <queue>
#include <string>

using namespace std;

class LibraryException : public exception {
public:
    virtual const char* what() const throw() {
        return "Library exception occurred";
    }
};

class BookNotFoundException : public LibraryException {
public:
    const char* what() const throw() {
        return "Book not found";
    }
};

class MemberNotFoundException : public LibraryException {
public:
    const char* what() const throw() {
        return "Member not found";
    }
};

class OverdueBookException : public LibraryException {
public:
    const char* what() const throw() {
        return "Book is overdue";
    }
};

class Library {
    map<int, string> books;
    map<int, string> members;
    queue<int> borrowRequests;

public:
    void addBook(int id, const string& title) {
        books[id] = title;
    }

    void addMember(int id, const string& name) {
        members[id] = name;
    }

    void borrowBook(int bookId, int memberId, bool overdue) {
        if (books.find(bookId) == books.end())
            throw BookNotFoundException();
        if (members.find(memberId) == members.end())
            throw MemberNotFoundException();
        if (overdue)
            throw OverdueBookException();
        borrowRequests.push(bookId);
        cout << members[memberId] << " borrowed " << books[bookId] << endl;
    }
};
int main() {
    Library lib;
    lib.addBook(1, "1984");
    lib.addMember(100, "Alice");

    try {
        lib.borrowBook(1, 100, false);
        lib.borrowBook(2, 100, false);
    } catch (LibraryException& e) {
        cout << e.what() << endl;
    }
    cout<<"Patel Mantra\n24DCS076";
    return 0;
}
