class Node:
    def __init__(self,data) -> None:
        self.data = data
        self.next = None
        
class LinkedList:
    def __init__(self) -> None:
        self.head = None
        
    def append(self,data):
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
            return
        
        last = self.head
        while last.next:
            last = last.next
        
        last.next = new_node
        
    def print_list(self):
        current = self.head
        while current:
            print(current.data, end = "->")
            current = current.next
        print("None")
    
    def delete_node(self,key):
        temp = self.head
        if temp is not None:
            if temp.data == key:
                self.head = temp.next
                temp = None
                return
            
        while temp is not None:
            if temp.data == key:
                break
            
            prev = temp
            temp = temp.next
        
        prev.next = temp.next
        temp = None
        
        if temp is not None:
            return
        

list  = LinkedList()
list.append(1)
list.append(2)
list.append(3)
list.append(4)

print("Linked List : ")
list.print_list()

list.delete_node(2)
list.print_list()            
            