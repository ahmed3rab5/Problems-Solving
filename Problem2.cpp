
#include <iostream>
#include <string>

using namespace std;

struct var { int arr[100]{ 0 }, number = 0; int arrLen = 0; };

int randomNumbers(int from, int to) {

    int random = (rand() % (to - from + 1) + from); return random;

}

int readPositiveNumber(string msg) {

    int number = 0;
    do 
    {
        cin >> number;
        cout << msg << endl;

    } while (number <= 0 || !(cin)); return number;

}

void fillArrWithRandNumbers(int arr[100], int& arrLen) {

    for (int c = 0; c <= (arrLen - 1); c++)
        arr[c] = randomNumbers(1, 100);

}

void addArrElements(int arr[100], int number, int& arrLen) {

    arrLen = (arrLen + 1);
    arr[arrLen - 1] = number;

}

void copyArray(int arrSource[100], int number, int arrLen) {

    for (int c = 0; c <= (arrLen - 1); c++)
        addArrElements(arrSource, number, arrLen);

}

void printArrayElements(int arr[100], int arrLen) {

    for (int c = 0; c <= (arrLen - 1); c++)
        cout << arr[c] << ",  ";
    cout << endl;
}

int main() {

    var _var;
    srand((unsigned)time(NULL));

    _var.number = readPositiveNumber("Enter a number of elements:");
    fillArrWithRandNumbers(_var.arr, _var.number);
    copyArray(_var.arr, _var.number, _var.arrLen);

    cout << "Array(1) elements: ";
    printArrayElements(_var.arr, _var.number);

    cout << "Array(2) elements after copy: ";
    printArrayElements(_var.arr, _var.number);

    system("pause");
    return 0;
}