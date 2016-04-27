#include <iostream>
#include "Final.h"
#include <fstream>
#include <string>
#include <stdlib.h>
#include <json/json.h>
#include <vector>
#include <sstream>

using namespace std;

Final::Final()
{
    //ctor
}

Final::~Final()
{
    //dtor
}
void Final::adventure(string x){
    struct Node *temp;
    temp=(struct Node *)malloc(sizeof(struct Node));
    temp->key=x;
    if (head== NULL){
        head=temp;
        head->next=NULL;
    }
    else{
        temp->next=head;
        head=temp;
    }
}
void Final::advafter(string x, string y){
    Node *previous = searchforinfo(x);
    Node *node;
    node->key = y;
    node->next = previous->next;
    previous->next = node;
    node = tail;
}
void Final::printquest(){
    Node *tmp = head;
    while (tmp != NULL){
        cout << tmp->key << endl;
        tmp = tmp->next;
    }
}
Node *Final::searchforinfo(string x){
    Node *tmp = head;
    Node *rtn = NULL;
    bool found = false;
    while (!found & tmp != NULL){
        if(tmp->key == x){
            found = true;
            rtn = tmp;
        }
        else {
            tmp = tmp->next;
        }
    }
    return rtn;
}
void Final::insertfalseinfo(string previous, string x){
    Node *p = searchforinfo(previous);
    Node *node;
    node->key = x;
    node->next = p->next;
    if (p == NULL){
        node->next = head;
        head = node;
    }
    else if(p->next == NULL){
        p->next = node;
        node = tail;
    }
    else{
        node->next = p->next;
        p->next = node;
    }
}
void Final::eraserecords(string x){
    Node *tmp = head;
    if (head->key == x){
        tmp = head->next;
        head = head->next;
        delete tmp;
    }
    else {
        Node *previous = head;
        tmp  = head->next;
        while (tmp != NULL){
            if (tmp->key == x){
                previous->next = tmp->next;
                if (tmp ==tail){
                    previous->next = NULL;
                    tail = previous;
                }
                delete tmp;
                break;
            }
            previous = tmp;
            tmp = tmp->next;
        }
    }
}
void Final::addition(float x, float y){
    float sum = x+y;
    cout << "Adventurer! The Answer You Are Looking for Is " << sum << "!" << endl;
}
void Final::subtraction(float x, float y){
    float difference = x-y;
    cout << "Using My Mystical Might I Received An Amount Of " << difference << ". Are You Sure You Do Not Want To Buy My Magic?" << endl;
}
void Final::division(float x, float y){
    float mult = x*y;
    cout << "Just Take Your Answer And Leave, I Have To Create A Meal Fit For A King!: "<< mult << endl;
}
void Final::multiplication(float x, float y){
    float div = x/y;
    cout << "Meow Meow Meow Meow! Meow. " << div << ". Meeeeeow!" << endl;
}
