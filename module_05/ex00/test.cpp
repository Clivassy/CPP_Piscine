#include <iostream>
#include <exception>

class Exception
{
    private:
        std::string _msg;
    public:
    Exception(std::string msg)
    {
        this->_msg = msg;
    }
    std::string getMsg()
    {
        return(this->_msg);
    }
   // ~Exception( void );
};

/*class ZeroDivException : public Exception
{
    public:
    using Exception::Exception;
    ZeroDivException( const ZeroDivException& err): Exception(err.getMsg())
    {
        std::cout << "copy constructor" << std::endl;
    }
};*/

class Obj
{
    public:
    Obj( void )
    {
        std::cout << "construction" << std::endl;
    }
    ~Obj( void )
    {
        std::cout << "destruction" << std::endl;
    }
};

int divide(int n1, int n2)
{
    if (n2 == 0)
        throw Exception("division can't succeed.");
    return (n1 / n2);
}

int main()
{
    try
    {
        std::cout << divide(50, 10) << std::endl;
    }
    catch(Exception err)
    {
        std::cerr << "error: " << err.getMsg() << std::endl;
    }
    return (0);
}