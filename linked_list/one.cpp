#include <bits/stdc++.h> 
using namespace std; 

class Node
{
public:
    int data;
    Node* next;
};

//Finding middle element in a linked list
void middle_element(Node* ptr1){
    Node* ptr2 = ptr1;
    while(ptr1->next != NULL){
        ptr1 = ptr1->next->next;
        ptr2 = ptr2->next;
    }
    cout<<ptr2->data;
}

// Reverse a linked list 
Node* reverse(Node* head){
    Node* ptr1=head;
    Node* ptr2=NULL;
    while(head->next != NULL){
        head = head->next;
        ptr1->next=ptr2;
        ptr2=ptr1;
        ptr1=head;
    }
    if(ptr2!=NULL && head->next==NULL){
        head->next = ptr2;
    }
    return head;
}

Node* sort_linked_list(Node* head){
    Node* i = head;
    Node* i_prev = NULL;
    int y = 0;
    while (i->next != NULL){
        y++;
        Node* j = i->next;
        Node* j_prev = i;
        while(j != NULL){
            // cout<<"-------------"<<y<<" "<<i->data<<" "<<j->data<<" "<<j_prev->data<<endl;
            // Node* x = head;
            // while(x!=NULL){
            //     cout<<x->data<<" ";
            //     x=x->next;
            // }
            // cout<<endl;
            if(i->data > j->data){
                if(i == j_prev){
                    if(i_prev != NULL){
                        i_prev->next = j;
                    }
                    i->next = j->next;
                    j->next = i;
                    if(head == i){
                        head = j;
                    }
                    i = j;
                    j_prev = i;
                    j = i->next;
                }else{
                    if(i_prev != NULL){
                        i_prev->next = j_prev->next;
                    }
                    Node*  j_next = j->next;
                    j->next = i->next;
                    i->next = j_next;
                    j_prev->next = i;
                    if(head == i){
                        head = j;
                    }
                    i = j;
                    j_prev = i;
                    j = i->next;
                }
            }
            j_prev = j;
            j = j->next;
        }

        i_prev = i;
        i = i->next;
    }
    return head;
}

Node* break_loop(Node* head){
    int a;
    cin>>a;
    Node *ptr1=head, *ptr2=head;
    while(ptr1->next!=NULL){
        ptr1=ptr1->next;
    }
    while(a--){
        ptr2=ptr2->next;
    }
    ptr1->next = ptr2;
    ptr1=head;
    ptr2=head;
    do
    {
        ptr1=ptr1->next;
        ptr2=ptr2->next->next;
    } while (ptr1!=ptr2);

    ptr1 = head;
    while(ptr1->next != ptr2->next){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    ptr2->next=NULL;
    return head;
}

int main(){
    Node* head = NULL;
    int entry,length,value;
    cin>>entry;
    length = entry;
    while(length--){
        cin>>value;
        Node* node = new Node();
        node->data = value;
        node->next = NULL;
        if(head==NULL){
            head = node;
        }else{
            Node* ptr = head;
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next = node;
        }
    }
    Node* ptr = break_loop(head); 
    // Node* ptr = reverse(head);
    // Node* ptr = sort_linked_list(head);
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
    // middle_element(head);
    return 0;
}

// int intersectPoint(Node* head1, Node* head2)
// {
//     int a=0,b=0;
//     Node* ptr = head1;
//     while(ptr->next!=NULL){
//         a++;
//         ptr=ptr->next;
//     }
//     ptr = head2;
//     while(ptr->next!=NULL){
//         b++;
//         ptr=ptr->next;
//     }
//     int c;
//     if(a<b){
//         ptr=head1;
//         head1=head2;
//         head2=ptr;
//         c=a;
//         a=b;
//         b=c;
//     }
//     c=0;
//     while(head1->next!=NULL && head2->next!=NULL){
//         c++;
//         if(head1->next == head2->next){
//             return head1->next->data;
//         }
//         if(a==b){
//             head2=head2->next;
//             b--;
//         }
//         a--;
//         head1=head1->next;
        
//     }
//     // Your Code Here
//     return 0;
// }