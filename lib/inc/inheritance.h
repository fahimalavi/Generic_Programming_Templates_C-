//#include "vector.h" // try with vector_template

class Container
{
    public:
        //virtual ~Container();
        virtual int size()=0;
        virtual int operator[](int i) = 0;

};

class Vector_Container : public Container {
    private:
        Vector a;
    public:
        Vector_Container(int size_a): a(size_a) { }
        Vector_Container(int size_a, int init): a(size_a, init) { }
        int size()
        {
            return a.get_size();
        }
        int operator[](int i){return a[i];}
        ~Vector_Container() { };
};
