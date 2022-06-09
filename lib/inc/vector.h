
class Vector {
    int b;
    private:
        int *a;
        int sz;
    public:
    Vector():a{nullptr},sz{0} {}
    Vector(int s): sz{s}, a{new int[s]}{
        for(auto i =0; i<sz ; i++)
        {
            a[i] = 0;
        }
    }
    Vector(int s, int init): sz{s}, a{new int[s]}{
        for(auto i =0; i<sz ; i++)
        {
            a[i] = init;
        }
    }
    int get_size()
    {
        return this->sz;
    }
    inline void print_vector();
    int operator[](int i) {return ((i < this->get_size()) ? a[i] : -1);}
    ~Vector() 
    {
        delete this->a;
        std::cout<<"Vector Destructor called"<<std::endl;
    }
};

inline void Vector::print_vector()
{
    for(auto i =0; i<this->sz ; i++)
    {
        std::cout<<this->a[i]<<"\t";
    }
}