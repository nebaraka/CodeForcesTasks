
#include "stdafx.h"
#include <iostream>
#include "classDeclarations.h"

using namespace std;

int main()
{
    unsigned int n = 0;
    int operationsCount = 0;
    MyStack<char> Stack;
    cout << "Please enter number of elements n:" << endl;
    cin >> n;
    cout << "Please enter " << n << " elements of IntStack:" << endl;
    for (unsigned int i = 0; i < n; i++) {
        char buffer = 0;
        cin >> buffer;
        Stack.push(buffer);
    }
    while (Stack.hasBlues()) {
        Stack.doOperation(n);
        operationsCount++;
    }
    cout << operationsCount << endl;
    return 0;
}

