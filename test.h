#include <string>

class Test1
{
public:
    Test1(int x): m_num(x) {};
    virtual ~Test1() = default;
    
    int hash()
    {
        return m_num;
    }

    std::string toString()
    {
        return std::to_string(m_num);
    }
private:
    int m_num;
};

class Test2
{
public:
    Test2(int x): m_num(x) {};   
    std::string hash()
    {
        return std::to_string(m_num);
    }

    int toString()
    {
        return m_num;
    }
private:
    int m_num;
};

class Test3
{
private:
    int m_num;
public:
    Test3(int x): m_num(x){}
};

class Test4
{
public:
    Test4(int x): m_num(x) {};   
    int hash() const
    {
        return m_num;
    }

    std::string toString()
    {
        return std::to_string(m_num);
    }
private:
    int m_num;
};