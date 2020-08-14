#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

vector<int> b;
int n, k;

void input()
{
    ifstream in("banane.txt");
    in>>n>>k;
    for(int i = 0; i < n; i++)
    {
        int aux;
        in>>aux;
        b.push_back(aux);
    }
    cout<<"Citire completa"<<endl;
}

void b1()
{
    int x = k;
    x = x - (x - 1) / 3;
    x = x - (x - 1) / 3;
    x = x - (x - 1) / 3;
    x = ((x - 1) / 3) - 1;
    cout << x << endl;;
}

int main(){
    input();
    b1();
    return 0;
}