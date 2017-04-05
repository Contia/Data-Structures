#include "binaryTree.h"
#include <iostream>


#include <cstring>

using namespace std;


Node::Node(int value){
   leftChild = NULL;
   rightChild = NULL;
   this->value = value;
}
int Node::getValue(){
    return value;
}

Node* Node::getLeftChild(){
    return leftChild;
}

Node* Node::getRightChild(){
    return rightChild;
}

void Node::setLeftChild(Node *node){
    leftChild = node;
}
void Node::setRightChild(Node *node){
    rightChild = node;
}

BinaryTree::BinaryTree(){
    height = 0;
    root = NULL;
}


void BinaryTree::insert(int value,int chooseChild){


    if (root == NULL){
        cout <<"Node " << value <<" has been inserted as root" <<endl;
        root = new Node(value);
    }else {
        Node *temp = root;
        Node *parent;
        int counter = 0;

        while (temp != NULL){

            parent = temp;
            if (counter > height) height = counter;
            if (chooseChild >= 5){
                temp = temp->getLeftChild();
            } else{
                temp = temp->getRightChild();
            }
            counter++;
        }
        if (chooseChild >=5){
           parent->setLeftChild(new Node(value));
           cout <<"Node " << parent->getValue() << " has left child the " << parent->getLeftChild()->getValue() <<endl;
        }
        else {
           parent->setRightChild(new Node(value));
           cout <<"Node " << parent->getValue() << " has right child the " << parent->getRightChild()->getValue() <<endl;
        }
    }
}

void BinaryTree::startTraverse(char* type){
    if (strcmp(type,"inorder") == 0){
        inorder(root,height);
    }
}

void BinaryTree::inorder(Node *node,int height){
    if ( node == NULL){
        return;
    }
    else {
        inorder(node->getLeftChild(),height-1);
        cout << node->getValue() << " ";
        inorder(node->getRightChild(),height+1);
    }
}

int BinaryTree::getHeight(){
    return height;
}

