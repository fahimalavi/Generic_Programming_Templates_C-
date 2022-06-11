class Polymorphic_Template_Base {
    public:
    std::string print()
    {
        return "print : Print from Polymorphic_Template_Base";
    }
};

template<typename T>
class Derived: public T {
    public:
    std::string print()
    {
        return "Derived : Print from " + T::print();
    }
};

template<typename T>
class Derived_from_child: public T {
    public:
    std::string print()
    {
        return "Derived_from_child : Print from " + T::print();
    }
};
