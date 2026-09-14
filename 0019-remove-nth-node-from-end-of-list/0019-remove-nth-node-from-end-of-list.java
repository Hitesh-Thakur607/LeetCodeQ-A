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
    public ListNode removeNthFromEnd(ListNode head, int n) {
        int count=0;
        ListNode temp=head;
        while(temp!=null){
            temp=temp.next;
            count++;
        }
        int checkpoint=count-n;
        count=0;
        temp=head;
        if(checkpoint==count){
            return head.next;
        }
        checkpoint-=1;
        while(temp!=null){
            if(count==checkpoint){
                temp.next=temp.next.next;
                break;
            }
            temp=temp.next;
            count++;
        }
        return head;
    }
}