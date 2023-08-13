//
// Created by Ankit Sahu on 8/13/23.
//

#include<bits/stdc++.h>

using namespace std;

class Geeks {

private:
    string geekName;
    int rollNo;

public:
    Geeks(){
        this->geekName = "Ankit";
        this->rollNo = 23;
    }
    Geeks(string name, int roll){
        this->geekName = name;
        this->rollNo = roll;
    }

    void setGeekName(string name){
        this->geekName = name;
    }

    void setRollNo(int roll){
        this->rollNo = roll;
    }

    string getGeekName(){
        return this->geekName;
    }

    int getRollNo(){
        return this->rollNo;
    }
};

int main(){

    Geeks gk1;

    Geeks gk2("Rohin", 25);

    Geeks gk3;
    gk3.setGeekName("Sarang");
    gk3.setRollNo(26);

    cout<<gk1.getGeekName()<<" "<<gk1.getRollNo()<<endl;
    cout<<gk2.getGeekName()<<" "<<gk2.getRollNo()<<endl;
    cout<<gk3.getGeekName()<<" "<<gk3.getRollNo()<<endl;
    return 0;
}

