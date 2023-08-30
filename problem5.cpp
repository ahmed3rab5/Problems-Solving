

#include <iostream>
#include <math.h>

using namespace std;

void fillArray(int arr[100], int& arrLen) {

    arrLen = 10; // Fill array with hard coded;;
    arr[0] = 10; arr[1] = 10; arr[2] = 10; arr[3] = 50; arr[4] = 50; 
    arr[5] = 70; arr[6] = 70; arr[7] = 70; arr[9] = 70; arr[9] = 90;
}

void addArrElements(int number, int arr[100], int& arrLen) {

    arrLen = (arrLen + 1);
    arr[arrLen - 1] = number;

}

short findNumberPosInArr(int number, int arr[100], int arrLen) {

    for (int c = 0; c <= (arrLen - 1); c++)
        if ((arr[c] == number))
            return c; // return-INDEX
    return -1;
}

bool isNumberInArr(int number, int arr[100], int arrLen) {

    return(findNumberPosInArr(number, arr, arrLen) != -1);

}

void copyDistNumToArr(int arr[10], int arrDes[10], int arrLen, int &arrDesLen) {
        
    for (int c = 0; c <= (arrLen - 1); c++)
        if (!(isNumberInArr(arr[c], arrDes, arrDesLen))) 
            addArrElements(arr[c], arrDes, arrDesLen) ;
}

void printArrayElements(int arr[100], int arrLen) {

    for (int c = 0; c <= (arrLen - 1); c++)
        cout << arr[c] << "  ";
    cout << endl;
}

int main() {

    srand((unsigned)time(NULL));
    int arr[100]{ 0 }, arrDes2[100]{ 0 }, arrLen = 10, arrDesLen2 = 0;

    fillArray(arr, arrLen);
    cout << "\nArray(1) elements: ";
    printArrayElements(arr, arrLen);

    copyDistNumToArr(arr, arrDes2, arrLen, arrDesLen2);
    cout << "Array(2) Distinct: ";
    printArrayElements(arrDes2, arrDesLen2);

    cout << endl;
    system("pause");
    return 0;
}