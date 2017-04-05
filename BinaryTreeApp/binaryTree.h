class Node{
        int value;
        Node *leftChild,*rightChild;
    public:
        Node(int value);
        int getValue();
        Node *getLeftChild();
        Node *getRightChild();
        void setLeftChild(Node *node);
        void setRightChild(Node *node);
};

class BinaryTree{
        Node *root;
        int height;
        void inorder(Node *node,int height);
        void preorder(Node *node,int height);
        void postorder(Node *node,int height);
    public:
        BinaryTree();
        void insert(int value,int chooseChild);
        void search(int value);
        void startTraverse(char* type);
        int getHeight();


};
