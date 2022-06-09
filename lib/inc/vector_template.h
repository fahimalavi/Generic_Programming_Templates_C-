
template<typename T>
class Vector_template {
    private:
        T *a;
        int sz;
    public:
    Vector_template():a{nullptr},sz{0} {}
    Vector_template(int s): sz{s}, a{new T[s]}{
        for(auto i =0; i<sz ; i++)
        {
            a[i] = 0;
        }
    }
    Vector_template(int s, T init): sz{s}, a{new T[s]}{
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
    T operator[](int i) {return ((i < this->get_size()) ? a[i] : -1);}
    ~Vector_template() 
    {
        delete this->a;
        std::cout<<"Vector_template Destructor called"<<std::endl;
    }
};
template<typename T>
inline void Vector_template<T>::print_vector()
{
    for(auto i =0; i<this->sz ; i++)
    {
        std::cout<<this->a[i]<<"\t";
    }
}