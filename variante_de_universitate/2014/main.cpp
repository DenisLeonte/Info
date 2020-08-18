#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class B{
public:
    int b;
    void printb(){cout<<b<<endl;};
};

class D : B{
public:
    string d;
    void printd(){cout<<b<<d<<endl;};
};

struct nod{
    B b;
    D d;
    nod *next;
}*first,*last;

void list(){
    ifstream in("2014.txt");
    bool a = true;
    nod *nou;
    nou = new nod;
    if (a){
        int aux;
        in>>aux;
        nou->b.b = aux;
        a = -a;
    }
    else{
        int aux;
        string aux1;
        in>>aux>>aux1;
        nou->d.b = aux;
        nou->d.d = aux1;
        a = -a;
    }
    nou->next = NULL;
    if(first == NULL){
        first = last = nou;
    }
    else{
        last->next = nou;
        last = nou;
    }
}

int main(){

}