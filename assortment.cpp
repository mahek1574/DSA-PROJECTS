#include <iostream>
using namespace std;

int main()
{

    // qui :1
    int n;

    cout << "enter the array size: ";
    cin >> n;

    int a[n];

    cout << "\n enter array elements:\n";

    for(int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    cout << "\nnegative elements:\n";

    for(int i = 0; i < n; i++)
    {
        if(a[i] < 0)
        {
            cout << a[i] << endl;
        }
    }

    cout << endl;


    // qui :2

    int row, col;

    cout << "enter the array row size: ";
    cin >> row;

    cout << "enter the array column size: ";
    cin >> col;

    int b[10][10];

    cout << "\nenter array elements:\n";

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> b[i][j];
        }
    }

    int largest = b[0][0];

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(b[i][j] > largest)
            {
                largest = b[i][j];
            }
        }
    }

    cout << "\n largest element: " << largest;

    cout << endl;

    // qui :3
    int row2, col2;

    cout << "enter row size: ";
    cin >> row2;

    cout << "enter column size: ";
    cin >> col2;

    int matrix[10][10];

    cout << "\nenter array's elements:\n";

    for(int i = 0; i < row2; i++)
    {
        for(int j = 0; j < col2; j++)
        {
            cout << "matrix[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }

    cout << "\nthe transpose matrix of an array:\n";

    for(int j = 0; j < col2; j++)
    {
        for(int i = 0; i < row2; i++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;


    // qui:4

   int row3, col3;

    cout << "enter row size: ";
    cin >> row3;

    cout << "enter column size: ";
    cin >> col3;

    int arr[10][10];

    cout << "\neter array element:\n";

    for(int i = 0; i < row3; i++)
    {
        for(int j = 0; j < col3; j++)
        {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    int rowNo, colNo;
    int rowSum = 0, colSum = 0;

    cout << "\nenter row number: ";
    cin >> rowNo;

    cout << "elements of row " << rowNo << ": ";
    for(int j = 0; j < col3; j++)
    {
        cout << arr[rowNo][j] << " ";
        rowSum += arr[rowNo][j];
    }

    cout << "\nthe sum of row " << rowNo << ": " << rowSum;

    cout << "\n\nenter column number: ";
    cin >> colNo;

    cout << "elements column " << colNo << ": ";
    for(int i = 0; i < row3; i++)
    {
        cout << arr[i][colNo] << " ";
        colSum += arr[i][colNo];
    }

    cout << "\n sum column " << colNo << ": " << colSum;
    return 0;
}
