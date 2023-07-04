#include<iostream>
#include<queue>
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
Node*lvlorder(Node *root)
{
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                    q.push(NULL);
            }
        }
        else
{
        cout<<temp->data;
        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
    }
}
}
int main()
{
    Node*root = NULL;

    root = BuildTree();
    lvlorder(root);
    return 0;
}