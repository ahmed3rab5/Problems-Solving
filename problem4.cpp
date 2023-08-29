

#include <iostream>
#include <math.h>

using namespace std;

struct var { int arr[100]{ 0 }, arrDes2[100]{ 0 }, arrLen = 0, arrDesLen2 = 0; };

enum enCheckPrimeNumber { isPrime = 1, notPrime = 2 };

int randomNumbers(int from, int to) {

    int random = (rand() % (to - from + 1) + from); return random;

}

enCheckPrimeNumber checkPrimeOrNotPrime(int number) {

    int r = round(number / 2);
    for (int count = 2; count <= r; count = (count + 1))
        if (number % count == 0)
            return enCheckPrimeNumber::notPrime;
    return enCheckPrimeNumber::isPrime;
}

void fillArrWithRandNumbers(int arr[100], int& arrLen) {

    cout << "\nEnter a number of elements: "; cin >> arrLen;
    for (int c = 0; c <= (arrLen - 1); c++)
        arr[c] = randomNumbers(1, 100);

}

void addArrElements(int number, int arr[100], int& arrLen) {

    arrLen = (arrLen + 1);
    arr[arrLen - 1] = number;

}

void copyArray(int arrSource[100], int arrDestination[100], int arrLen, int& arrDesLen2) {

    for (int c = 0; c <= (arrLen - 1); c++)
        if((checkPrimeOrNotPrime(arrSource[c]) == enCheckPrimeNumber::isPrime))
            addArrElements(arrSource[c], arrDestination, arrDesLen2);

}

void printArrayElements(int arr[100], int arrLen) {

    for (int c = 0; c <= (arrLen - 1); c++)
        cout << arr[c] << ", ";
    cout << endl;
}

int main() {

    var _var;
    srand((unsigned)time(NULL));

    fillArrWithRandNumbers(_var.arr, _var.arrLen);
    copyArray(_var.arr, _var.arrDes2, _var.arrLen, _var.arrDesLen2);

    cout << "\nArray(1) elements: ";
    printArrayElements(_var.arr, _var.arrLen);
    
    cout << "Array(2) copy prime numbers: ";
    printArrayElements(_var.arrDes2, _var.arrDesLen2);
    

    cout << endl;
    system("pause");
    return 0;
}