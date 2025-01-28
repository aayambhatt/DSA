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

void levelOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }

    queue<Node*> q;
    // initially push the root node
    q.push(root);

    //now traversal starts
    while(!q.empty()){
        // fetch the front node
        Node* front = q.front();
        q.pop();
        cout<<front->data<< " ";
        
        // push left child, first check if left of front exits
         if(front->left!=NULL){
            q.push(front->left);
        }
        if(front->right!=NULL){
            q.push(front->right);
        }

    }

}


int main()
{

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    levelOrderTraversal(root);

 return 0;
}