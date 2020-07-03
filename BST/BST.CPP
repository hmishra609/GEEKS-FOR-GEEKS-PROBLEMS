#include<bits/stdc++.h>

using namespace std;

struct BST
{
int data;
BST *left,*right;

BST(int d)
{
 data=d;
 left=NULL;
 right=NULL;
}
BST()
{
 data=0;
 left=NULL;
 right=NULL;
}


BST* search_recursive(BST* root,int key)
{
    if(root==NULL||root->data==key)
        return root;

    if(root->data<key)
        search_recursive(root->right,key);

    if(root->data>key)
        search_recursive(root->right,key);

}


BST* insert_recursive(BST *r,int value)
{
if(r==NULL)
        return new BST(value);
if(r->data<value)
    r->right=insert_recursive(r->right,value);

if(r->data>value)
    r->left=insert_recursive(r->left,value);

return r;

}

void inOrder_Traversal(BST* root)
{
  if(!root)
        return;

inOrder_Traversal(root->left);
cout<<root->data<<"  ";
  inOrder_Traversal(root->right);


}

BST* minValueNode(BST *root)
{
 if(root->left==NULL)
        return root;
 minValueNode(root->left);

}


BST* Delete(BST* root,int key)
        {
    if(root==NULL)
        return root;

    if(root->data<key)
    root->right=Delete(root->right,key);


    else if(root->data>key)
    root->left=Delete(root->left,key);

    else
    {
        if(root->left==NULL)
        {
            BST *temp=root->right;
            free(root);
            return temp;
        }

        else if(root->right==NULL)
        {
            BST *temp=root->left;
            free(root);
            return temp;
        }

        ///node with two children so for that we need to find inorder successor
        ///for finding inorder successor
        BST *temp=minValueNode(root->right);

        ///copy content of inorder successor with (curr)root node

        root->data=temp->data;

         root->right=Delete(root->right,temp->data);

    }///else

return root;
        }//

int Floor(BST *root,int key)
{
if(root==NULL)
    return INT_MAX;

if(root->data==key)
    return root->data;
if(root->data>key)
    return Floor(root->left,key);


///either floor value is in right sub tree or it is root->data
int floorvalue=Floor(root->right,key);
return (floorvalue<=key)?floorvalue:root->data;

}

int Ceil(BST* root,int key)
{
    if(root==NULL)
        return -1;

    if(root->data==key)
        return root->data;

    if(root->data<key)
        return Ceil(root->right,key);

    int Ceilvalue=Ceil(root->left,key);

    return (Ceilvalue>=key)?Ceilvalue:root->data;
}

};

int main()
{
   BST b,*root=NULL;
root=b.insert_recursive(root,8);
b.insert_recursive(root,3);
b.insert_recursive(root,1);
b.insert_recursive(root,6);
b.insert_recursive(root,4);
b.insert_recursive(root,7);
b.insert_recursive(root,10);
b.insert_recursive(root,14);
b.insert_recursive(root,12);

b.inOrder_Traversal(root);

BST* t=b.minValueNode(root);  ///used to find inorder succcessor
//cout<<"\n"<<t->data;

//b.Delete(root,14);
cout<<"\n\n\n\n";

//b.inOrder_Traversal(root);


//cout<<b.Floor(root,15);

cout<<b.Ceil(root,13);
}
