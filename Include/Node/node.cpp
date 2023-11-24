#include <iostream>
#include "node.hpp"

using namespace std;
Node::Node(){
    data = NULL; 
    next = NULL; 
}
Node::Node(const Node &t){
    data = t.data;
    next = t.next;
    head = t.head;
}
Node::Node(People *p){
    data = p;
    next = NULL;
}

Node* Node::head = NULL;