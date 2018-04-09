#include <iostream>
#include "MEGAERROR.h"


using namespace std;

enum code_of_error {dimension_in_addition = 7};

template<typename T>
class VectorND
{

private:

    T *data;// we use type of T , next i will use templates
    int capacity_;// it's capacity of dynamic array

public:

    int Ok();
    VectorND() = delete;
    VectorND(int user_capacity)
    {

        capacity_ = user_capacity;

        data = new T[capacity_];

         if(!Ok())
        {
            std :: string error_message = "Vector have to be normal";
            Megaerror err(7,__LINE__,error_message,__PRETTY_FUNCTION__,__FILE__,err);
            throw err;

        }

    }

    VectorND(const VectorND &vectra_1)
    {
        this->capacity_= vectra_1.capacity_;
        data = new T[capacity_];
        for(int i = 0;i < capacity_;i++)
        {
            data[i] = vectra_1[i];
        }
    }

    ~VectorND()
    {
        delete [] data;
    }

    bool operator ==(const VectorND &vectra);
    VectorND operator +(const VectorND &vectra);
    VectorND operator -(const VectorND &vectra);
    T operator *(const VectorND &vectra);
    //friend VectorND operator*(const VectorND<T> &vectra,T &a);
    T operator[](int a) const;
    T& operator[](int a);



};



template<typename T>
int VectorND<T> :: Ok()
{
    if(capacity_ > 0 && data != nullptr)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

template<typename T>
bool VectorND<T>::operator ==(const VectorND<T> &vectra)
{
    if(capacity_ != vectra.capacity_){
        return 0;
    }
    else
    {
        for(int i = 0; i < capacity_;i++)
        {
            if(data[i]!= vectra[i]){
                return 0;
            }


        }
        return 1;

    }
}

template <typename T>
VectorND<T> VectorND<T>::operator +(const VectorND<T> &vectra)
{
    if(capacity_!=vectra.capacity_)
    {
        std :: string error_message = "Vector have to be normal";
        Megaerror err(7,__LINE__,error_message,__PRETTY_FUNCTION__,__FILE__,err);
        throw err;


    }
    else
    {
        VectorND<T> vectorok(vectra);
        for(int i = 0; i < capacity_;i++)
        {
            vectorok[i] += data[i];

        }
        return vectorok;


    }
}


template<typename T>
T VectorND<T> :: operator[](int j) const
{
    return data[j];
}
template<typename T>
T& VectorND<T> :: operator[](int j)
{
    return data[j];
}

template<typename T>
T VectorND<T> :: operator*(const VectorND<T>& vectra)
{
    if(capacity_ != vectra.capacity_)
    {
        std :: string error_message = "Vector have to be normal";
        Megaerror err(7,__LINE__,error_message,__PRETTY_FUNCTION__,__FILE__,err);
        throw err;


    }
    else
    {
        VectorND<T> vectorishka(vectra);
        for(int i = 0; i < capacity_;i++)
        {
            vectorishka[i] *= data[i];
        }
        return vectorishka;

    }

}


#include <iostream>
int main(){
    VectorND<int> V (5);
    V[4] = 6;
    V[3] = 2;
    V[2] = 0;
    V[1] = 9;
    V[0] = 8;
    for(int i = 0; i < 5; i++)
        std::cout << V[i] << " ";
    std::cout << std::endl;
    VectorND<int> Ve (5);
    Ve[4] = 2;
    Ve[3] = 1;
    Ve[2] = 3;
    Ve[1] = 5;
    Ve[0] = 9;
    for(int i = 0;i < 5;i++)
        std::cout << V[i] + Ve[i]<<" ";
    std::cout << std::endl;
    for(int i = 0;i < 5;i++)
        std::cout << V[i]*Ve[i]<<" ";
    std::cout << std::endl;


    return 0;

}
