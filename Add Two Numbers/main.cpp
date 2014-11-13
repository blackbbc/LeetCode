#include <iostream>
#include <string>
#include <stack>
#include <cmath>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL) {}
};

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
	 ListNode *ans,*p,*tail,*ll;
	 int c=0,sum=0;
	 
	 ans=new ListNode(0);
	 tail=ans;
	 
	 while (l1&&l2) {
	 	sum=l1->val+l2->val+c;
	 	c=sum/10;
	 	sum=sum%10;
	 	
	 	p=new ListNode(sum);
	 	tail->next=p;
	 	tail=p;
		
	 	l1=l1->next;
	 	l2=l2->next;
	 	
	 	sum=0;
	 }
	 
	 ll=l1?l1:l2;
	 
	 while (ll) {
	 	sum=ll->val+c;
	 	c=sum/10;
	 	sum=sum%10;
	 	
	 	p=new ListNode(sum);
	 	tail->next=p;
	 	tail=p;
	 	
	 	ll=ll->next;
	 	sum=0;
	 }
	 
	 if (c>0) {
	 	p=new ListNode(c);
	 	tail->next=p;
	 	tail=p;
	 }
	 
	 p=ans;
	 ans=ans->next;
	 delete p;
	 return ans;
}	

ListNode *ini() {
	int n,i,tt;
	ListNode *head=NULL,*p;
	
	cin>>n;
	
	for (i=0;i<n;i++) {
		cin>>tt;
		p=new ListNode(tt);
		p->next=head;
		head=p;
	}
	
	return head;
}

void pprint(ListNode *head) {
	ListNode *p=head;
	
	while (p) {
		cout<<p->val<<' ';
		p=p->next;
	}
}

int main()
{
	ListNode *l1,*l2,*l3;
	l1=ini();
	l2=ini();
	l3=addTwoNumbers(l1,l2);
	pprint(l3);
	
	
	return 0;
}
