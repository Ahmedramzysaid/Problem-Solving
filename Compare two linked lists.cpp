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
  
  int lenght()
  {
    return len ;
  }
  
};
bool  compare (linkedlist a  , linkedlist b)
{
    while(a.head)
    {
      if (a.head->data != b.head->data) return false ;
      a.head =  a.head->next ;
      b.head =  b.head->next ;
    }
    return true;
}

int main() {
    
    int t ;  cin >> t; 
    while (t--) {
    linkedlist  a; 
    linkedlist b ; 
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
    if(a.lenght()!= b.lenght() ) cout << 0  ;
    else if (compare(a, b ))
    {
      cout << 1  ; 
    }
    else cout << 0 ; 
    cout << endl ;
    }
    
    
    return 0;
}
