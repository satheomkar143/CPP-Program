#include<iostream>
using namespace std;

class Customer
{
    protected:
        string name;
        double no;
    public:
        void get()
        {
            cout<<"Enter customer name: \n";
            cin>>name;
            cout<<"Enter contact number:\n";
            cin>>no;
        }
};
class Bank : public Customer
{
    protected:
        string bank_name;
        int IFSC;
    public:
        void get()
        {
            cout<<"Enter bank name:\n";
            cin>>bank_name;
            cout<<"Enter IFSC code:\n";
            cin>>IFSC;
        }
    
};
class Saving_Acc
{
    protected:
        double saving_acc_no;
        double saving_bal;
    public:
        void get()
        {
            cout<<"Enter saving account number:\n";
            cin>>saving_acc_no;
            cout<<"Enter saving account balance:\n";
            cin>>saving_bal;
        }
};
class Current_Acc : public Saving_Acc, public Bank
{
    protected:
        double current_acc_no;
        double current_bal;
    public:
        void get()
        {
            Customer::get();
            Bank::get();
            Saving_Acc::get();
            cout<<"Enter current account number:\n";
            cin>>current_acc_no;
            cout<<"Enter current account balance:\n";
            cin>>current_bal;
        }
        void show()
        {
            cout<<"\nCustomer name: "<<name;
            cout<<"\nContact number: "<<no;
            cout<<"\nBank name: "<<bank_name;
            cout<<"\nIFSC code: "<<IFSC;
            cout<<"\nsaving account number: "<<saving_acc_no;
            cout<<"\nsaving account balance: "<<saving_bal;
            cout<<"\ncurrent account number: "<<current_acc_no;
            cout<<"\ncurrent account balance: "<<current_bal;
        }
};
int main()
{
    Current_Acc c;
    c.get();
    c.show();
}