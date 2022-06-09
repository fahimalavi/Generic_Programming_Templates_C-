
template<typename T>
class Vector_template {
    private:
        T *a;
        int sz;
    public:
    //Vector_template():a{nullptr},sz{0} {}
    explicit Vector_template(int s);
    explicit Vector_template(int s, T init);
    int get_size()
    {
        return this->sz;
    }
    inline void print_vector();
    T& operator[](int i) {return a[i];}
    ~Vector_template() 
    {
        delete[] this->a;
        std::cout<<"Vector_template Destructor called"<<std::endl;
    }
};

template<typename T>
Vector_template<T>::Vector_template(int s){
    sz = s;
    a = new T[s];
    for(auto i =0; i<sz ; i++)
    {
        a[i] = 0.0f;
    }
}

template<typename T>
Vector_template<T>::Vector_template(int s, T init){
    sz = s;
    a = new T[s];
    for(auto i =0; i<sz ; i++)
    {
        a[i] = init;
    }
}

template<typename T>
inline void Vector_template<T>::print_vector()
{
    for(auto i =0; i<this->sz ; i++)
    {
        std::cout<<this->a[i]<<"\t";
    }
}


template <typename T>
class Number {
private:
   T value;
   int a;
public:
   Number(T value) { this->value = value; };
   Number (int n, T value) { this->value = value; a = n;};
   T getValue() { return value; }
   void setValue(T value) { this->value = value; };
};