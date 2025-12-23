// question 10 : Manager Executive
#include <iostream>
using namespace std;

class manager {
protected:
    string name;
    int salary;
public:
    void get() {
        cin>>name>>salary;
    }
};

class executive : public manager {
    int bonus;
public:
    void get() {
        manager::get();
        cin>>bonus;
    }
    void show() {
        cout<<name<<" "<<salary<<" "<<bonus;
    }
};

int main() {
    executive e;
    e.get();
    e.show();
    return 0;
}
