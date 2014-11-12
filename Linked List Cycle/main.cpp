/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 *
 *判断链表是否重复 
 *给每一位一个特殊值（9999） 
 *判断是否重复出现
 *难点：特殊值不好确定 
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
