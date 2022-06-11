#include <iostream>
#include <string>
#include "lib/inc/vector.h"
#include "lib/inc/vector_template.h"
#include "lib/inc/inheritance.h"
#include "lib/inc/polymorphic_template.h"

using namespace std;

inline void use_simple_vector();
inline void use_template_vector();
inline void templates();
inline void inheritance();
inline void polymorphic_template();

int main()
{
    //use_simple_vector();
    //use_template_vector();
    //templates();
    //inheritance(); 
    polymorphic_template();
}

// Simple use of Vector file
inline void use_simple_vector()
{
    Vector a;
    Vector b(5);
    Vector *c = new Vector(3,100);

    cout << "Vector A size " << a.get_size()<<endl;
    cout << "Vector B size " << b.get_size()<<endl;
    cout << "Vector C size " << c->get_size()<<endl;
    b.print_vector();
    cout <<endl;
    cout << "b[0] " << b[0]<<endl;
    cout << "b[4] " << b[4]<<endl;
    cout << "b[5] " << b[5]<<endl;
    c->print_vector();
    cout <<endl;
    delete c;
    cout <<"Program ending"<<endl;
}

inline void use_template_vector()
{
    Vector_template<double> a(2);
    Vector_template<string> *c = new Vector_template(3, string("hello"));
    Vector_template<double> b(5, 1.0);


    cout << "Vector_template A size " << a.get_size()<<endl;
    cout << "Vector_template B size " << b.get_size()<<endl;
    cout << "Vector_template C size " << c->get_size()<<endl;
    b.print_vector();
    cout <<endl;
    cout << "b[0] " << b[0]<<endl;
    cout << "b[4] " << b[4]<<endl;
    cout << "b[5] " << b[5]<<endl;
    c->print_vector();
    cout <<endl;
    delete c;
    cout <<"Program ending"<<endl;
}

void templates()
{
    Number<int> i(55);
    cout << i.getValue() << endl;

    Number<int> j(56,1);
    cout << j.getValue() << endl;

    Number<double> d(55.66);
    cout << d.getValue() << endl;

    Number<char> c('a');
    cout << c.getValue() << endl;

    Number<string> s("Hello");
    cout << s.getValue() << endl;
}


inline void inheritance()
{
    const int size=10;
    Vector_Container a(size, 7);
    for(auto i = 0; i< size; i++)
    {
        cout<<a[i];
    }
    cout<<endl;
}

inline void polymorphic_template()
{
    Polymorphic_Template_Base *data1 = new Derived_from_child<Derived<Polymorphic_Template_Base>>();
    Derived<Polymorphic_Template_Base> *data2 = new Derived<Polymorphic_Template_Base>();
    Derived_from_child<Derived<Polymorphic_Template_Base>> *data3 = new Derived_from_child<Derived<Polymorphic_Template_Base>>();
    cout<<data1->print()<<endl;
    cout<<data2->print()<<endl;
    cout<<data3->print()<<endl;
}