#include "Global_Variables_and_Methods.h"
#include <iostream>

using namespace std;
using namespace GlobalPractice;

Global_Variables_and_Methods* obj = new Global_Variables_and_Methods();

// Do addition with global variables.
int addition(int no1, int no2) {
    obj->number1 = no1;
    obj->number2 = no1;
    return obj->number1 + obj->number2;
}

// Do subtraction with global variables.
int subtraction(int no1, int no2) {
    obj->number1 = no1;
    obj->number2 = no2;
    return obj->number1 - obj->number2;
}

// Do multiplication with global variables.
int multiplication(int no1, int no2) {
    obj->number1 = no1;
    obj->number2 = no2;
    return obj->number1 * obj->number2;
}

// Do division with global variables.
int division(int no1, int no2) {
    obj->number1 = no1;
    obj->number2 = no2;
    return obj->number1 / obj->number2;
}

//Assign a name
string nameAssignment(string targetName) {
    obj->name = targetName;
    return obj->name;
}

//Assign a gender
string genderAssignment(string targetGender) {
    obj->gender = targetGender;
    return obj->gender;
}

//Confirm whether they went to school or not
bool changeSchoolCondition(bool condition){
    obj->wentToSchool = condition;
    return obj->wentToSchool;
}

int main() {
    cout << "Global Variable Verifications" << endl;
    cout << "============================================================" << endl;
    cout << "2 + 2 = " << addition(2, 2) << endl;
    cout << "5 - 3 = " << subtraction(5, 3) << endl;
    cout << "9 * 5 = " << multiplication(9, 5) << endl;
    cout << "16 / 2 = " << division(16, 2) << endl;
    cout << "1st Assigned Name: " << nameAssignment("Deniz") << endl;
    cout << "2nd Assigned Name: " << nameAssignment("George") << endl;
    cout << "1st Assigned Gender: " << nameAssignment("Male") << endl;
    cout << "2nd Assigned Gender: " << nameAssignment("Female") << endl;
    cout << "1- Went to School? " << changeSchoolCondition(true) << endl;
    cout << "2- Went to School? " << changeSchoolCondition(false) << endl;
    return 0;
}