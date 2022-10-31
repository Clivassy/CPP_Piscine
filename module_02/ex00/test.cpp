#include "iostream"
#include "string"

// Surcharge de fonction : polymorphie
/*void print(std::string msg="Bonjour")
{
    std::cout << msg << std::endl;
}

void print(int n)
{
    std::cout << n << std::endl;
}

int main()
{
    print("Hello world!");
    print(666);
    print();
    return 0;
}*/

// la surcharge des methodes 
// methode = fonction qui apparatient à une classe
// surcharge d'opérateurs 

enum Int 
{
    zero,
    one,
    two,
    three,
};

class Personne
{
    public:
    std::string name = "Julia";
    int age = 25;
    Personne(std::string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    Personne(){}
    void    print()
    {
        std::cout << name << " " << age << std:: endl;
    }
    int operator[](std::string key)
    {
        if (key == "name")
            return this->age = 15;
        else
            return this->age = this->age;
    }

};

std:: string operator+(Personne &p1, Personne &p2)
{
    //return p1.age + p2.age;
    return (p1.name + " " + p2.name);
}

int operator+(Personne &p1, int nb)
{

    return p1.age + nb;
}

int main()
{
    Personne p1, p2("Lucie", 20);
    p1.print();
    p2.print();
    std::cout << p1 + p2 << std::endl;
    std::cout << p1 + 5 << std::endl;
    std::cout << p1["prout"] << std::endl;
    return 0;
}