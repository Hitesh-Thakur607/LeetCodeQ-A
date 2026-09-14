/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode reverseList(ListNode head) {
        if(head==null){
            return null;
        }
        ListNode curr=head;
        ListNode temp=head;
        ListNode last=null;
        while(curr!=null){
            temp=curr;
            curr=curr.next;
            temp.next=last;
            last=temp;
        }
        return temp;
    }
}