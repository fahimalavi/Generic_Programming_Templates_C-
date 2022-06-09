#include <iostream>
#include "lib/inc/vector.h"
#include "lib/inc/vector_template.h"

using namespace std;

inline void use_simple_vector();
inline void use_template_vector();

int main()
{
    //use_simple_vector();
    use_template_vector();
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
    Vector_template<double> a;
    Vector_template<int> b(5);
    Vector_template<float> *c = new Vector_template(3, 100.0f);

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