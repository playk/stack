#ifndef _STACKNODE_H_
#define _STACKNODE_H_
 
#include <string>
 
template<class T>
/** <The Stack class >*/
class Stack
{
public:
        Stack():tail(0), head(0)
/** the main constructor of the class*/
        {
        }
        
        ~Stack()
        {
              while(head)
              {
                  tail=head->next;
                  delete head;
                  head=tail;
              }
        }
 /** function that add an element to the stack*/
        void push(T val)
        {
                Node* Temp;
                Temp=new Node;
                Temp->elem=val;
                if(tail==0)
                {
                        tail=Temp;
                }
                else
                {
                        Temp->next=tail;
                        tail=Temp;
                }
        }
 /**function that returns the top element of the stack */
        T top()
        {
                if(tail==0)
                {
                        throw std::string("Stack is empty!");
                }
                return tail->elem;
        }
/** function that returns the top element of the stack and deletes it from it*/

        void pop()
        {
                if(tail==0)
                {
                        throw std::string("Stack is empty!");
                }
                Node* delptr=tail;
                tail=tail->next;
                delete delptr;
        }
 /** function that prints all elements of the stack */

        void print()
        {
                if(tail==0)
                {
                        throw std::string("Stack is empty!");
                }
                for(Node* ptr=tail; ptr!=0; ptr=ptr->next)
                {
                        std::cout<<ptr->elem<<' ';
                }
                std::cout<<'\n';
        }
private:
        struct Node
        {
                Node():elem(0), next(0)
                {
                }
                Node* next;
                T elem;
        };
        Node* head;
        Node* tail;
};
 
#endif