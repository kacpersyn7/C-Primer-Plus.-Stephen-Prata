#include <iostream>
#include "list.h"
List::List()
{
	m_root = new Rlylist;
	m_root -> next = 0;
}
List::~List()
{
	Rlylist *temp;
    while(m_root)
    {
        temp = m_root;
        m_root = temp -> next;
        delete temp;
    }
}
List::List(const Item & item)
{
	m_root = new Rlylist;
	m_root -> thing = item; 
	m_root -> next = 0;
}
bool List::isempty() const
{
	if(!m_root)
		return true;
	return false;
}
bool List::isfull() const
{
	Rlylist * temp = m_root;
	int i = 0;
	while(temp -> next)
	{
		++i;
		if(i > MAX)
			return true;
		temp = temp -> next;
	}
	return false;

}
void List::push(const Item & item)
{
	Rlylist * temp = m_root;
	while(temp -> next)
		temp = temp -> next;
	temp -> next = new Rlylist;
	temp -> next -> thing = item;
	temp -> next -> next = 0;
}
void List::visit(void (*pf)(Item &))
{
	Rlylist * temp = m_root;
	while(temp)
	{
		pf(temp -> thing);
		temp = temp -> next;
	}
} 