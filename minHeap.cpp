#include <iostream> //Header file to perform input/output operations
#include <algorithm> //Header file to use standard comparision methods
#include "minHeap.hpp" //User defined header file for minHeap

using namespace std;

//TODO: initialization of default NULL value to the root
TREE::TREE()
{
    root=NULL;
}

//TODO: finding the depth of a subheap
int NODE::findDepth(NODE *node)
{
    //if node is empty depth is returned as 0 else recursively find the depth of child node
    if(node==NULL)
        return 0;
    else
    {
        int leftLength=findDepth(node->leftNode);
        int rightLength=findDepth(node->rightNode);

        return std::max(leftLength,rightLength)+1;
    }
}

//TODO: insertion of new values to the heap
NODE* TREE::insert(int value,NODE* node)
{
    //When node is empty create a new node with the given value
    if(node==NULL)
    {
        node=new NODE();
        node->value=value;
        node->leftNode=node->rightNode=NULL;
    }
    //Attach the new node to left or right subheap with smallest depth
    else
    {
        int temp=value;

        //When new value is lesser than the current node value, make new value the root value
        if(value<node->value)
        {
            temp=node->value;
            node->value=value;
        }

        //recursively find the subheap with the smallest depth and attach the new node to it
        if(node->findDepth(node->leftNode)>node->findDepth(node->rightNode))
            node->rightNode=insert(temp,node->rightNode);
        else
            node->leftNode=insert(temp,node->leftNode);
    }
    return node;
}

//TODO: insertion of new values to the heap
void TREE::insert(int value)
{
    root=insert(value,root);
}

//TODO: traversion and print the value of all the heap nodes in post order
void TREE::traversePostOrderNodes(NODE *root)
{
    if(root==NULL)
        return;
    else
    {
        traversePostOrderNodes(root->leftNode);
        traversePostOrderNodes(root->rightNode);

        cout<<root->value<<" ";
    }
}

//TODO: traversion and print the value of all of the nodes in post order
void TREE::traversePostOrderNodes()
{
    cout<<"Post Ordered value of Heap nodes:"<<"\n";
    traversePostOrderNodes(root);
}

//TODO: printing of value of nodes having odd values in pre order
void TREE::printOddNodesInPreOrder(NODE *root)
{
    if(root==NULL)
        return;
    else
    {
        if((root->value%2)!=0)
           cout<<root->value<<" ";

        printOddNodesInPreOrder(root->leftNode);
        printOddNodesInPreOrder(root->rightNode);
    }
}

//TODO: printing of value of the nodes having odd values in pre order
void TREE::printOddNodesInPreOrder()
{
    cout<<"\n\nPre Ordered value of Odd Numbered nodes:"<<"\n";
    printOddNodesInPreOrder(root);
}

//TODO: finding the depth of a heap
int TREE::findDepth()
{
    return root->findDepth(root);
}

//TODO: check whether the heap is empty
bool TREE::isEmpty()
{
    if(root==NULL)
        return true;
    else
        return false;            
}

//TODO: returning of root node
NODE* TREE::getRoot()
{
    return root;
}

int main()
{
    TREE minHeap;
    minHeap.insert(1);
    minHeap.insert(12);
    minHeap.insert(3);
    minHeap.insert(17);
    minHeap.insert(8);
    minHeap.insert(-1);
    minHeap.traversePostOrderNodes();
    minHeap.printOddNodesInPreOrder();
    return 0;
}