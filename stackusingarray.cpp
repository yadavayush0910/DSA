#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

class Stack {
public:
    int *arr;
    int top;
    int size;
    
    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element) {
        if (top < size - 1) {
            top++;
            arr[top] = element;
        } else {
            cout << "Stack overflow" << endl;
        }
    }

    int pop() {
        if (top >= 0) {
            int popped = arr[top];
            top--;
            return popped;
        } else {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    int peek() {
        if (top >= 0) {
            return arr[top];
        } else {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack st(5);
    st.push(33);
    st.push(22);
    st.push(11);
    cout << st.peek() << endl;
    return 0;
}
