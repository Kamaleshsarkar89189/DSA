/*
Binary Search Tree

    * The left sub-tree of a node has a key less then or equal to its parent node,s key.
    * The right sub-tree of a node has a key greater than or equal to its parent node,s key.


Basic Operations

    * Search
    * Insert
    * Pre-order Traversal
    * In-order Traversal
    * Post-order Traversal

Search Operation 

Algorithm

    1. Start
    2. Check whether the tree is empty or not
    3. If the tree is empty, Search is not possible
    4. Otherwise, first Search the root of the tree.
    5. If the key does not match with the value in the root, search its subtrees.
    6. If the value of the key is less than the root value, search the left subtree.
    7. If the value of the key is greater than the root value,
    search the right subtree.
    8. If the key is not found in the tree, return unsuccesful search.
    9. END


    */
Insertion Operation

    Algorithm

    1. Start
    2. If the tree is empty, Insert the first element as the root node of the tree. The following element are added as the leaf nodes.
    3. If the element is less than root value, it is added into the leaf subtree as a leaf.
    4. If an element is greater than the root value, it is added into the right subtree as a leaf node.
    5. The final leaf nodes of the tree point to NULL value as their child nodes.
    6. END

Inorder Traversal

    Algorithm

    1. Start
    2. Traverse the left subtree, recursively
    3. Then, traverse the root node
    4. Traverse the right subtree, recursively
    5. END


Preorder Traversal

    Algorithm

    1. Start
    2. Traverse the root node first.
    3. Then traverse the left subtree, recursively
    4. Later, traverse the right subtree, recursively.
    5. END

Postorder Traversal

    Algorithm

    1. Start
    2. Traversal the left subtree, recursively
    3. Traversal the right subtree, recursively.
    4. Then, traverse the root node
    5. END
