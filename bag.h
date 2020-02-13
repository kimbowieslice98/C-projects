//
//  Header.h
//  DataStructuresHW1
//
//  Created by kimberly scirotto on 2/4/20.
//  Copyright © 2020 kimberly scirotto. All rights reserved.
//


#include <iostream>
#ifndef Header_h
#define Header_h

using namespace std;
struct node{
    int data;
   struct node *next;
};

class Bag
{
public:
    
    Bag();
    ~Bag();
    
    void insertNode(int insrtBag);
    
    int removeNode();
    
    friend ostream &operator<<(ostream &output, const Bag &value);
    
private:

    node *head;
    node *current;
    node *temp;
    
};


#endif /* Header_h */
