#include <iostream>
#include "minHeap.hpp"
#include<string>

using namespace std;

TREE::TREE()
{
    root=NULL;
}

bool NODE::isNull()
{
    if(this==NULL)
        return true;
    return false;
}

int NODE::findDepth(NODE *node)
{
    if(node->isNull())
        return 0;
    else
        return max(findDepth(node->leftNode),findDepth(node->rightNode))+1;
}

NODE* NODE::insertToSubheapWithSmallestDepth(int value,NODE* node)
{
    if(node->isNull())
    {
        node=new NODE();
        node->value=value;
        node->leftNode=node->rightNode=NULL;
    }
    else
    {
        int temp=value;
        if(value<node->value)
        {
            temp=node->value;
            node->value=value;
        }

        if(node->findDepth(node->leftNode)>node->findDepth(node->rightNode))
            node->rightNode=insertToSubheapWithSmallestDepth(temp,node->rightNode);
        else
            node->leftNode=insertToSubheapWithSmallestDepth(temp,node->leftNode);
    }
    return node;
}

void TREE::insert(int value)
{
    root=root->insertToSubheapWithSmallestDepth(value,root);
}

string NODE::traversePostOrderNodes(NODE *root,string str)
{
    if(root->isNull())
        str.append("");
    else
    {
        str=traversePostOrderNodes(root->leftNode,str);
        str=traversePostOrderNodes(root->rightNode,str);
        str.append(to_string(root->value));
        str.append(" ");
    }
    return str;
}

string TREE::traversePostOrderNodes()
{
    string str;
    return root->traversePostOrderNodes(this->root,str);
}

string NODE::traverseOddNodesInPreOrder(NODE *root,string str)
{
    if(root->isNull())
        str.append("");
    else
    {
        if((root->value%2)!=0)
        {
            str.append(to_string(root->value));
            str.append(" ");
        }
        str=traverseOddNodesInPreOrder(root->leftNode,str);
        str=traverseOddNodesInPreOrder(root->rightNode,str);
    }
    return str;
}

string TREE::traverseOddNodesInPreOrder()
{
    string str;
    return root->traverseOddNodesInPreOrder(root,str);
}

int TREE::findDepth()
{
    return root->findDepth(root);
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
    cout<<"Post Ordered value of Heap nodes:"<<"\n";
    cout<<minHeap.traversePostOrderNodes();
    cout<<"\n\nPre Ordered value of Odd Numbered nodes:"<<"\n";
    cout<<minHeap.traverseOddNodesInPreOrder();
    return 0;
}