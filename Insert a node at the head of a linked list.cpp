#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct Linkedlist{
  struct Node {
    int data ; 
    Node* next ; 
  };
  Node* head =NULL ;
  Node* Last =NULL ;
  void insert(int D)
  {
    Node*  newnode = new Node ;
    newnode->data = D ;
    newnode->next =NULL ;
    if(head == NULL)
    {
      head = Last =newnode ;
    }
    else {
      newnode ->next =  head  ;
      head = newnode ;
      
    }
  }
  void print()
  {
    Node*  cur = head ;
    while (cur) {
      cout << cur->data <<'\n' ;
      cur =  cur->next ;
      
    }
  }
};


int main() {
   int t ;  cin >> t ;   
   Linkedlist a ;
   for (int i =0 ;i< t ;i++)
   {
     int x ;
     cin >> x ;
     a.insert(x) ;
   }
   a.print() ;
    return 0;
}
