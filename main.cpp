/*
File name: main.cpp
Developer: Zacary Cast
Email: zaccast97@gmail.com
Description: Employee Project. 
*/

#include <iostream>
#include <string>
#include <vector>

class BankAccount
{
public:
    BankAccount(double balance);
    void print_balance();
private:    
  double m_balance;
};

BankAccount::BankAccount(double balance)
{
  m_balance = balance;
}

void BankAccount::print_balance()
{
  std::cout << "Balance is: " << m_balance << std::endl;
}

class Employee
{
public:
   
   Employee();
   
   Employee(std::string employee_name, double initial_salary);
   
   void set_salary(double new_salary);
   
   double get_salary() const;
   
   void set_account(BankAccount* account);
   
   BankAccount* get_account();
   
   std::string get_name() const;
   
private:
   std::string name;
   double salary;
   BankAccount *m_account;
};

Employee::Employee()
{
   salary = 0;
}

Employee::Employee(std::string employee_name, double initial_salary)
{
   name = employee_name;
   salary = initial_salary;
}

void Employee::set_account(BankAccount* account)
{
  m_account = account;
}

BankAccount* Employee::get_account()
{
  return m_account;
}

void Employee::set_salary(double new_salary)
{
   salary = new_salary;
}

double Employee::get_salary() const
{
   return salary;
}


std::string Employee::get_name() const
{
   return name;
}


int main()
{
    
    Employee emp1("Fred Flintstone",50000.0);
    Employee emp2("Wilm Flintstone",55000.0);
    BankAccount *account = new BankAccount(100000);
    emp1.set_account(account);
    emp2.set_account(account);
    emp1.get_account()->print_balance();
    emp2.get_account()->print_balance();
    
    return 0;
}
