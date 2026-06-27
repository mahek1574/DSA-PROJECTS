#include<iostream>
#include<string>
using namespace std;

class BankAccount
{
protected:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount()
    {
        accountNumber = 0;
        accountHolderName = "";
        balance = 0;
    }

    virtual void accountType()
    {
        cout<<"bank account"<<endl;
    }

    void createAccount()
    {
        cout<<"enter Account Number : ";
        cin>>accountNumber;

        cin.ignore();

        cout<<"enter Account holder name : ";
        getline(cin,accountHolderName);

        cout<<"enter balance : ";
        cin>>balance;
    }

    void deposit(double amount)
    {
        balance = balance + amount;
        cout<<"amount deposite "<<endl;
    }

    void withdraw(double amount)
    {
        if(amount<=balance)
        {
            balance = balance - amount;
            cout<<"amount withdraw"<<endl;
        }
        else
        {
            cout<<"balance is not sufficiant"<<endl;
        }
    }

    void displayAccount()
    {
        cout<<"\n Account details "<<endl;
        cout<<"Account number : "<<accountNumber<<endl;
        cout<<"Account holder : "<<accountHolderName<<endl;
        cout<<"balance : "<<balance<<endl;
    }

    double getBalance()
    {
        return balance;
    }
};

class SavingsAccount : public BankAccount
{
private:
    double interestRate;

public:
    SavingsAccount()
    {
        interestRate = 3.0;
    }

    void accountType() override
    {
        cout<<"saving account"<<endl;
    }

    void calculateInterest()
    {
        double interest = (balance * interestRate) / 100;

        cout << "interest Rate : " << interestRate << "%" << endl;
        cout << "interest : " << interest << endl;
    }
};
class CheckingAccount : public BankAccount
{
private:
    double overdraftLimit;

public:
    CheckingAccount()
    {
        overdraftLimit = 2000;
    }

    void accountType() override
    {
        cout<<"cheaking account"<<endl;
    }

    void displayOverdraft()
    {
        cout << "overdraft limit : " << overdraftLimit << endl;
    }
};

class FixedDepositAccount : public BankAccount
{
private:
    double fdInterestRate;
    int years;

public:
    FixedDepositAccount()
    {
        fdInterestRate = 10.89;
        years = 3;
    }

    void accountType() override
    {
        cout<<"fixed account"<<endl;
    }

    void calculateFDInterest()
    {
        double interest = (balance * fdInterestRate * years) / 100;

        cout << " interest rate : " << fdInterestRate << "%" << endl;
        cout << "duration : " << years << " Year" << endl;
        cout << "interest : " << interest << endl;
    }
};
int main()
{
    SavingsAccount saving;
    CheckingAccount checking;
    FixedDepositAccount fd;

    BankAccount *ptr;

    int choice;
    double amount;

    while(true)
    {
        cout << "\n bank managment system" << endl;
        cout << "1. savings Account" << endl;
        cout << "2. cheak account" << endl;
        cout << "3. fixe deposite amount" << endl;
        cout << "4. exit" << endl;

        cout << "Enter your choice : ";
        cin >> choice;

        if(choice == 1)
        {
            ptr = &saving;
            ptr->accountType();

            int ch;

            while(true)
            {
                cout << "\n saving account" << endl;
                cout << "1. create account" << endl;
                cout << "2. deposit" << endl;
                cout << "3. withdraw" << endl;
                cout << "4. display info" << endl;
                cout << "5. intrest calculation" << endl;
                cout << "6. Back" << endl;

                cout << "enter choice : ";
                cin >> ch;

                if(ch == 1)
                {
                    saving.createAccount();
                }
                else if(ch == 2)
                {
                    cout << "enter amount : ";
                    cin >> amount;
                    saving.deposit(amount);
                }
                else if(ch == 3)
                {
                    cout << "enter amount : ";
                    cin >> amount;
                    saving.withdraw(amount);
                }
                else if(ch == 4)
                {
                    saving.displayAccount();
                }
                else if(ch == 5)
                {
                    saving.calculateInterest();
                }
                else if(ch == 6)
                {
                    break;
                }
                else
                {
                    cout << "invalid input" << endl;
                }
            }
        }
        else if(choice == 2)
        {
            ptr = &checking;
            ptr->accountType();

            int ch;

            while(true)
            {
                cout << "\n cheaking account" << endl;
                cout << "1. create account" << endl;
                cout << "2. deposit" << endl;
                cout << "3. withdraw" << endl;
                cout << "4. display account" << endl;
                cout << "5. show overdraft limit" << endl;
                cout << "6. Back" << endl;

                cout << "Enter choice : ";
                cin >> ch;

                if(ch == 1)
                    checking.createAccount();
                else if(ch == 2)
                {
                    cout << "Enter Amount : ";
                    cin >> amount;
                    checking.deposit(amount);
                }
                else if(ch == 3)
                {
                    cout << "Enter Amount : ";
                    cin >> amount;
                    checking.withdraw(amount);
                }
                else if(ch == 4)
                    checking.displayAccount();
                else if(ch == 5)
                    checking.displayOverdraft();
                else if(ch == 6)
                    break;
                else
                    cout << "invalid input" << endl;
            }
        }
        else if(choice == 3)
        {
            ptr = &fd;
            ptr->accountType();

            int ch;

            while(true)
            {
                cout << "\n fixed account " << endl;
                cout << "1. create account" << endl;
                cout << "2. deposit" << endl;
                cout << "3. disply accont" << endl;
                cout << "4. calculate intrest" << endl;
                cout << "5. Back" << endl;

                cout << "enter choice : ";
                cin >> ch;

                if(ch == 1)
                    fd.createAccount();
                else if(ch == 2)
                {
                    cout << "enter amount : ";
                    cin >> amount;
                    fd.deposit(amount);
                }
                else if(ch == 3)
                    fd.displayAccount();
                else if(ch == 4)
                    fd.calculateFDInterest();
                else if(ch == 5)
                    break;
                else
                    cout << "invalid input" << endl;
            }
        }
        else if(choice == 4)
        {
            cout << "thank you" << endl;
            break;
        }
        else
        {
            cout << "invalid input" << endl;
        }
    }

    return 0;
}