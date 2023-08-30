

#include <iostream>
#include <math.h>

using namespace std;

int ReadPositiveNumber(string msg) {

    int number = 0;
    do
    {
        cout << msg << endl;
        cin >> number;

    } while (number <= 0 || !(cin));

    return number;
}

void fillArray(int arr[100], int& arrLen) {

    for (int c = 0; c <= (arrLen - 1); c++) {
        cout << "Enter a number of [" << (c + 1)   << "] =  ";
        cin >> arr[c];
    }    

}

bool isPalindrum(int arr[100], int arrLen) {

    for (int c = 0; c <= (arrLen - 1); c++)
        if ((arr[c] != arr[arrLen - c - 1]))
            return false;
    return true;
}

void printArrElements(int arr[100], int arrLen) {

    for (int c = 0; c <= (arrLen - 1); c++) 
        cout << arr[c] << "  ";
    cout << endl;
}

int main() {

    int arr[100]{ 0 };
    int readPNumber = ReadPositiveNumber("\nEnter the size of array: ");

    fillArray(arr, readPNumber);

    cout << "\n\nArray elements: ";
    printArrElements(arr, readPNumber);

    if (!isPalindrum(arr, readPNumber))
        cout << "Array not Palindrume numbers\n";
    else  
        cout << "Array is Palindrume numbers\n";

    cout << endl;
    system("pause"); 
    return 0;
}