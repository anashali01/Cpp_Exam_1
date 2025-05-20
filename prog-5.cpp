// Create a menu-driven program that performs the following using a vector of strings:
// - Add a student name
// - View all student names
// - Delete student name by index
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int choice;
    vector<string> students;
    cout << "Welcome to the Student Management System" << endl;

    do
    {
        cout << "==========================" << endl;
        cout << "1. Add Student Name " << endl;
        cout << "2. Show all Student Names" << endl;
        cout << "3. Delete Student Name by Index" << endl;
        cout << "4. Exit" << endl;
        cout << "==========================" << endl;
        cout << "Enter your choice : ";
        cin >> choice;
        
        switch (choice)
        {
            case 1:
                {
                    string name;
                    cout << "Enter student name: ";
                    cin >> name;
                    students.push_back(name);
                    cout << "Student name added successfully!" << endl;
                }
                break;
            case 2:
                {
                    cout << "Student names are: " << endl;
                    for (int i = 0; i < students.size(); i++)
                    {
                        cout << i + 1 << ". " << students[i] << endl;
                    }
                }
                break;
            case 3:
                {
                    int index;
                    cout << "Enter index to delete (1 to " << students.size() << "): ";
                    cin >> index;
                    if (index > 0 && index <= students.size())
                    {
                        students.erase(students.begin() + index - 1);
                        cout << "Student name deleted successfully!" << endl;
                    }
                    else
                    {
                        cout << "Invalid index!" << endl;
                    }
                }
                break;
            case 4:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);
    return 0;
}