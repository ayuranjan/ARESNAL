/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package linked_list;

/**
 *
 * @author ayushranjan
 */
class Node {
    int data ;
    Node next ;
    Node(int d )
    {
        data = d ;
    }
}

class Linked {
    Node head ;
    void insert_beg(int d )
    {
        Node temp = new Node(d);
        temp.next = head ;
        head = temp ;
        
    }
     void insert_end(int d )
    {
        Node node = new Node(d);
        node.next = null;
        if (head == null){
                 head = node ;
         }
         else{
                    Node temp = head;
                    while(temp.next != null){
                        temp = temp.next;
                    }
                    temp.next = node; 
                    
                }    
            
        
        
    }
    void print()
    {
        Node curr = head ;
        while(curr != null )
        {
            System.out.print(curr.data + " ");
            curr = curr.next ;
    }
}
    void swapkthnode(Node head, int num, int k)
    {
        // your code here
    Node ptr1 = head ;
    Node ptr2 = head ;
    Node a =null ;
    Node b = null ;
    for(int i =1 ;i<num  - k;i++)
    {
        ptr2 = ptr2.next ;
    }
    for(int i= 1 ;i< k ;i++)
    {
        ptr1 = ptr1.next ;
    }
    ptr1 = a ;
    ptr2 =  b ;
    Node start = head ;
    while(start != null)
    {
        if(start.next == ptr1 )
        {
            start.next = b ;
            b.next = ptr1.next ;
        }
        if(start.next == ptr2 )
        {
            start.next = a ;
            a.next = ptr2.next ;
        }
    }
    
    }
}
public class LINKED_LIST {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Linked l = new Linked();
        l.insert_beg(10);
        l.insert_beg(20);
       l.insert_beg(30);
        l.insert_end(0);
        l.insert_end(10);
        l.insert_end(20);
        l.print();
    }
    
}
