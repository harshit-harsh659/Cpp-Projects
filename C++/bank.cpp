/*#include <iostream>
#include <vector>
using namespace std;

template <class T> class BankAcc {
  string Name;
  T Balance;
  T AccountNumber;
  static T NextAccountNumber;
  static T TotalAccount;

public:
  BankAcc() {
    Name = " ";
    Balance = 0;
    TotalAccount++;
  }

  void create(string pass) {
    Name = pass;
    AccountNumber = NextAccountNumber++;
    TotalAccount++;
  }

  void deposit(void) {
    int temp;
    cout << "Enter the amount to deposit: ";
    cin >> temp;
    Balance += temp;
    cout << endl << temp << "deposited successfully" << endl;
  }

  void withdraw(void) {
    int temp;
    cout << "Enter Amount" << endl;
    cin >> temp;
    if (temp > Balance) {
      cout << "Not enough balance" << endl;
      exit(0);
    } else {
      Balance -= temp;
      cout << temp << "withdrawn successfully" << endl;
    }
  }

  void display() {
    cout << "Final Details: " << endl << endl;
    cout << endl << "Account holder name : " << Name << ".";
    cout << endl << "Account number : " << AccountNumber << ".";
    cout << endl << "Balance : " << Balance << ".";
  }

  static int TotalAcc(void) { return TotalAccount; }
};

int BankAcc<T>::NextAccountNumber = 1000;
int BankAcc::TotalAccount;

int main() {
  int option, counter = 0, ID;
  string Nam;
  vector<BankAcc<int>> acc;

  system("clear");

  do {
    cout << "Which Operation do you want to perform" << endl
         << "1.Create Acc" << endl
         << "2.Deposit" << endl
         << "3.Withdraw" << endl
         << "4.Account Details" << endl
         << "5.Total Accounts" << endl
         << "6.Exit program" << endl;
    cin >> option;
    switch (option) {
    case 1:
      cout << "Enter Name: ";
      cin >> Nam;
      acc[counter].create(Nam);
      cout << "Account created. Welcome!" << acc[1] << endl;
      counter++;
      break;
    case 2:
      cout << endl << "ID of acc: ";
      cin >> ID;
      acc[ID - 1000].deposit();
      break;
    case 3:
      cout << endl << "ID of acc: ";
      cin >> ID;
      acc[ID - 1000].withdraw();
      break;
    case 4:
      cout << endl << "ID of acc: ";
      cin >> ID;
      acc[ID - 1000].display();
      break;
    case 5:
      cout << endl << BankAcc::TotalAcc();
    };
  } while (option != 6);
  cout << endl << "Thank You!.";

  return 0;
}
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Accounts {

  string acc_Name;
  double acc_Balance;
  static int acc_ID;

public:
  static int acc_Count;
  int acc_Number;

  Accounts(void) {
    acc_Count++;
    acc_ID++;
    acc_Name = " ";
    acc_Balance = 0;
    acc_Number = acc_ID;
  }

  int get_total_acc() { return acc_Count; }

protected:
  void deposit(double amount) { acc_Balance += amount; }

  void withdraw(double amount) { acc_Balance -= amount; }

  void set_name(string name) { acc_Name = name; }

  void display(void) {
    cout << "The name of the user is " << acc_Name << endl;
    cout << "The account number is " << acc_Number << endl;
    cout << "The balance is " << acc_Balance << endl;
  }

  int get_acc_balance() { return acc_Balance; }
};

int Accounts::acc_Count = 0;
int Accounts::acc_ID = 1000;

class Bank_manage : protected Accounts {
public:
  void withdraw(double x) {
    if (x > get_acc_balance()) {
      cout << "Insufficient balance" << endl;
      return;
    } else {
      Accounts::withdraw(x);
    }
  }

  void deposit(double x) { Accounts::deposit(x); }
};

class User : public Bank_manage {

public:
  void display(void) { Bank_manage::display(); }

  void withdraw(double x) { Bank_manage::withdraw(x); }

  void deposit(double x) { Bank_manage::deposit(x); }

  void set_name(string name) { Bank_manage::set_name(name); }

  int get_acc_id() { return acc_Number; }
};

int main() {
  int option;
  int acc_no;
  string us_name;
  double amount;
  vector<User> users;
  do {
    cout << "Hi there please choose an operation to perform:" << endl;
  cout << "1. Create an account" << endl;
  cout << "2. Deposit money" << endl;
  cout << "3. Withdraw money" << endl;
  cout << "4. Display account details" << endl;
  cout << "5. Total accounts" << endl;
  cout << "6. Exit" << endl;
  cin >> option;

  switch (option) {
  case 1:
    users.push_back(User());
    cout << "Please enter your name: ";
    cin >> us_name;
    users.back().set_name(us_name);
    cout << "Account created successfully" << endl;
    users.back().display();
    break;
  case 2:
    cout << "Please enter Acc. No.: ";
    cin >> acc_no;
    for (auto &user : users) {
      if (user.get_acc_id() == acc_no) {
        cout << "Please enter amount to deposit: ";
        cin >> amount;
        user.deposit(amount);
        break;
      }
    }
    break;
  case 3:
    cout << "Please enter Acc. No.: ";
    cin >> acc_no;
    for (auto &user : users) {
      if (user.get_acc_id() == acc_no) {
        cout << "Please enter amount to withdraw: ";
        cin >> amount;
        user.withdraw(amount);
        break;
      }
    }
    break;
  case 4:
    cout << "Please enter Acc. No.: ";
    cin >> acc_no;
    for (auto user : users) {
      if (user.get_acc_id() == acc_no) {
        user.display();
        break;
      }
    }
    break;
  case 5:
    cout << "Total accounts: " << users.size() << endl;
    break;
  case 6:
    cout << "Exiting... Have a nice day!" << endl;
    break;
  default:
    cout << "Invalid option" << endl;
  }

  } while (option != 6);
  return 0;
}