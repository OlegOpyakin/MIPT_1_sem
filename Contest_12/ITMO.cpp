#include <iostream>

struct Node {
  int32_t value;
  Node* left_child;
  Node* right_child;

  Node(int32_t x) {
    value = x;
    left_child = nullptr;
    right_child = nullptr;
  }
};

struct BinarySearchTree {
  Node* root = nullptr;

  Node* Search(Node* x, int32_t value) {
    if (x == nullptr || x->value == value) {
      
      return x;
    }
    if (value < x->value) {

      return Search(x->left_child, value);
    }
    else {

      return Search(x->right_child, value);
    }
  }

  Node* SearchParent(Node* x, int32_t value) {
    if (x == nullptr) {

        return x;
    }
    if (x->left_child != nullptr && x->left_child->value == value) {

      return x;
    }
    if (x->right_child != nullptr && x->right_child->value == value) {

      return x;
    }
    if (value < x->value) {

      return SearchParent(x->left_child, value);
    }
    else {

      return SearchParent(x->right_child, value);
    }
  }

  bool Exists(int32_t x) {
    Node* node = Search(root, x);

    return node != nullptr;
  }
  
  void AddRoot(int32_t value) {
    root = new Node(value);
  }

  Node* Insert(Node* x, int32_t value) {
    if (x == nullptr) {

      return new Node(value);
    }
    if (value < x->value) {
      x->left_child = Insert(x->left_child, value);
    }
    else if (value > x->value) {
      x->right_child = Insert(x->right_child, value);
    }

    return x;
  }

  Node* GetMinimum(Node* x) {
    if (x->left_child == nullptr) {

      return x;
    }
    
    return GetMinimum(x->left_child);
  }

  Node* GetMaximum(Node* x) {
    if (x->right_child == nullptr) {

      return x;
    }

    return GetMaximum(x->right_child);
  }

  Node* Next(int32_t x) {
    Node* current = root;
    Node* result = nullptr;
    while (current != nullptr) {
      if (x < current->value) {
        result = current;
        current = current->left_child;
      }
      else {
        current = current->right_child;
      }
    }

    return result;
  }

  Node* Prev(int32_t x) {
    Node* current = root;
    Node* result = nullptr;

    while (current != nullptr) {
      if (x > current->value) {
        result = current;
        current = current->right_child;
      }
      else {
        current = current->left_child;
      }
    }

    return result;
  }

  void Delete(int32_t x) {
    Node* node = Search(root, x);
    if (node == nullptr) {
    
      return;
    }
    Node* parent_node = SearchParent(root, node->value);
    // 1 - list (without children)
    if (node->left_child == nullptr && node->right_child == nullptr) {
      if (parent_node == nullptr) {
        root = nullptr;
      }
      else {
        if (parent_node->left_child == node) {
            parent_node->left_child = nullptr;
        }
        else {
            parent_node->right_child = nullptr;
        }
      }
    }
    else if (node->left_child == nullptr || node->right_child == nullptr) {
      // one child
      if (parent_node == nullptr) {
        if (root->left_child) {
          root = root->left_child;
        }
        else {
          root = root->right_child;
        }
        return;
      }
      if (node->left_child == nullptr) {
        if (parent_node->left_child == node) {
          parent_node->left_child = node->right_child;
        }
        else {
          parent_node->right_child = node->right_child;
        }
      }
      else {
        if (parent_node->left_child == node) {
          parent_node->left_child = node->left_child;
        }
        else {
          parent_node->right_child = node->left_child;
        }
      }
    }
    else {
      // two children
      Node* next_node = Next(node->value);
      Node* next_node_parent = SearchParent(root, next_node->value);
      node->value = next_node->value;
      if (next_node_parent->left_child == next_node) {
        next_node_parent->left_child = next_node->right_child;
      }
      else {
        next_node_parent->right_child = next_node->right_child;
      }
    }
  }
};