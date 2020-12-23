#include<string>
#ifndef MINHEAP_HPP
#define MINHEAP_HPP

using namespace std;
//class to hold a node of a heap
class NODE
{
  public:
        int value;
        NODE *leftNode,*rightNode;
        int findDepth(NODE *node);
        NODE* insertToSubheapWithSmallestDepth(int value,NODE* node);
        bool isNull();
        string traversePostOrderNodes(NODE *root,string str);
        string traverseOddNodesInPreOrder(NODE *root,string str);
};

//class to hold a minHeap
class TREE
{
    NODE *root;
    public:
        TREE();
        void insert(int value);
        string traversePostOrderNodes();
        string traverseOddNodesInPreOrder();
        int findDepth();
};

#endif /* MINHEAP_HPP */