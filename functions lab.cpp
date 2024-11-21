/*
Name: Andrew Sinha
Program: Functions Lab
Date: 11/21/24
*/

#include <iostream>
using namespace std;

int timese;
string names;
float ay;
float be;
float ce;

void countdown();
void customGreet(string name, int times);
int getFavoriteNumber();
float calculateAverage(float a, float b, float c);

int main(){
    //Exercise Uno
    countdown();

    //Exercise Dos
    cout << "What is your name?" << endl;
    cin >> names;

    cout << "How many times do you want to be greeted?" << endl;
    cin >> timese;

    customGreet(names, timese);

    //Exercise Tres
    int favNumber = getFavoriteNumber();
    cout << "Your favorite number is: " << favNumber << endl;

    //Exercise Cuatro
    cout << "Enter three floats: ";
    cin >> ay >> be >> ce;


    float averages = calculateAverage(ay, be, ce);
    cout << "Your average is: " << averages << endl;
    return 0;
}

void countdown(){
    for(int i = 10; i >= 1; i--){
        cout << i << endl;
    }
    cout << "Lifting off!" << endl;
}

void customGreet(string name, int times){
    for(int i = times; i > 0; i--){
        cout << "Hello, " << name << endl;
    }
}

int getFavoriteNumber(){
    return 3;
}

float calculateAverage(float a, float b, float c){
    float average = (a + b + c) / 3;
    return average;
}