//
//  bag.cpp
//  DataStructuresHW1
//
//  Created by kimberly scirotto on 2/4/20.
//  Copyright © 2020 kimberly scirotto. All rights reserved.
//

#include "bag.h"
#include <iostream>

using namespace std;

Bag::Bag()
{
    head = NULL;
    current = NULL;
    temp = NULL;
    
}
Bag::~Bag()
{
    while(head != NULL)
    {
        temp = head;
        head = head->next;
        delete temp;
    }
    delete head;
}
void Bag::insertNode(int insrtBag)
{
    node *p = new node;
    p->data = insrtBag;
    p->next = NULL;
    
    if(head != NULL)
    {
        current = head;
        while(current->next != NULL)
        {
            current = current->next;
        }
         current->next = p;
    }
      else
      {
          head = p;
          current = head;
      }
}
int Bag::removeNode()
{
    if(head == NULL){
        return -1;
    }
    int count = 0;
    current = head;
     while(current->next != NULL) {
        current = current->next;
        count++;
    }
    int random = rand() % count;
    current = head;
    for(int i = 0;i < count;i++){
        current = current->next;
        if(i == random){
            temp = current;
            while(current->next != NULL) {
                current->data = current->next->data;
            }
            delete current;
        }else delete current;
    }
    return temp->data;
}
ostream &operator<<(ostream &output, const Bag &value){
    output << value.current->data << value.current->next->data;
    return output;
}
 
