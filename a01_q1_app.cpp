#include "List.h"
#include "List.cpp"
#include <iostream>
using namespace std;

template <typename Object>
void printList(List<Object> pList)
{
    typename List<Object>::const_iterator pIter;
    for (pIter = pList.begin(); pIter != pList.end(); pIter++)
    {
        cout << *pIter << " ";
    }
}

int main()
{
    //2, 4, 5, 7, 8, 1, 7, 15 are the values we need in the list
    cout << "--------------------------------------------" << endl;
    cout << "IT 279 Assignment 01: Q01 Lane Plummer" << endl;

    // Add your code here:
    List<int> myList;
    typename List<int>::iterator itr1;
    typename List<int>::iterator itr2;
    typename List<int>::iterator tempItr;
    itr1 = myList.begin();
    int num = 7;

    myList.push_back(2);
    myList.push_back(4);
    myList.push_back(5);
    myList.push_back(7);
    myList.push_back(8);
    myList.push_back(1);
    myList.push_back(7);
    myList.push_back(15);
    cout << "The created list is: ";

    printList(myList);
    itr1 = myList.begin();
    itr2 = myList.end();
    cout << "\nThe found node pointed at by the iterator: ";
    tempItr = myList.find(itr1, itr2, num);
    cout << *tempItr;

    cout << "\nThe node values after the found node: ";
    tempItr++;

    while (tempItr != itr2)
    {
        if (tempItr != itr2)
        {
            cout << *tempItr << " ";
        }

        tempItr++;
    }

    cout << endl << "--------------------------------------------";

    return 0;
}
