// Create a class Student to store 5 student names using an array. Create a derived class
// Display that will show all student names using single inheritance.
#include <iostream>
using namespace std;
class Student{
    protected:
        string names[5];
    public:
        void setNames(){
            cout << "Enter 5 student names: " << endl;
            for(int i=0; i<5; i++){
                cout << "Name " << i << ": ";
                cin >> names[i];
            }
        }
};
class Display : public Student{
    public:
        void showNames(){
            for(int i = 0; i < 5; i++)
            {
                cout << "Names : " << names[i] << endl;
            }
        }
};
int main()
{
    Display d;
    d.setNames();
    d.showNames();
    return 0;
}