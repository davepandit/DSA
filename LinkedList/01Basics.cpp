#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;//jo datatype hata hai usi type ka pointer bhi hota hai here jo datatype humne banaya hai that is Node
        //make a constructor
        Node(int data1, Node* next1){
            data = data1;
            next = next1;
        }

        Node(int data1){
            data = data1;
            next = nullptr;
        }
};

int main(){
 //making an object of the Node class
 int arr[4] = {2,5,8,7};
 Node* y = new Node(arr[0], nullptr);
 cout<<y->data;//this represents the value 
 cout<<y->next;//tthis represents the adddress of the next ele here it is null pointer
 cout<<y;//if we do simply like this then this returns the address of the current ele
 Node x = Node(arr[1]);
 cout<< x.data;//this gives the value at the current pos
 cout<< x.next;//this gives the location of the next ele here it is set to null pointer
 return 0;
}