
#include <iostream>
using namespace std;

int main(){

  
// alphabet program
    char ch = 'A';

    cout << "Alphabet skip 3 letters:" << endl;

    do{
        cout << ch << " ";

        ch = ch + 4;

    }while(ch <= 'Z');

    cout << endl << endl;


//   print total digit 
    int num;
    int count = 0;

    cout << "enter a number to count digits: ";
    cin >> num;

    int temp = num;

    while(temp > 0){

        temp = temp / 10;

        count++;
    }

    cout << "total digits: " << count << endl << endl;



    // total of last and first digit
    int number;
    int firstdigit, lastdigit, sum;

    cout << "enter a number: ";
    cin >> number;

    lastdigit = number % 10;

    int num2 = number;

    while(num2 >= 10){
        num2 = temp2 / 10;
    }

    firstdigit = num2;

    sum = firstdigit + lastdigit;

    cout << "first digit: " << firstdigit << endl;
    cout << "last digit: " << lastdigit << endl;
    cout << "Sum of first and last digit: " << sum << endl;

    return 0;
}