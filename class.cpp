#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
public:
    string empno;
    string name;
    int salary;
    string dept;

public:
    Employee()
    {
        empno = "";
        name = "";
        salary = 0;
        dept = "";
    }
    void Accept()
    {
        cout << "Enter employeen number ";
        cin >> empno;
        cout << "Enter name ";
        cin >> name;
        cout << "Enter salary ";
        cin >> salary;
        cout << "Enter department ";
        cin >> dept;
        cout << "\n";
    }

    void Display()
    {
        cout << "Employee Number is " << empno << endl;
        cout << "Employee Name   is " << name << endl;
        cout << "Employee salary is " << salary << endl;
        cout << "Employee Dept.  is " << dept << endl
             << "\n";
    }
};

void sortsal(Employee *E, int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - 1 - i; j++)
        {
            if (E[j].salary > E[j + 1].salary)
            {
                Employee temp = E[j];
                E[j] = E[j + 1];
                E[j + 1] = temp;
            }
        }
    }
}

void sortname(Employee *E, int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - 1 - i; j++)
        {
            if (E[j].name > E[j + 1].name)
            {
                Employee temp = E[j];
                E[j] = E[j + 1];
                E[j + 1] = temp;
            }
        }
    }
}

void sortempno(Employee *E, int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - 1 - i; j++)
        {
            if (E[j].empno > E[j + 1].empno)
            {
                Employee temp = E[j];
                E[j] = E[j + 1];
                E[j + 1] = temp;
            }
        }
    }
}

int main()
{
    Employee E[10];
    cout << "Enter the Number of Employee" << endl;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        E[i].Accept();
    }
    cout << " Press 1 to sort Employee By salary\n Press 2 to sort Employee By Name \n Press 3 to sort by Employee Number " << endl;
    int n;
    cin >> n;
    switch (n)
    {
    case 1:
        sortsal(E, size);
        break;
    case 2:
        sortname(E, size);
        break;
    case 3:
        sortempno(E, size);
        break;
    default:
        cout << "Invalid Input" << endl;
    }
    for (int i = 0; i < size; i++)
    {
        E[i].Display();
    }
    return 0;
}
