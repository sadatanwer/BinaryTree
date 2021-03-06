//
// Created by Syed Sadat Anwar on 26/08/2015.
//

#ifndef BINARYTREE_TREE_H
#define BINARYTREE_TREE_H


#include "Node.h"

class Tree {
public:
    virtual void insert(int key) = 0;

    virtual void insert(Node *key) = 0;

    virtual Node * insert(Node *parent, Node *child) = 0;

    virtual Node *search(int key) = 0;

    virtual void printIncreasing() = 0;

    virtual void printDecreasing() = 0;
};


#endif //BINARYTREE_TREE_H
