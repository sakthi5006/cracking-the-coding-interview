/*
Chapter 04 - Problem 06 - Successor

Problem Statement:
Write an algorithm to find the "next" node (i.e., in-order successor) of a given node in a binary search tree.
You may assume that each node has a link to its parent.

Solution:
Based on the definition of in order traversal, the successor of a node is determined as follows:

1. If the target node has a right child, then its successor is the leftmost member of its right subtree.
2. If the target node does not have a right child, then its successor its first ancestor to its right.
3. If nodes described in cases 1 and 2 do not exist, then the node has no successor.

To check case 1, we check if there is a right subtree then traverse only through the left connection until we reach
the leftmost node and return it. To check case 2, we traverse from the target node up the tree only through
parent connections until we find a the first right ancestor and return it.

Time complexity: O(N)
Space complexity: O(N)
*/

#pragma once
