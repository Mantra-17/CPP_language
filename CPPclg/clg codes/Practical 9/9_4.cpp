// STL  Approach

#include <iostream>
#include <string>
#include <map>
#include <queue>
#include <exception>
using namespace std;
// Base Exception Class
class LibraryException : public std::exception {
public:
    virtual const char* what() const noexcept override {
        return "LibraryException occurred";
    }
};

// Derived Exceptions
class BookNotFoundException : public LibraryException {
public:
    const char* what() const noexcept override {
        return "Book not found in the library.";
    }
};

class MemberNotFoundException : public LibraryException {
public:
    const char* what() const noexcept override {
        return "Member not found.";
    }
};

class OverdueBookException : public LibraryException {
public:
    const char* what() const noexcept override {
        return "Cannot borrow: Member has overdue books.";
    }
};

// Library system using STL
class LibrarySTL {
    std::map<int, std::string> books;           // bookID -> bookName
    std::map<int, bool> overdueMembers;         // memberID -> hasOverdueBooks
    std::queue<int> borrowRequests;             // Queue of book borrow requests (bookID)

public:
    void addBook(int bookID, const std::string& name) {
        books[bookID] = name;
    }

    void markMemberOverdue(int memberID) {
        overdueMembers[memberID] = true;
    }

    void borrowBook(int memberID, int bookID) {
        std::cout << "Borrow attempt: Member " << memberID << ", Book " << bookID << "\n";

        if (books.find(bookID) == books.end()) {
            throw BookNotFoundException();
        }

        if (overdueMembers.find(memberID) == overdueMembers.end()) {
            throw MemberNotFoundException();
        }

        if (overdueMembers[memberID]) {
            throw OverdueBookException();
        }

        borrowRequests.push(bookID);
        std::cout << "Book borrowed successfully: " << books[bookID] << "\n";
    }
};

//Non-STL (Array-Based) Approach

#define MAX_BOOKS 5
#define MAX_MEMBERS 5

class LibraryNonSTL {
    int bookIDs[MAX_BOOKS] = {101, 102, 103, 104, 105};
    std::string bookNames[MAX_BOOKS] = {"C++", "Java", "Python", "DSA", "OS"};
    int memberIDs[MAX_MEMBERS] = {1, 2, 3, 4, 5};
    bool overdue[MAX_MEMBERS] = {false, true, false, false, false}; // member 2 has overdue

public:
    void borrowBook(int memberID, int bookID) {
        std::cout << "Borrow attempt (non-STL): Member " << memberID << ", Book " << bookID << "\n";

        bool bookFound = false;
        for (int i = 0; i < MAX_BOOKS; ++i) {
            if (bookIDs[i] == bookID) {
                bookFound = true;
                break;
            }
        }
        if (!bookFound) throw BookNotFoundException();

        int memberIndex = -1;
        for (int i = 0; i < MAX_MEMBERS; ++i) {
            if (memberIDs[i] == memberID) {
                memberIndex = i;
                break;
            }
        }
        if (memberIndex == -1) throw MemberNotFoundException();
        if (overdue[memberIndex]) throw OverdueBookException();

        std::cout << "Book borrowed successfully (non-STL)\n";
    }
};
int main() {
    LibrarySTL stlLib;
    stlLib.addBook(101, "C++ Programming");
    stlLib.addBook(102, "Data Structures");
    stlLib.markMemberOverdue(1);  // Member 1 has overdue
    stlLib.markMemberOverdue(2);  // Member 2 has overdue
    stlLib.markMemberOverdue(3);  // Member 3 has no overdue

    std::cout << "\n--- STL Library Demo ---\n";
    try {
        stlLib.borrowBook(3, 101);  // Success
        stlLib.borrowBook(1, 102);  // Overdue
    }
    catch (LibraryException& e) {
        std::cerr << "Exception: " << e.what() << "\n";
    }

    LibraryNonSTL rawLib;
    std::cout << "\n--- Non-STL Library Demo ---\n";
    try {
        rawLib.borrowBook(2, 104);  // Overdue
    }
    catch (LibraryException& e) {
        std::cerr << "Exception: " << e.what() << "\n";
    }
    cout<<"Patel Mantra\n24DCS076";
    return 0;
}
