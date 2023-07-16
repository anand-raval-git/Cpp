#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* right;
    Node* left;
    Node(int data)
    {
        this->data = data;
        this->right = NULL;
        this->left = NULL;
    }

};
Node* insertdata(Node*root,int data)
{
    if(root == NULL)
    {
        root = new Node(data);
        return root;
    }

    //left
    if(root->data >data)
    {
        root->left = insertdata(root->left,data);
    }
    //right
    else
    {
       root->right = insertdata(root->right,data);
    }
    return root;
}
void takeinput(Node*&root)
{
    int data;
    cin>>data;

    while(data != -1)
    {
        root = insertdata(root,data);
        cin>>data;
    }
}
int FindMinimumValue(Node*root)
{
    Node*temp = root;
    if(temp == NULL)
    {
        return -1;
    }
    while(temp->left!=NULL)
    {
        temp = temp->left;
    }
    return temp->data;
}
int main()
{
    Node*root = NULL;
    takeinput(root);
    int min = FindMinimumValue(root);
    cout<<"Minimum Value is "<<min<<endl;
    return 0;
}