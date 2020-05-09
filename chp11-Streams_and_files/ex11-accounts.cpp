// FILE: ex11-accounts.cpp
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Account {
public:
  Account(): Account(0, "", "", 0.0){}
  Account(int id, string fn, string ln, double bal):
      id(id), fn(fn), ln(ln), balance(bal){}
  void save(ofstream& out){
    out.write(reinterpret_cast<char*>(this), sizeof(Account));
  }

  void show(){
    cout << "id= " << id
         << ", fn= " << fn
         << ", ln= " << ln
         << ", balance= " << balance
         << endl;
  }
  static Account read(ifstream& in){
    Account a;
    in.read(reinterpret_cast<char*>(&a), sizeof(Account));
    return a;
  }

private:
  int id;
  string fn, ln;
  double balance;
};

int main(){
  // Create an account
  Account a(982, "Mark", "Twain", 8729.78);

  // Save the account to the accound.dat binary file
  ofstream out("account.dat", ios::binary);
  a.save(out);
  out.close();

  // Read in the account from account.dat
  ifstream in("account.dat", ios::binary);
  Account d = Account::read(in);
  in.close();

  d.show();

  return 0;
}
