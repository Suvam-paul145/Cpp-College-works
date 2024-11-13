

#include <iostream>
using namespace std;

class student
{
public:
    string name;
    string sub_name;
    int numbers;
    float marks;
    float total_marks = 0;
    float avg_marks;
    int sub_no;

    void setStudent_name()
    {
        cout << "Please enter the student name: ";
        cin >> name;
    }

    void set_Subjects()
    {
        cout << "Please enter the subject name: ";
        cin >> sub_name;
        cout << "Enter marks for " << sub_name << ": ";
        cin >> marks;
        total_marks += marks;
    }

    void calculateAverage()
    {
        if (sub_no > 0)
        {
            avg_marks = total_marks / sub_no;
        }
        else
        {
            avg_marks = 0;
        }
    }

    void display()
    {
        cout << "Student name: " << name << endl;
        cout << "Average marks: " << avg_marks << endl;
    }
};

int main()
{
    int std_no, sub_no;
    cout << "Please enter the number of students: ";
    cin >> std_no;
    cout << "Please enter the number of subjects: ";
    cin >> sub_no;

    // Pointer declaration
    student *ptr = new student[std_no];
    student *temp = ptr;

    for (int i = 0; i < std_no; i++)
    {
        ptr->sub_no = sub_no;
        ptr->setStudent_name();

        for (int j = 0; j < sub_no; j++)
        {
            ptr->set_Subjects();
        }

        ptr->calculateAverage();
        ptr++;
    }

    ptr = temp;

    for (int i = 0; i < std_no; i++)
    {
        ptr->display();
        ptr++;
    }

    delete[] temp;

    return 0;
}
