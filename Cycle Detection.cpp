#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct linkedlist{
  struct  node{
    int data  ;
    node* next ;
  };
  node* head = nullptr; 
  node* last = nullptr ; 
  void insert(int D)
  {
    node* newnode =  new node  ;
    newnode->data =  D ;
    newnode->next = nullptr ;
    if (head ==  nullptr) {
      head =  last =  newnode ;
    }
    else {
      if (D  < head->data )
      {
        newnode->next =  head ; 
        head = newnode ;
      }
      bool  flag =   true ; 
      node* cur  =  head ; 
       node*  prv = nullptr ;
      while (cur !=  nullptr) {
        if  (cur->data  > D)
        {
          prv->next =  newnode  ;
          newnode->next = cur ; 
          flag =  false  ; 
          break;
        }
        prv =  cur  ; 
        cur =  cur->next  ;
      
      }
      if (flag)
      {
        last->next =  newnode  ;
        last  = newnode ;
      }
      
    }
  }
  int cnt_link()
  {
    node*  cur = head->next  ;
    node*  prv = head ;
    int cnt =1  ;
    int res =0  ;
    while (cur) {
      if (cur->data ==  prv->data)cnt++ ;
      else {
        res =  max(res, cnt) ;
        cnt = 1  ;
      }
      prv =  cur ; 
      cur= cur->next ;
    
    }
    res =  max(res, cnt) ;
    return  res ;
  }
  
  
};


int main() {
  int t ;  cin >> t ; 
  linkedlist a ; 
  for (int i = 0 ; i < t; i++)
  {
    int x ;  cin >> x; 
    a.insert(x) ;
  }
  int m ;  cin >>  m ; 
   for (int i = 0 ; i < m; i++)
  {
    int x ;  cin >> x; 
    a.insert(x) ;
  }
  
  if (a.cnt_link() > 1) cout << 1  ;
  else cout << 0  ;
   
    return 0;
}
