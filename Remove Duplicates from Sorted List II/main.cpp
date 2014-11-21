#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *deleteDuplicates(ListNode *head)
{
	ListNode *p=head,*ff;
	ListNode *fa;
	bool flag=false;
	
	ff=new ListNode(-1);
	ff->next=head;
	fa=ff;
	
	while (p)
	{
		flag=false;
		while (p->next&&p->next->val==p->val)
		{
			flag=true;
			p->next=p->next->next;
		}	
		
		if (flag)
		{
			fa->next=p->next;
			p=fa->next;
		}
		else
		{
			fa=p;
			p=p->next;
		}
		
	}
	
	return ff->next;
}


int main()
{
	srand(time(0));
	
	ListNode *p;
	ListNode *head=NULL;
	int n,temp;
	
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>temp;
		p=new ListNode(temp);
		p->next=head;
		head=p;
	}
	
	p=head;
	while (p)
	{
		cout<<p->val<<" ";
		p=p->next;
	}
	cout<<endl;
		
	p=deleteDuplicates(head);
		
	while (p)
	{
		cout<<p->val<<" ";
		p=p->next;
	}
	
	
	return 0;
}
