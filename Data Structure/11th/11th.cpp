#include<iostream>
using namespace std;
#include<stdlib.h>
struct node
{
  int data;
  struct node *left;
  struct node * right;
};

struct node * inserting(struct node *start,int n)
{
    if(start==NULL)
    {
        struct node *newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data=n;
        newnode->left=NULL;
        newnode->right=NULL;
        return newnode;
    }
    else
    {
        if(start->data<n)
        {
       start->right= inserting(start->right,n);

              return start;
        }
        else
        {
        start->left= inserting(start->left,n);

              return start;
        }
    }

}

void preorder(struct node *start)
{
    if(start!=NULL)
    {
           cout<<start->data<<" ";
        preorder(start->left);
        preorder(start->right);
    }

}
void inorder(struct node *start)
{
    if(start!=NULL)
    {

        preorder(start->left);
        cout<<start->data<<" ";
        preorder(start->right);
    }

}


void postorder(struct node *start)
{
    if(start!=NULL)
    {

        preorder(start->left);
        preorder(start->right);
         cout<<start->data<<" ";
    }

}




int findMax(struct node* start)
{
    while(start->right!=NULL)
    {
        start=start->right;
    }
    return start->data;
}

struct node* deletion(struct node* start,int n)
{
    if(start==NULL)
    {
        return start;
    }
    else
    {
    if(start->data>n)
    {
        start->left=deletion(start->left,n);
        return start;
    }
    else
    {
        if(start->data<n)
        {
            start->right=deletion(start->right,n);
            return start;
        }
        else
        {
            if(start->left==NULL && start->right==NULL)
            {
                start=NULL;
                return start;
            }
            else
            {
                if(start->left==NULL)
                {
                    start=start->right;
                    return start;
                }
                else
                {
                    if(start->right==NULL)
                    {
                        start=start->left;
                        return start;
                    }
                    else
                    {
                        int d=findMax(start->right);
                        start->data=d;
                        start->right=deletion(start->right,d);
                        return start;
                    }
                }
            }
        }
    }
    }
}

int main()
{
    char g;
    int n;
    struct node *start=NULL;
    cout<<"1. insert"<<endl<<"2.delete"<<endl<<"3.preorder print"<<endl<<"4.postorder print"<<endl<<"5.inorder print"<<endl;

    cout<<"want to cont. y/n";
        cin>>g;

        if(g=='y')
        {
    do
    {
        int bb;
        cout<<"enter choice";
        cin>>bb;
        switch(bb)
        {
        case 1:
            int m;
            cout<<"enter element ";
            cin>>m;
            start=inserting(start,m);
            break;
        case 2:
            int n;
            cout<<"enter element ";
            cin>>n;
            start=deletion(start,n);
            break;
        case 3:
            preorder(start);
            break;
        case 4:
            inorder(start);
            break;
        case 5:
            postorder(start);
            break;

        }
        cout<<"want to cont. y/n";
        cin>>g;
    }
    while(g=='y');
        }
        else
        {
cout<<"thanku";

        }


}
