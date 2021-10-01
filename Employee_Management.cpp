#include <iostream>
using namespace std;

class Employee
{
    int id;
    int workinghr;
    int progsal;
    int graphsal;

public:
    void set_workinghr(int hr)
    {
        workinghr = hr;
    }

    void set_id(int a)
    {
        id = a;
    }

    void display_progsalary(void)
    {
        cout << "Employee's Salary: " << 100 * workinghr << endl;
    }

    void display_graphsalary(void)
    {
        cout << "Employee's Salary: " << 90 * workinghr << endl;
    }

    void display_workinghr(void)
    {
        cout << "Employee's Working Hours: " << workinghr << endl;
    }
};

int main()
{
    int id;
    int i;
    int w;
    Employee sasmit;
    Employee rohan;
    Employee sahil;

    sasmit.set_id(5001);
    rohan.set_id(5002);
    sahil.set_id(5003);

    sasmit.set_workinghr(200);
    rohan.set_workinghr(280);
    sahil.set_workinghr(255);

    for (size_t w = 1; w < 3; i++)
    {
        cout << "*********************WELCOME********************" << endl;
        cout << "1: Menu" << endl;
        cout << "2: Exit" << endl;
        cout << "Enter Above Option to Continue " << endl;
        cin >> w;
        if (w == 1)
        {
            for (size_t i = 1; i < 4; i++)

            {
                cout << "----------------------------------------------" << endl;
                cout << "Employee Management" << endl;
                cout << "----------------------------------------------" << endl;
                cout << "1: To View Your Salary Per Month" << endl;
                cout << "2: To View Your Profile" << endl;
                cout << "3: To View Your Last Month's Working Hours" << endl;
                cout << "4: To Quit" << endl;
                cout << "Enter From Options Above" << endl;
                cin >> i;

                if (i == 1)
                {
                    cout << "----------------------------------------------" << endl;
                    cout << "Enter Your Id To View Your Salary" << endl;
                    cin >> id;
                    cout << "----------------------------------------------" << endl;
                    if (id == 1001)
                    {
                        cout << "*************Employee Salary***************" << endl;
                        cout << "Name : Sasmit Nalkande" << endl;
                        sasmit.display_progsalary();
                    }
                    else if (id == 1002)
                    {
                        cout << "*************Employee Salary***************" << endl;
                        cout << "Name : Rohan Kale" << endl;
                        rohan.display_graphsalary();
                    }
                    else if (id == 1003)
                    {
                        cout << "*************Employee Salary***************" << endl;
                        cout << "Name : Sahil Pawar" << endl;
                        sahil.display_graphsalary();
                    }
                    else
                    {
                        cout << "Wrong Id" << endl;
                    }
                    break;
                }
                else if (i == 2)
                {
                    cout << "----------------------------------------------" << endl;
                    cout << "Enter Your Id To View Your Profile" << endl;
                    cin >> id;
                    cout << "----------------------------------------------" << endl;
                    if (id == 1001)
                    {
                        cout << "**************Employee Profile***************" << endl;
                        cout << "Name : Sasmit Nalkande" << endl;
                        cout << "Job : Programmer" << endl;
                    }
                    else if (id == 1002)
                    {
                        cout << "**************Employee Profile***************" << endl;
                        cout << "Name : Rohan Kale" << endl;
                        cout << "Job : Graphic Designer" << endl;
                    }
                    else if (id == 1003)
                    {
                        cout << "**************Employee Profile***************" << endl;
                        cout << "Name : Sahil Pawar" << endl;
                        cout << "Job : Graphic Designer" << endl;
                    }
                    else
                    {
                        cout << "Wrong Id" << endl;
                    }
                    break;
                }

                else if (i == 3)
                {
                    cout << "----------------------------------------------" << endl;
                    cout << "Enter Your Id To View Your Working Time" << endl;
                    cin >> id;
                    cout << "----------------------------------------------" << endl;

                    if (id == 1001)
                    {
                        cout << "***************Employee Working Hours****************" << endl;
                        cout << "Name : Sasmit Nalkande" << endl;
                        sasmit.display_workinghr();
                    }
                    else if (id == 1002)
                    {
                        cout << "***************Employee Working Hours****************" << endl;
                        cout << "Name : Rohan Kale" << endl;
                        rohan.display_workinghr();
                    }
                    else if (id == 1003)
                    {
                        cout << "***************Employee Working Hours****************" << endl;
                        cout << "Name : Sahil Pawar" << endl;
                        sahil.display_workinghr();
                    }
                    else
                    {
                        cout << "Wrong Id" << endl;
                    }

                    break;
                }

                else
                {
                    exit(0);
                }
            }
            continue;
        }

        else if (w == 2)
        {
            exit(0);
            break;
        }
        else
        {
            cout << "Wrong Option" << endl;            
            break;
        }
    }

    return 0;
}
