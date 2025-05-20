// Create a multilevel inheritance structure with : 
// -Class 1 : Student – to input student name 
// - Class 2 : Marks – to input marks of 3 subjects using array 
// - Class 3 : Result – to calculate and display total and percentage.
#include <iostream>
using namespace std;
class Student{
    protected:
        string name[1];
    public:
        void setNames(){
            cout << "Enter  student name: ";
            cin >> name[0];
        }
};
class Marks : public Student{
    protected:
        int marks[3];
    public:
        void setMarks(){
            cout << "Enter marks for 3 subjects between (0 - 50):";
            for (int i= 0 ; i < 3 ; i++)
            {
                cin >> marks[i];
            }
        }
};     
class Result : public Marks{
    public:
        void showResult(){
            int total = 0;
            for(int i = 0 ; i < 3 ; i++)
            {
                total += marks[i];
            }
            float percentage = (float)total / 3;
            cout << "Total marks of student is :" << total << endl;
            cout << "Percentage of student is : " << percentage << "%" << endl;

        }
};                                                                                                                                                                using namespace std;
int main()
{
    Result r;
    r.setNames();
    r.setMarks();
    r.showResult();
    return 0;
}