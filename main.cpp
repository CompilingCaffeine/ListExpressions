//main.cpp
//List Expressions
//
//Created by Lazare Herzi 7.11.26

#include <iostream>
#include <string>
using namespace std;

void listExpressions(string command)
{
    if (command == "add")
    {
        cout << "Please enter an expression: ";
        cin >> expression;
    }
}

int main() {
    bool exit = false;
    string command; 
    while (!exit)
    {
        cout << "Please enter a command (add, listall, listbyoperator, listsummary, and exit): ";
        cin >> command;
        listExpressions(command);
    }

}