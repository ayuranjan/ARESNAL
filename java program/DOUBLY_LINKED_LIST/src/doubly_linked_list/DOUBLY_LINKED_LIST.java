/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package doubly_linked_list;

/**
 *
 * @author ayushranjan
 */
class Node{
    int data ;
    Node next ;
    Node prev ;
    Node(int d)
    {
        data = d ;
    }
}

class doubly{
    Node head ;
    void insert_beg(int d)
    {
        Node temp = new Node(d);
        temp.prev = null;
        temp.next = head;
        head = temp;
    }
    void print()
    {
        Node start = head ;
        while(start != null)
        {
            System.out.print(start.data + " ");
            start = start.next;
        }
    }
    void insert_end(int d )
    {
        Node temp = new Node(d);
        Node curr = head ;
        if(head == null)
            head = temp;
        else
        {
            while(curr.next != null)
                curr = curr.next;
            temp.prev = curr;
            curr.next = temp ;
           
        }
    }
    void insert_after(int d,int pos )
    {
        Node temp = new Node(d);
        Node curr = head ;
        int i = 0 ;
        while(i != pos)
        {
            i ++;
            curr = curr.next;
        }
        if(curr.next != null)
        {
       temp.next = curr.next;
       curr.next.prev = temp ;
       temp.prev = curr;
        curr.next = temp ;}
        else 
        {
            curr.next = temp ;
            temp.prev = curr ;
        }
        
            
    }
}
public class DOUBLY_LINKED_LIST {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        doubly d = new doubly();
        d.insert_beg(10);
        d.insert_beg(20);
        d.insert_beg(30);
        d.insert_end(0);
        d.insert_end(10);
        d.insert_after(70, 4);
        d.print();
    }
    
}
