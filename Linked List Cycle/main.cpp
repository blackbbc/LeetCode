/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 *
 *�ж������Ƿ��ظ� 
 *��ÿһλһ������ֵ��9999�� 
 *�ж��Ƿ��ظ�����
 *�ѵ㣺����ֵ����ȷ�� 
 */
class Solution {
public:
bool hasCycle(ListNode *head) {
	ListNode *p=head;
	
	if (p) {
		p->val=9999;
		p=p->next;
	}
	
	while (p) {
		if (p->val==9999)
			return true;
		p->val=9999;
		p=p->next;
	}
	
	return false;
	
}
};
