class Solution {
    public ListNode mergeInBetween(ListNode list1, int a, int b, ListNode list2) {
        int start = 0;
        ListNode temp = list1;
        ListNode temp2 = list2;
        ListNode ans = null;
        ListNode head = null;
        ListNode newaddition = null;
        while (temp != null) {
            if (ans == null && start < a) {
                ans = new ListNode(temp.val);
                head = ans;              
            } 
            else if (start < a) {
                ans.next = new ListNode(temp.val);
                ans = ans.next;
            } 
            else if (start > b) {
                newaddition = temp;
                break;
            }
            start++;
            temp = temp.next;           
        }
        while (temp2 != null) {
            if (ans == null) {
                ans = new ListNode(temp2.val);
                head = ans;
            } else {
                ans.next = new ListNode(temp2.val);
                ans = ans.next;
            }
            temp2 = temp2.next;
        }
        while (newaddition != null) {
            ans.next = new ListNode(newaddition.val);
            ans = ans.next;             
            newaddition = newaddition.next; 
        }

        return head;
    }
}