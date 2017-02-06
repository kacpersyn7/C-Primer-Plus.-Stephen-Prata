#include <iostream>
using namespace std;

const int SLEN = 30;
struct student {
    char fullname[SLEN];
    char hobby [SLEN];
    int ooplevel;
};
int getinfo(student pa [], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa [], int n);
int main()
{
    cout<< "Podaj wielkosc grupy: ";
    int class_size;
    cin>>class_size;
    while (cin.get() != '\n')
        continue;
    student * ptr_stu = new student [class_size];
    int entered = getinfo(ptr_stu, class_size);
    for(int i = 0; i < entered; ++i)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout<< "Gotowe\n";
    return 0;
}
int getinfo(student pa[], int n)
{
    
    int i;
    for(i = 0; i < n; ++i)
    {

        cout<<"Student numer: "<<i+1<<endl;
        cout<<"Podaj nazwisko: ";
        cin.get((pa+i)->fullname,SLEN); 
        if(cin.get() != '\n') 
            return i;
        cout<<"\nPodaj hobby: ";
        cin.getline((pa+i)->hobby,SLEN);
        cout<<"\nPodaj poziom: ";
        (cin>>(pa+i)->ooplevel).get();
        cout<<endl;

    }
    return i;
}
void display1(student st)
{
    cout<<"nazwisko: "<<st.fullname<<"\n"
          "hobby: "<<st.hobby<<"\n"
          "poziom: "<<st.ooplevel<<endl;
}
void display2(const student * ps)
{
    cout<<"nazwisko: "<<ps->fullname<<"\n"
          "hobby: "<<ps->hobby<<"\n"
          "poziom: "<<ps->ooplevel<<endl;
}
void display3(const student pa [], int n)
{
    for(int i = 0; i < n; ++i)
        cout<<"nazwisko: "<<pa[i].fullname<<"\n"
             "hobby: "<<pa[i].hobby<<"\n"
             "poziom: "<<pa[i].ooplevel<<endl;
}