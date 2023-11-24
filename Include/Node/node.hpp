#ifndef _NODE_H_
#define _NODE_H_

#include "../People/people.hpp"
#include <iostream>
using namespace std;
class Node{
    public:
        People *data;
        Node *next;
        static Node* head;
        Node();
        Node(const Node &t);
        Node(People *p);
        static void addElement(People *p){
             Node *newNode = new Node(p);

        if(head == NULL){
            head = newNode;
        }else{
            Node* tmp = head;
            while(tmp->next != NULL){
                tmp = tmp->next;
            }
            tmp->next = newNode;
        }
        }
        static void printInfo(){
            cout << "Information of list is!!!!\n";
            Node *tmp = head;
            while(tmp != NULL){
                tmp->data->printInfo();
                tmp = tmp->next;
            }
        }
        // static void writeToFile(const char*fileName){
        //     Node *tmp = head;
        //     while(tmp != NULL){
        //         tmp->data->writeToFile(fileName);
        //         tmp = tmp->next;
        //     }
        // }
};

#endif