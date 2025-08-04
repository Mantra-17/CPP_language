 
 #include <iostream>
 using namespace std;
 
 class bankacc
 {
 private:
     string accName;
     double accNumber;
     double accBalance;
 
 public:
     bankacc()
     {
         accName = "Blank";
         accNumber = 0;
         accBalance = 0;
     }
 
     bankacc(string acc_Name, double acc_Number, double acc_Balance)
     {
         accName = acc_Name;
         accNumber = acc_Number;
         accBalance = acc_Balance;
     }
 
     void display()
     {
         cout << "Account Holder Name: " << accName << endl;
         cout << "Account Number: " << accNumber << endl;
         cout << "Account Balance: " << accBalance << endl;
     }
 
     double getID()
     {
         return accNumber;
     }
 
     double getBalance()
     {
         return accBalance;
     }
 
     void deposit(double amount)
     {
         accBalance += amount;
     }
 
     bool withdraw(double amount)
     {
         if (amount > accBalance)
         {
             cout << "Insufficient Balance!" << endl;
             return false;
         }
         accBalance -= amount;
         return true;
     }
 };
 
 void details(bankacc A[], int &c)
 {
     if (c >= 10)
     {
         cout << "Max number of accounts reached!" << endl;
         return;
     }
 
     string accName;
     double accNumber, accBalance;
 
     cout << "Enter account holder name: ";
     cin.ignore();
     getline(cin, accName);
 
     cout << "Enter account number: ";
     cin >> accNumber;
 
     cout << "Enter the balance: ";
     cin >> accBalance;
 
     cout << "Details added successfully!\n" << endl;
 
     A[c] = bankacc(accName, accNumber, accBalance);
     c++;
 }
 
 int search(bankacc A[], int c, double id)
 {
     for (int i = 0; i < c; i++)
     {
         if (id == A[i].getID())
         {
             return i;
         }
     }
     return -1;
 }
 
 void transferMoney(bankacc A[], int c)
 {
     double senderID, receiverID, amount;
     cout << "Enter sender's account number: ";
     cin >> senderID;
     int senderIndex = search(A, c, senderID);
 
     if (senderIndex == -1)
     {
         cout << "Sender account not found!" << endl;
         return;
     }
 
     cout << "Enter receiver's account number: ";
     cin >> receiverID;
     int receiverIndex = search(A, c, receiverID);
 
     if (receiverIndex == -1)
     {
         cout << "Receiver account not found!" << endl;
         return;
     }
 
     cout << "Enter amount to transfer: ";
     cin >> amount;
 
     if (A[senderIndex].withdraw(amount))
     {
         A[receiverIndex].deposit(amount);
         cout << "Transaction Successful!" << endl;
     }
 }
 
 int main()
 {
     int choice, count = 0;
     bankacc accounts[10];
 
     while (true)
     {
         cout << "\nEnter number to perform an operation:" << endl;
         cout << "1. Add an account" << endl;
         cout << "2. Display all accounts" << endl;
         cout << "3. Check total accounts" << endl;
         cout << "4. Transfer Money" << endl;
         cout << "0. Exit" << endl;
         
         cin >> choice;
 
         switch (choice)
         {
         case 1:
             details(accounts, count);
             break;
         case 2:
             if (count == 0)
                 cout << "No accounts added yet!" << endl;
             else
                 for (int i = 0; i < count; i++)
                 {
                     cout << "\nAccount " << i + 1 << " Details:" << endl;
                     accounts[i].display();
                 }
             break;
         case 3:
             cout << "Total number of added accounts: " << count << endl;
             break;
         case 4:
             transferMoney(accounts, count);
             break;
         case 0:
             cout << "Patel Mantra\n24DCS076" << endl;
             return 0;
         default:
             cout << "Invalid choice! Try again." << endl;
         }
     }
     return 0;
 }
 