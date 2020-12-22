#include "../minHeap.hpp"
#include "gtest/gtest.h"
#include<string>

//TODO: checking whether the heap is empty before inserting values
TEST(minHeapTests, emptyTree)
{
    EXPECT_EQ(0,1);
    TREE test_tree;
    EXPECT_TRUE(test_tree.isEmpty());
}

//TODO: checking whether insertion is done properly
TEST(minHeapTests,insertionTest)
{
    NODE *test_node;
    test_node=new NODE();
    TREE test_tree;
    test_tree.insert(1);
    EXPECT_FALSE(test_tree.isEmpty());
    EXPECT_EQ(1,test_tree.findDepth());
    test_tree.insert(12);
    test_tree.insert(3);
    test_tree.insert(17);
    test_tree.insert(8);
    test_tree.insert(15);
    EXPECT_EQ(3,test_tree.findDepth());
    EXPECT_EQ(1,(test_tree.getRoot())->value);
    /*Tree to be inserted
                1
              /    \
            12       3
           /  \     /
          17   15  8 
    */
}

//TODO: Checking the root value or the least
TEST(minHeapTests,checkRootValue)
{
    TREE test_tree;
    test_tree.insert(2);
    test_tree.insert(5);
    test_tree.insert(-1);
    EXPECT_EQ(-1,(test_tree.getRoot())->value);
}

//TODO: Check the depth of the heap
TEST(minHeapTests,findDepthTest)
{
    TREE test_tree;
    int depth=test_tree.findDepth();
    EXPECT_EQ(3,depth)<<"Depth="<<depth;
}

/*TEST(minHeapTests,checkBalance)
{
    TREE test_tree;
    test_tree.insert(12);
    test_tree.insert(3);
    test_tree.insert(17);
    test_tree.insert(8);
    test_tree.insert(15);
    EXPECT_LE(1,(test_tree.findDepth(test_tree.getRoot)->leftNode)-(test_tree.findDepth(test_tree.getRoot)->rightNode));
}*/