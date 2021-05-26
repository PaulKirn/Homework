#include <iostream>
#include <new>
#include <cassert> 

using namespace std;

// a class that implements the stack as a dynamic array
template <typename T>
class Stack
{
private:
    T* stack; // dynamic array pointer to stack
    int count; // top of stack - number of elements of type T on the stack

public:
    // constructor
    Stack()
    {
        stack = nullptr;
        count = 0; // the number of elements on the stack is determined by the value of count
    }

    // push an item on the stack
    void push(T item)
    {
        T* tmp; // temporary pointer

        // if no memory is allocated
        try {
            
            tmp = stack;
            stack = new T[count + 1];

            // increase the number of elements on the stack by 1
            count++;

            // copy data from memory pointed to by tmp into memory,
            // which stack points to
            for (int i = 0; i < count - 1; i++)
                stack[i] = tmp[i];

            // add the last item
            stack[count - 1] = item;

            // free stack memory, tmp pointer
            if (count > 1)
                delete[] tmp;
            
            
        }
        catch (bad_alloc e)
        {
            // if memory is not allocated
            cout << e.what() << endl;
        }
    }

    // pop an item from the stack
    T pop()
    {
        assert(count >= 0 && count <= 4);
        count--;
        return stack[count];
    }

    // View the item at the top of the stack
    T Head()
    {
        assert(count >= 0 && count <= 4);
        return stack[count - 1];
    }

    // destructor
    ~Stack()
    {
        if (count > 0)
            delete[] stack;
    }

    // number of items in the stack
    int Count()
    {
        return count;
    }



    // output the stack to the console
    void Print()
    {
        T* p; // temporary pointer
 
        p = stack;

        cout << "Stack: " << endl;
        if (count == 0)
            cout << "is empty." << endl;

        for (int i = 0; i < count; i++)
        {
            cout << "Item[" << i << "] = " << *p << endl;
            p++; // scroll pointer to next item
        }
        cout << endl;
    }
};

int main()
{
  
    Stack <int> st1;

    st1.Print();

    st1.push(33);
    st1.push(7);
    st1.push(26);
    st1.push(34);

    st1.Print();

    cout << "Count: " << st1.Count() << endl << '\n';

    //-1 item
    int t;
    t = st1.pop();
    cout << "Delete item: " << t << endl;
    st1.Print();
    cout << "Head: " << st1.Head() << endl;
    cout << "Count: " << st1.Count() << endl << '\n';

    // -2 items
    int y = st1.pop();
    int u = st1.pop();
    cout << "Delete item: " << y << " and " << u << endl;
    st1.Print();
    cout << "Head: " << st1.Head() << endl;
    cout << "Count: " << st1.Count() << endl << '\n';

}