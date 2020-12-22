#ifndef MINHEAP_HPP
#define MINHEAP_HPP

//class to hold a node of a heap
class NODE
{
  public:
        int value;
        NODE *leftNode,*rightNode;
        int findDepth(NODE *node);
};

//class to hold a minHeap
class TREE
{
    NODE *root; //root node of the heap
    public:
        TREE();//TODO: initialization of default NULL value to the root
        //TODO: finding the depth of a subheap
        NODE* insert(int value,NODE* node);//TODO: insertion of new values to the heap
        void insert(int value);//TODO: insertion of new values to the heap
        void traversePostOrderNodes(NODE *root);//TODO: traversion and print the value of all the heap nodes in post order
        void traversePostOrderNodes();//TODO: traversion and print the value of all the heap nodes in post order
        void printOddNodesInPreOrder(NODE *root);//TODO: printing of value of nodes having odd values in pre order
        void printOddNodesInPreOrder();//TODO: printing of value of the nodes having odd values in pre order
        int findDepth();//TODO: finding the depth of a heap
        NODE* getRoot();//TODO: returning of root node
        bool isEmpty();//TODO: check whether the heap is empty
};

#endif /* MINHEAP_HPP */