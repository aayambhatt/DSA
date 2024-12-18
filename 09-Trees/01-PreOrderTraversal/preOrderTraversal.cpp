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
 return 0;
}