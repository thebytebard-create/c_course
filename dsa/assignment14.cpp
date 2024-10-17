#include <iostream>
using namespace std;

struct node
{
    int item;
    node *left, *right;
};

class bst
{
private:
    node *root;

protected:
    void preorderec(node *);
    void inorderec(node *);
    void postorderec(node *);
    node *delnode(node *, int);

public:
    bst();
    ~bst();
    bool isempty();
    void insert(int);
    void preorder();
    void ineorder(node *);
    void posteorder(node *);
    void del(int);
    node *search(int);
};

bst::bst()
{
    root = nullptr;
}

bst::~bst()
{
    while(root)
      del(root->item);
}
bool bst::isempty()
{
    return root == nullptr;
}

void bst::insert(int data)
{
    node *n = new node;
    n->item = data;
    n->left = nullptr;
    n->right = nullptr;

    if (root == nullptr)
        root = n;
    else
    {
        node *t = root;
        do
        {
            if (t->item > n->item)
            {
                if (t->left == nullptr)
                {
                    t->left = n;
                    t = nullptr;
                }
                else
                    t = t->left;
            }
            else
            {
                if (t->right == nullptr)
                {
                    t->right = n;
                    t = nullptr;
                }
                else
                    t = t->right;
            }

        } while (t != nullptr);
    }
}

void bst::preorderec(node *ptr)
{
    if (ptr)
    {
        cout << "  " << ptr->item;
        inorderec(ptr->left);
        preorderec(ptr->right);
    }
}

void bst::inorderec(node *ptr)
{
    if (ptr)
    {
        inorderec(ptr->left);
        cout << " " << ptr->item;
        inorderec(ptr->right);
    }
}

void bst::postorderec(node *ptr)
{
    if (ptr)
    {
        postorderec(ptr->left);
        postorderec(ptr->right);
        cout << " " << ptr->item;
    }
}

void bst::preorder()
{
    preorderec(root);
}

void bst::ineorder(node *)
{
    inorderec(root);
}
void bst::posteorder(node *)
{
    postorderec(root);
}

node *bst::delnode(node *ptr, int data)
{
    if(ptr==nullptr)
      return nullptr;
    else if(ptr->item <data)
      ptr->right=delnode(ptr->right,data);
    else if(ptr->item >data)
        ptr->left=delnode(ptr->left,data);
    else
    {
        if(ptr->left==nullptr&&ptr->right==nullptr)
           {
            delete ptr;
            return nullptr;
           }
        if(ptr->left==nullptr||ptr->right==nullptr)
        {
            node*t;
            if(ptr->left!=nullptr)
            t=ptr->left;
            else
            t=ptr->right;

            delete ptr;
            return t;
        }
 
   node *pred,*parpred;
   parpred=ptr;
   pred=ptr->left;
    while(pred->right != nullptr)
    {
        parpred=pred;
        pred = pred->right;
    }
    ptr->item = pred->item; 
    if(parpred->right==pred) 
       parpred->right= delnode(pred,pred->item);
    else if(parpred->left==pred) 
       parpred->left= delnode(pred,pred->item); 

    }     
    return ptr;  
}

void bst::del(int data)
{
  root= delnode(root, data) ;
}

 node *bst::search(int data)
 {
    
     if(root)
     {
        node*t=root;
        if(t->item==data)
          return t;
        else if(t->item<data)
           t=t->right;
        else 
           t=t->left;
     }
 }


int main()
{
    bst k;
    k.insert(10);
    k.insert(5);
    k.insert(15);
    k.insert(3);
    k.insert(7);
    k.insert(20);
    k.del(10);
    k.preorder();
    return 0;
}