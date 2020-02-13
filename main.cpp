//
//  main.cpp
//  DataStructuresHW1
//
//  Created by kimberly scirotto on 2/4/20.
//  Copyright © 2020 kimberly scirotto. All rights reserved.
//

#include <iostream>
#include "bag.h"


int main()
{
    Bag bag;
    int choice = 0;
    int data = 0;
    
    cout << "1. Insert " << endl;
    cout << "2. Remove" << endl;
    cout << "3. Display All Values " << endl;
    cout << "4. Quit" << endl;
    cin >> choice;
 while(choice != 4)
 {
     cout << "Invalid Choice. Enter 1-5: ";
     cin >> choice;
 }
    if(choice == 1){
        cout << "Enter what you want in bag";
        cin >> data;
        bag.insertNode(data);
        
    }
    if(choice == 2){ //not currently working
        bag.removeNode();
    }
    if(choice == 3){ //not currently working
        cout << bag;
        
    }
    cout << "1. Insert " << endl;
       cout << "2. Remove" << endl;
       cout << "3. Display All Values " << endl;
       cout << "4. Quit" << endl;
       cin >> choice;
}
