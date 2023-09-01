

#include <iostream>
#include <math.h>

using namespace std;

float readNumber() {

    float number = 0;
    cout << "Enter a number: ";
    cin >> number;
    return number;
}

int absFanc(int number) {

    if (number > 0)
        return number;
    else
        return (number * -1);

}

float fractionPart(float number) {

    return(number - (int)number); // 3.5 (left part 3), (fraction part .5)

}

int RoundFanc(float number) {

    int leftPart = (int)number;
    float rightPart = fractionPart(number); // like .3 or .5 or .9 etc....

    if ((abs(rightPart) >= .5)) {
        if ((number > 0))
            return ++leftPart;
        else
            return --leftPart;
    }else
        return leftPart;

}

int main() {

    float readnumber = readNumber();
    cout << RoundFanc(readnumber) << endl;

    // cout << "c++ built-in function: " << round(readnumber) << endl;
    // cout << "c++ built-in function: " << abs(readnumber) << endl;


    system("pause"); 
    return 0;
}