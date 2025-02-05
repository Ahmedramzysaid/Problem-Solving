#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct linkedlist{
  struct node{
    int data ;
    node* next ;
  } ;
  node* head =  nullptr ;
  node* last = nullptr ;
  int len = 0 ;
  void insert(int D)
  {
    node* newnode =  new node ;
    newnode->data =  D ;
     newnode->next = nullptr ;
     if (head == nullptr)
     {
       head = last  =  newnode ;
     }
     else {
       last->next = newnode ;
       last = newnode ;
     }
    len++ ;
  }
  
  void print()
  {
    while(head)
    {
      cout << head->data  << " " ;
      head =  head->next ;
    }
  }
  
};
linkedlist  compare (linkedlist a  , linkedlist b , linkedlist c)
{
  while (a.head && b.head) {
    if (a.head->data  > b.head->data)
      {
        c.insert(b.head->data) ;
        b.head =  b.head->next  ;
      }
      else {
         c.insert(a.head->data) ;
        a.head =  a.head->next  ;
      }
  
  }  
  while(a.head)
  {
     c.insert(a.head->data) ;
        a.head =  a.head->next  ;
  } 
  while(b.head)
  {
     c.insert(b.head->data) ;
        b.head =  b.head->next  ;
  }
  return c ;
}

int main() {
    
    int t ;  cin >> t; 
    while (t--) {
    linkedlist  a; 
    linkedlist b ; 
    linkedlist c; 
    int n , m ; 
    cin >>  n  ; 
    int x  ; 
    for (int i = 0 ; i < n ;i++) 
    {
      cin >> x; 
      a.insert(x) ;
    }
    cin >> m  ;
    for (int i = 0 ; i < m ;i++) 
    {
      cin >> x; 
      b.insert(x) ;
    }
    
   
  c = compare(a,b,c) ;
  c.print() ;
  cout << endl ;
  
    }
    
    return 0;
}
