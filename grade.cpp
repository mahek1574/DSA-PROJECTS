#include <iostream>
using namespace std;

int main(){

    int marks;
    char grade;

    cout << "Enter your marks: ";
    cin >> marks;


    grade = (marks >= 90) ? 'A':
            (marks >= 80) ? 'B' :
            (marks >= 70) ? 'C' :
            (marks >= 60) ? 'D' : 'F';

    cout << "Your Grade is: " << grade << endl;

    switch(grade){

        case 'A':
            cout << "Excellent" << endl;
            break;

        case 'B':
            cout << "Very good performance" << endl;
            break;

        case 'C':
            cout << "good,Keep improving" << endl;
            break;

        case 'D':
            cout << "You passed, Work Harder" << endl;
            break;

        case 'F':
            cout << "Failed, better luck next time." << endl;
            break;

        default:
            cout << "invalid Grade";
    }

    if(marks >= 90){
        cout << "congratulations.you scored " << marks 
             << " marks. amazing performance.";
    }
    else if(marks >= 60){
        cout << "congratulations. you passed the exam.";
    }
    else{
        cout << "you are not eligible. Study harder";
    }

    return 0;
}