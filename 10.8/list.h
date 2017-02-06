#ifndef LIST_H_
#define LIST_H_ 
typedef int Item;

class List
{
    private:
        enum { MAX = 10};   
        struct Rlylist
        {
        	Item thing;
        	Rlylist *next;
        };     
        Rlylist *m_root = 0;
    public:
        List();
        ~List();
        List(const Item & item);
        bool isempty() const;
        bool isfull() const;
       	void push(const Item & item);    
        void visit(void (*pf)(Item &));
};
#endif