#include <iostream>
using namespace std;
#if 0
Write a void function that takes a linked list of integers and reverses the order of its nodes. The
function will have one call-by-reference parameter that is a pointer to the head of the list. After
the function is called, this pointer will point to the head of a linked list that has the same nodes
as the original list but in the reverse of the order they had in the original list. Note that yourfunction will neither create nor destroy any nodes. It will simply rearrange nodes. Place your
function in a suitable test program.
#endif
struct node {
	int data;
	node *next;
	node *prev;//we need prev for see when we changed after nodes
};

class linked_list {
    private:
	node *head, *tail;

    public:
	linked_list() {
		head = NULL;
		tail = NULL;
	}
	node *get_head(){return head;}

	void add_node(int n) {
		node *tmp = new node;
		tmp->data = n;
		tmp->next = NULL;

		if (head == NULL) {
			head = tmp;
			tail = tmp;
		} else {
			tail->next = tmp;
			tail->next->prev=tail;
			tail = tail->next;
		}
	}
	void print(node *head){
		node* temp=head;
		while(temp!=NULL){
			cout<<temp->data;
			temp=temp->next;
		}
	}
	void reverse(node * head){	//call by referance
		while(head->next!=NULL){
			node *tmp=new node;
			tmp=head->next;;
			head->next=head;;
			head=tmp;

			head=head->next;//going trought
		}
		while(head!=NULL)
		{
			cout<<head->data;
			head=head->prev;
		}
	}
};
int main() {
	linked_list a;
	a.add_node(1);
	a.add_node(2);
	a.add_node(3);
	a.add_node(4);
	a.add_node(5);
	cout<<"first version"<<endl;
	a.print(a.get_head());
	cout<<endl<<"reverse version"<<endl;
	a.reverse(a.get_head());
	return 0;
}
