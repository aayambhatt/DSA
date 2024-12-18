#include<iostream>
using namespace std;

class Node{
public: 
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data = val;
        this->left=NULL;
        this->right=NULL;
    }


};

void preOrderTraversal(Node* root){

    //base case
    if(root==NULL){
        return;
    }

    //NLR
    //N
    cout<<root->data<< " ";
    //L
    preOrderTraversal(root->left);
    //R
    preOrderTraversal(root->right);


}




int main()
{
     Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    preOrderTraversal(root);


 return 0;
}