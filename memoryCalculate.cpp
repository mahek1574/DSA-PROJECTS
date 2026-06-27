#include<iostream>
#include<vector>
#include<string>

using namespace std;


template<class T>
class Student
{
public:

    T id;
    string name;

    Student(T i, string n)
    {
        id = i;
        name = n;
    }

    void display()
    {
        cout << "\n student id : " << id << endl;
        cout << "student name : " << name << endl;
    }
};

void addStudent(vector<Student<int>> &students)
{
    int id;
    string name;

    cout << "\n enter student id: ";
    cin >> id;

    cin.ignore();

    cout << "enter student name : ";
    getline(cin, name);

    Student<int> s(id, name);

    students.push_back(s);

    cout << "\nstudent Added.\n";
}

void displayStudents(vector<Student<int>> &students)
{
    if(students.size() == 0)
    {
        cout << "\nno Student\n";
        return;
    }

    cout << "\n student list\n";

    for(int i = 0; i < students.size(); i++)
    {
        students[i].display();
    }
}

void searchStudent(vector<Student<int>> &students)
{
    int id;
    bool found = false;

    cout << "\nEnter Student ID : ";
    cin >> id;

    for(int i = 0; i < students.size(); i++)
    {
        if(students[i].id == id)
        {
            cout << "\nstudent found\n";
            students[i].display();
            found = true;
            break;
        }
    }

    if(found == false)
    {
        cout << "\n student not found\n";
    }
}

void removeStudent(vector<Student<int>> &students)
{
    int id;
    bool found = false;

    cout << "\nEnter id for delete the student : ";
    cin >> id;

    for(int i = 0; i < students.size(); i++)
    {
        if(students[i].id == id)
        {
            students.erase(students.begin() + i);

            cout << "\n student remove\n";

            found = true;
            break;
        }
    }

    if(found == false)
    {
        cout << "\n student not found\n";
    }
}

int main()
{
    vector<Student<int>> students;

    int choice;

    do
    {
        
        cout << "\n student management system";

        cout << "\n1. add student";
        cout << "\n2. display students";
        cout << "\n3. remove student";
        cout << "\n4. search student";
        cout << "\n5. exit";

        cout << "\n\n enter choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addStudent(students);
                break;

            case 2:
                displayStudents(students);
                break;

            case 3:
                removeStudent(students);
                break;

            case 4:
                searchStudent(students);
                break;

            case 5:
                cout << "\nthank You\n";
                break;

            default:
                cout << "\n invalid input\n";
        }

    }while(choice != 5);

    return 0;
