
#include <iostream>
#include <string>


using namespace std;

struct var { int arr[100]{ 0 }, number = 0; short arrLen = 0; };

int readPositiveNumber() {

    int number = 0;
    cout << "Enter a number: ";
    do
        cin >> number;
    while (number <= 0 || number > 100 || !(cin));

    return number;
}

void addArrElements(int arr[100], int number, short& arrLen) {

    arrLen = (arrLen + 1);
    arr[arrLen - 1] = number;

}

void tryAgain(int arr[100], short& arrLen, bool ans) {

    do 
    {
        addArrElements(arr, readPositiveNumber(), arrLen);
        cout << "Do you want to try again?: true 1, false 0" << endl; cin >> ans;

    } while (ans);
  
}

void printArrayElements(int arr[100], short arrLen) {

    for (int c = 0; c <= arrLen - 1; c++)
        cout << arr[c] << "  ";
    cout << endl;
}

int main() {

    system("cls");

    var _var;
    tryAgain(_var.arr, _var.arrLen, true);

    cout << "Array length: " << _var.arrLen << endl;
    cout << "Array elements: ";
    printArrayElements(_var.arr, _var.arrLen);
    

    system("pause");
    return 0;
}