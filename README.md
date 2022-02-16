# 0x1D. C - Binary trees

*Read or watch*

.  Binary tree (note the first line: Not to be confused with B-tree.)

.  Data Structure and Algorithms - Tree

.  Tree Traversal

.  Binary Search Tree

.  Data structures: Binary Tree



_/Basic Binary Tree/_,
  =
  

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;


Binary Search Tree
=

	typedef struct binary_tree_s bst_t;

AVL Tree
=

	typedef struct binary_tree_s avl_t;


Max Binary Heap
=

	typedef struct binary_tree_s heap_t;

