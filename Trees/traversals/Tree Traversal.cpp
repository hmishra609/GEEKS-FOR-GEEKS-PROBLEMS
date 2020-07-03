#include<bits/stdc++.h>

using namespace std;

struct node
{
int data;
node *left;
node *right;

node(int x)
{
  data=x;
  left=right=NULL;
}


};
void preOrder_Traversal(node *current)
{
    if(current==NULL)
        return;
    cout<<current->data<<" ";
    preOrder_Traversal(current->left);
    preOrder_Traversal(current->right);
}

void inOrder_Traversal(node *current)
{
    if(current==NULL)
        return;

    inOrder_Traversal(current->left);
    cout<<current->data<<" ";
    inOrder_Traversal(current->right);
}

void postOrder_Traversal(node *current)
{
    if(current==NULL)
        return;

    postOrder_Traversal(current->left);

    postOrder_Traversal(current->right);
    cout<<current->data<<" ";
}


void levelOrder_Traversal(node* temp)
{
    queue<node*> q;

    q.push(temp);

    while(q.empty()==false)
    {
     node *curr=q.front();
     q.pop();
     cout<<curr->data<<" ";

     if(curr->left!=NULL)
            q.push(curr->left);

     if(curr->right!=NULL)
            q.push(curr->right);


    }
}

int height(node *root)
{
 if(root==NULL)
        return 0;

 int lh=height(root->left);
 int rh=height(root->right);


 return (max(lh,rh)+1);
}


bool isBalanced(node *root,int *height)
{
 if(root==NULL)
 {
  *height=0;
  return true;
 }
int lh=0;
int rh=0;

bool lb=isBalanced(root->left,&lh);
bool rb=isBalanced(root->right,&rh);

if(abs(lh-rh)>1)
    return false;

*height=max(lh,rh)+1;

return  (lb&&rb);
}

bool isCsProperty(node *root)
{
if(root==NULL)
    return true;

if(root->left==NULL&&root->right==NULL)
    return true;

    int sum=0;

if(root->left!=NULL)
    sum+=root->left->data;
if(root->right!=NULL)
    sum+=root->right->data;

if(sum==root->data&&isCsProperty(root->left)&&isCsProperty(root->right))
    return true;
else
    return false;


}


void printAllNodesAtK(node* root,int k)
{
    if(root==NULL)
    return;

    if(k==0)
        cout<<root->data<<" ";

    printAllNodesAtK(root->left,k-1);
    printAllNodesAtK(root->right,k-1);
}


int main()
{
 node *root=new node(10);

 root->left=new node(5);
 root->right=new node(20);

 root->left->left=new node(3);



///
root->left->left->left=new node(8);
root->left->left->left->left=new node(9);
///

 root->left->right=new node(5);

 root->right->left=new node(15);

 root->right->right=new node(6);

cout<<"Preorder Traversal"<<endl;
preOrder_Traversal(root);
cout<<endl;

cout<<"Inorder Traversal"<<endl;
inOrder_Traversal(root);
cout<<endl;

cout<<"Postorder Traversal"<<endl;
postOrder_Traversal(root);
cout<<endl;

cout<<"Levelorder Traversal"<<endl;
levelOrder_Traversal(root);
cout<<endl;



cout<<"Height of tree"<<endl;
cout<<height(root);
cout<<endl;
int h=0;
cout<<"Is tree Balanced"<<endl;
cout<<isBalanced(root,&h)<<endl<<endl;
cout<<h<<endl;

cout<<"\nIs tree children property followed"<<endl;
cout<<isCsProperty(root)<<endl<<endl;
cout<<endl;

cout<<"\nprint all nodes at k"<<endl;
printAllNodesAtK(root,2);
cout<<endl;


}


