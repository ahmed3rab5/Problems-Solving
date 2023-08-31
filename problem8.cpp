

#include <iostream>
#include <math.h>

using namespace std;

int randomNumber(int from, int to) {

    int randnom = (rand() % (to - from + 1)) + from; return randnom;

}

int ReadPositiveNumber(string msg) {

    int number = 0;
    do
    {
        cout << msg << endl;
        cin >> number;

    } while (number <= 0 || !(cin));

    return number;
}

void fillArrWithRandomNum(int arr[100], int& arrLen) {

    for (int c = 0; c <= (arrLen - 1); c++)
        arr[c] = randomNumber(-100, 100);
       
}

int oddNumber(int arr[100], int arrLen) {

    int countOddNumber = 0;
    for (int c = 0; c <= (arrLen - 1); c++)
        if ((arr[c] >= -1))
           countOddNumber++;
    return countOddNumber;
}

void printArrElements(int arr[100], int arrLen) {

    for (int c = 0; c <= (arrLen - 1); c++) 
        cout << arr[c] << "  ";
    cout << endl;
}

int main() {

    srand((unsigned)time(NULL));
    int arr[100]{ 0 }, countOddNumber = 0;
    int readPosNumber = ReadPositiveNumber("\nEnter the size of array: ");
    fillArrWithRandomNum(arr, readPosNumber);
     
    countOddNumber = oddNumber(arr, readPosNumber);
    cout << "\nArray elements: ";

    printArrElements(arr, readPosNumber);
    cout << "\nEven Numbers in array: " << countOddNumber << endl;

    cout << endl;
    system("pause"); 
    return 0;
}