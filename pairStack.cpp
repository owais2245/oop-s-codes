//Question 11:Pair Stack(push pop)

#include <iostream>
using namespace std;

struct Pair {
    int x,y;
};

class Stack {
    int a[10], top;
public:
    Stack() { top=-1; }
    void push(int v) { a[++top]=v; }
    int pop() { return a[top--]; }
};

class PairStack : public Stack {
public:
    void push(Pair p) {
        Stack::push(p.x);
        Stack::push(p.y);
    }
    Pair pop() {
        Pair p;
        p.y=Stack::pop();
        p.x=Stack::pop();
        return p;
    }
};

int main() {
    PairStack ps;
    Pair p={5,10};

    ps.push(p);
    p=ps.pop();

    cout<<p.x<<" "<<p.y;
    return 0;
}
