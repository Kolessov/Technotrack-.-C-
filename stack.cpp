#include <iostream>
#include <math.h>


using namespace std;


template <typename T>

class Stack {

private:

    int* arr;// pointer on first element of array
    size_t capacity;
    size_t size;// current quantities of elements in stack( type size_t is similar with unsigned int)

public:

    Stack(int size,int* arr)// it is constructor.
    {
    this->capacity = 1.5 * size;// we make it, that would don't make copy of array every times.
    arr = new int[capacity];
    }

    Stack(const Stack &first_stack)
    {
      this->capacity = capacity;
      this->size = size;
      arr = new int[first_stack.capacity]  ;
      for(int i = 0; i < first_stack.size;i++){
        arr[i] = first_stack.arr[i];
      }
    }

    ~Stack()// it is destructor.
    {
    delete [] arr;
    }

    void push(const T & number); //  add element on high of stack. We use link here, because won't be copying.

    void pop(); // we remove last element from stack.

    size_t get_size() ; //  return simply size of array

};

// now we write with the help  of template our methods.


template <typename T>

size_t Stack<T>::get_size()
{
    return size;// it is so easy
}

template <typename T>

void Stack<T>::push(const T & element) {

    if(capacity == size)
    {
        int* arr_temp = new int[(int)(1.5 * size)];
        for(int i = 0; i < size  ;i++)
        {
            arr_temp[i] = arr[i];
        }
        delete [] arr;//???
        arr = arr_temp;
        arr[size] = element;
        size++;
    }
    else
    {
        arr[size] = element;
        size++;
    }
}

template <typename T>

void Stack<T>::pop() {
    if (size == 0)
    {
        return;
    }
    else
    {
        size--;

    }

}
int main()
{

    return 0;

}








