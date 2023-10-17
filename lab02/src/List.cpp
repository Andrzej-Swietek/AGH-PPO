#include "List.h"
#include <iostream>

using namespace std;


void init(slist * list)
{
  list->head = NULL;
}

void push_back(slist * list, char c)
{
  slistEl * p, * e;

  e = new slistEl;  
  e->next = NULL;   
  e->data = c;
  p = list->head;
  if( p )
  {
     while( p->next ) p = p->next;
     p->next = e;
  }
  else list->head = e;
}

void push_front(slist * list, char c)
{
  slistEl * e = new slistEl;
  e->data = c;
  e->next = list->head;
  list->head = e;
}

void delete_after(slistEl * p)
{
  if (p == nullptr || p->next == nullptr) {
    return; // Cannot delete if there's nothing to delete or if p is the last element.
  }
  
  slistEl * toDelete = p->next;
  p->next = toDelete->next;
  delete toDelete;
}

void printl(slist * list)
{
  slistEl * p = list->head;
  while (p != NULL)
  {
    cout << p->data << " ";
    p = p->next;
  }
  cout << endl;
}


slistEl * find(slist * list, char c)
{
  slistEl * p = list->head;
  while(p != NULL)
  {
  	if( p->data == c )
  	  break;
  	p = p->next;
  }
  
  return p;
}

