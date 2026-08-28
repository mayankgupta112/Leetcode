/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:      //recursion
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==nullptr || list2==nullptr){
            return list1==nullptr ? list2 : list1;  // ternary statement
        }
            if(list1->val<=list2->val){
                list1->next=mergeTwoLists(list1->next,list2);  // ye merge kregea list ko jbb condition true hogi tbb
                return list1;
            }
            else{
                list2->next=mergeTwoLists(list1,list2->next);  // ye wala krega 

                return list2;
            }
        }

    
};