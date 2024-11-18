#include <iostream>
using namespace std;
#define null 1
#define invalid 2
#define full 3

template <typename X>
class da
{
private:
    int capacity;
    int lastindex;
    X *ptr;

protected:
    void doublearray();
    void halfarray();

public:
    da(int x);
    da(const da &e);
    ~da();
    da &operator=(const da &);
    X get(int);
    int cap();
    bool isfull();
    bool isempty();
    void edit(int, X);
    int search(X);
    void create(int);
    int count();
    void del(int x);
    void append(X y);
    void insert(int x, X y);
};

template <typename X>
da<X>::da(int x)
{
    try
    {
        if (x < 1)
            throw invalid;
        capacity = x;
        ptr = new int[x];
        lastindex = -1;
    }
    catch (int e)
    {
        ptr = nullptr;
        cout << endl
             << " input in invalid ";
    }
}

template <typename X>
da<X>::da(const da &e)
{
    capacity = e.capacity;
    lastindex = e.lastindex;
    ptr = new int[capacity];
    for (int i = 0; i <= lastindex; i++)
        ptr[i] = e.ptr[i];
}

template <typename X>
da<X>::~da()
{
    if (ptr)
        delete[] ptr;
}

template <typename X>
da<X> &da<X>::operator=(const da &e)
{
    if (this == &e)
        return *this;
    if (ptr)
        delete[] ptr;

    capacity = e.capacity;
    lastindex = e.lastindex;

    ptr = new int[capacity];
    for (int i = 0; i <= lastindex; i++)
        ptr[i] = e.ptr[i];

    return *this;
}

template <typename X>
X da<X>::get(int x)
{
    try
    {
        if (ptr == nullptr)
            throw null;
        else if (x < 0 || x > lastindex)
            throw invalid;
        else
            return ptr[x];
    }
    catch (int e)
    {
        if (e == 1)
            cout << " this array is null please create new array be calling create function :";
        else
            cout << endl
                 << " input in invalid ";
    }
}

template <typename X>
int da<X>::cap()
{
    try
    {
        if (ptr == nullptr)
            throw null;
        return capacity;
    }
    catch (int e)
    {

        cout << " this array is null please create new array be calling create function :";
    }
}

template <typename X>
bool da<X>::isempty()
{
    try
    {
        if (ptr == nullptr)
            throw null;
        return lastindex == -1;
    }
    catch (int e)
    {
        cout << " this array is null please create new array be calling create function :";
    }
}

template <typename X>
bool da<X>::isfull()
{
    try
    {
        if (ptr == nullptr)
            throw null;
        return lastindex == capacity - 1;
    }
    catch (int e)
    {
        cout << " this array is null please create new array be calling create function :";
    }
}

template <typename X>
void da<X>::edit(int x, X y)
{
    try
    {
        if (ptr == nullptr)
            throw null;
        else if (x < 0 || x > lastindex)
            throw invalid;
        else
            ptr[x] = y;
    }
    catch (int e)
    {
        if (e == 1)
            cout << " this array is null please create new array be calling create function :";
        else
            cout << endl
                 << " input in invalid ";
    }
}

template <typename X>
int da<X>::search(X x)
{
    try
    {
        if (ptr == nullptr)
            throw null;
        for (int i = 0; i <= lastindex; i++)
            if (ptr[i] == x)
                return i;
        return -1;
    }
    catch (int e)
    {
        cout << " this array is null please create new array be calling create function :";
    }
}

template <typename X>
void da<X>::create(int x)
{
    try
    {
        if (x < 1)
            throw invalid;

        if (ptr)
            delete[] ptr;

        capacity = x;
        lastindex = -1;
        ptr = new int[x];
    }
    catch (int e)
    {
        ptr = nullptr;
        cout << endl
             << " input in invalid ";
    }
}

template <typename X>
int da<X>::count()
{
    try
    {
        if (ptr == nullptr)
            throw null;
        return lastindex + 1;
    }
    catch (int e)
    {
        cout << " this array is null please create new array be calling create function :";
    }
}

template <typename X>
void da<X>::doublearray()
{
    capacity = 2 * capacity;
    int *temp;
    temp = new int[capacity];
    for (int i = 0; i <= lastindex; i++)
        temp[i] = ptr[i];
    delete[] ptr;
    ptr = temp;
}

template <typename X>
void da<X>::halfarray()
{
    capacity /= 2;
    int *temp;
    temp = new int[capacity];
    for (int i = 0; i <= lastindex; i++)
        temp[i] = ptr[i];
    delete[] ptr;
    ptr = temp;
}

template <typename X>
void da<X>::del(int x)
{
    try
    {
        if (ptr == nullptr)
            throw null;
        else if (x < 0 || x > lastindex)
            throw invalid;
        else
        {
            for (int i = x - 1; i < lastindex; i++)
                ptr[i] = ptr[i + 1];

            lastindex--;

            if (lastindex < capacity / 2 && capacity > 1)
                halfarray();
        }
    }
    catch (int e)
    {
        if (e == 1)
            cout << " this array is null please create new array be calling create function :";
        else
            cout << endl
                 << " input in invalid ";
    }
}

template <typename X>
void da<X>::insert(int x, X y)
{
    try
    {
        if (ptr == nullptr)
            throw null;
        else if (x < 0 || x > lastindex + 1)
            throw invalid;
        else
        {
            if (lastindex == capacity - 1)
                doublearray();

            for (int i = lastindex + 1; i > x; i--)
                ptr[i] = ptr[i - 1];

            ptr[x] = y;
            lastindex++;
        }
    }
    catch (int e)
    {
        if (e == 1)
            cout << " this array is null please create new array be calling create function :";
        else
            cout << endl
                 << " input in invalid ";
    }
}

template <typename X>
void da<X>::append(X y)
{
    try
    {
        if (ptr == nullptr)
            throw null;
        else
        {
            if (lastindex == capacity - 1)
                doublearray();
            lastindex++;
            ptr[lastindex] = y;
        }
    }
    catch (int e)
    {
        if (e == 1)
            cout << " this array is null please create new array be calling create function :";
    }
}