#include <iostream>
#include "binaryTree.h"
#include <time.h>
#include <stdlib.h>     /* srand, rand */
using namespace std;



int main()
{
  srand(time(NULL));
  BinaryTree *binaryTree = new BinaryTree();
  for (int i=0;i<10;i++) {
    int chooseChild = rand()%10 +1;
    binaryTree->insert(i,chooseChild);
  }
  binaryTree->startTraverse("inorder");
}
