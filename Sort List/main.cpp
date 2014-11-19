/**
**基于链表的归并排序 
**空间O(1) 
**时间O(nlogn) 
*/

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

ListNode *getMiddleOfList(ListNode *head) {
	ListNode *slow=head;
	ListNode *fast=head;
	
	while (slow->next&&fast->next&&fast->next->next) {
		fast=fast->next->next;
		slow=slow->next;
	}
	return slow;
}

ListNode  *listMerge(ListNode *a,ListNode *b) {
	ListNode *head=NULL,*pk;
	ListNode *pi=a;
	ListNode *pj=b;
	
	//确定头节点 
	if (pi->val<pj->val)
	{
		head=a;
		pi=pi->next;
	}
	else
	{
		head=b;
		pj=pj->next;
	}
	
	pk=head;
	
	//合并 
	while (pi!=NULL&&pj!=NULL)
		if (pi->val<=pj->val)
		{
			pk->next=pi;
			pk=pi;
			pi=pi->next;
		}
		else
		{
			pk->next=pj;
			pk=pj;
			pj=pj->next;
		}
	//收尾	
	if (pi==NULL)
		pk->next=pj;
	else
		pk->next=pi;
	
	
	return head;	
}
 
ListNode *sortList(ListNode *head) {
	ListNode *p=head,*ne,*mid;
	if ((head==NULL)||(head->next==NULL))
		return head;
	
	mid=getMiddleOfList(head);
	ne=mid->next;
	mid->next=NULL;
    
    return listMerge(sortList(head),sortList(ne));
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
		p=new ListNode(rand()%100);
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
	
	p=sortList(head);
	
	while (p)
	{
		cout<<p->val<<" ";
		p=p->next;
	}
	
	
	return 0;
}
