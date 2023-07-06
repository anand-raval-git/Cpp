#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* BuildTree()
{
    int data;
    cout<<"Enter data : "<<endl;
    cin>>data;

    //base condition
    if(data == -1)
    {
        return NULL;
    }

    //create node;
    Node* root = new Node(data);

    //left side
    cout<<"Enter data for left part of "<<data<<" Node"<<endl;
    root->left = BuildTree();

    //right side
    cout<<"Enter data for right part of "<<data<<" Node"<<endl;
    root->right = BuildTree();

    return root;
}
void preorder(Node*root)
{
    if(root == NULL)
    {
        return;
    }

    //nlr -> l means left serch , n means print and r means right serch
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    Node*root = NULL;

    root = BuildTree();
    preorder(root);
    return 0;
}