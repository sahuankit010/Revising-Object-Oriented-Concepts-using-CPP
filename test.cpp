#include <iostream>
#include <string>
using namespace std;

class test{

private:
    int id;
    string name;
public:
    test(){}
    test(int i,string n): id(i), name(n){}

//    test(const test &t){ // copy constructor
//        this->id = t.id;
//        this->name = t.name;
//    }

    void setID(int i){
        this->id = i;
    }
    void setName(string n){
        this->name = n;
    }

    int getId(){
        return this->id;
    }

    string getName(){
        return this->name;
    }

    void printData();

    ~test(){
        cout<<"test "<<this<<" deleted\n";
    }
};

void test::printData(){
    cout<<this->id<< " "<< this->name<<endl;
}

void fun(test *t){
    t->setID(31);
}

int main() {

    test t1(1, "Ankit");
    fun(&t1);
    t1.printData();


    test t2;
    t2.setID(2);
    t2.setName("Vinod");
    cout<<&t2<<endl;
    t2.printData();

    test *t3 = new test(3, "Reddy");

    cout<<&t3;

    t3->printData();

    test t4 = t2;
    t2.setName("Changed Name");
    t2.printData();
    t4.printData();


    return 0;
}