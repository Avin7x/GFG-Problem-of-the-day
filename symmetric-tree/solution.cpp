#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left, *right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

class Solution {
  public:
  bool check(Node* left, Node* right){
    if(!left && !right) return true;
    if(!left || !right) return false;

    if(left->data != right->data) return false;

    return check(left->right, right->left) &&
        check(left->left, right->right);
  }
    bool isSymmetric(Node* root) {
        // Code here
        // keep a two pointers left and right and make them point to left and right
        // side of root
        Node* left = root->left;
        Node* right = root->right;

        // for left pointer traverse rightside first and for right pointer traverse the 
        // left side first and during each iteration compare thier data 
        // if its equal return false else return true
        
        return check(left, right);
    }
};