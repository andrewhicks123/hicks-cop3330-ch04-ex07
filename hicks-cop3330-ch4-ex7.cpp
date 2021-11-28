/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Andrew Hicks
 */

#include <iostream>
#include <vector>

using namespace std;

vector<string> numbers;


void initNum() {
    numbers.push_back("zero");
    numbers.push_back("one");
    numbers.push_back("two");
    numbers.push_back("three");
    numbers.push_back("four");
    numbers.push_back("five");
    numbers.push_back("six");
    numbers.push_back("seven");
    numbers.push_back("eight");
    numbers.push_back("nine");
}
int getNum() {
    int val = numbers.size();
    if (cin >> val) return val;
    cin.clear();
    string s;
    cin >> s;
    for (int i = 0; i < numbers.size(); ++i) 
        if (numbers[i] == s) val = i;
    if (val == numbers.size()) cout << "Not Valid";
    return val;
}
int main()
{
    initNum();
    while (true) {
        int val1 = getNum();
        char op;
        cin >> op;
        int val2 = getNum();

        double result;

        switch (op) {
        case '+':
            result = val1 + val2;
            cout << "The sum of " << val1 << " and " << val2 << " = " << result;
            break;
        case '-':
            result = val1 - val2;
            cout << "The difference between" << val1 << " and " << val2 << " = " << result;
            break;
        case '*':
            result = val1 * val2;
            cout << "The product of " << val1 << " and " << val2 << " = " << result;
            break;
        case '/':
            result = val1 / val2;
            cout << "The ratio of " << val1 << " and " << val2 << " = " << result;
            break;
        default:
            cout << "Not Valid";
        }
        

    }
}

