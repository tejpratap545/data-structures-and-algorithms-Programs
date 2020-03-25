class Node:
    def __init__(self,data):
        self.data=data
        self.next=None

class linkedlist:
    def __inint(self):
        self.head=None  

    def printlist(self):
        temp=self.head
        while(temp):
            print(temp.data)
            temp=temp.next


    def push(self,data):
        new_node=Node(data)
        new_node.next=self.head.next
        self.head.next=new_node

    def append(self,data):
        new_node=Node(data)
        if self.head==None:
            self.head=new_node
            return
        last=self.head
        while(last.next):
            last=last.next
        last.next=new_node
            

if __name__ == "__main__":
    list=linkedlist() 
    list.head=Node(20)
    second=Node(89)
    third=Node(38)
    
    list.head.next=second
    second.next=third
    list.printlist()
    list.push(67)
    print("after push the list")
    list.printlist()
    print("after append the element ")
    list.append(789)
    list.printlist()
    