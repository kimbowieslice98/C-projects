# ObjectOrientedprojects
# Project Name
> List, Fraction, Bag: These were minor programs to practice the various skills being taught in the class: working with fractions, removing and adding numbers, and implementating lists.

## General info
> List: The program was focused on working with list techniques and how to manipulate them.
> Fraction: The function of the program was to calculate fraction equations using the techniques: constant and mod member functions, fractions rules, objects, etc.
> Bag: This program was meant to help us practice removing, adding, and displaying numbers.

## Technologies
* Xcode 12.3

## Setup
The List, Fraction, and Bag programs do not need any type of setup other than running it on Xcode or another compiler that supports C++. 

## Code Examples
> Fraction:
#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
  Fraction fraction1;

  fraction1.setsign('+');
  fraction1.setwhole(2);
  fraction1.setnum(3);
  fraction1.setden(4);
  fraction1.display();

  system("PAUSE");
  return 0;
}

> List:
#include <iostream>

#include "List.h"

using namespace std;

int main(void)
{
  List<int> temp;

  temp.insert(10);
  temp.insert(7);
  
  temp.print();
  system("PAUSE");
  
  return 0;
}

> Bag:
#include <iostream>
#include "bag.h"
#include <cstdlib>


int main()
{
    Bag bag;
    int choice = 0;
    int data = 0;
    //Main menu for program
    cout << "1. Insert " << endl;
    cout << "2. Remove" << endl;
    cout << "3. Display All Values " << endl;
    cout << "4. Quit" << endl;
    cin >> choice;
    //will run until 4 is entered
    while(choice != 4)
    {
        //make sure number is valid
        while(choice <= 0 || choice >= 5){
            cout << "Invalid Choice. Enter 1-4: ";
            cin >> choice;
        }
        if(choice == 1){
            cout << "Enter what you want in bag: ";
            cin >> data;
            bag.insertNode(data);
            
        }
        if(choice == 2){
            bag.removeNode(); 
        }
        if(choice == 3){ 
            bag.display();
        }
        cout << "1. Insert " << endl;
           cout << "2. Remove" << endl;
           cout << "3. Display All Values " << endl;
           cout << "4. Quit" << endl;
           cin >> choice;
    }
}

## Status
List, Fraction, and Bag are: _finished_ - the programs fullfilled the purpose they were meant to. They were small class projects meant to teach us specific skills we learned each week.
