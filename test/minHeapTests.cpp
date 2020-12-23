#include "../minHeap.hpp"
#include "gtest/gtest.h"
#include<string>

TEST(minHeapTests,insertionTest)
{
        /*Tree to be inserted
                1
              /    \
            12       3
           /  \     /
          17   15  8 
    */
    TREE test_tree;
    test_tree.insert(1);
    EXPECT_EQ(1,test_tree.findDepth());
    test_tree.insert(12);
    test_tree.insert(3);
    test_tree.insert(17);
    test_tree.insert(8);
    test_tree.insert(15);
    EXPECT_EQ(3,test_tree.findDepth());
}

TEST(minHeapTests,postOrderValues)
{
    TREE minHeap;
    minHeap.insert(1);
    minHeap.insert(12);
    minHeap.insert(3);
    minHeap.insert(17);
    minHeap.insert(8);
    minHeap.insert(-1);
    EXPECT_EQ("17 12 1 8 3 -1 ",minHeap.traversePostOrderNodes());
}

TEST(minHeapTests,preOrderesValueOfOddNumberedNodes)
{
    TREE minHeap;
    minHeap.insert(1);
    minHeap.insert(12);
    minHeap.insert(3);
    minHeap.insert(17);
    minHeap.insert(8);
    minHeap.insert(-1);
    EXPECT_EQ("-1 1 17 3 ",minHeap.traversePostOrderNodes());
}