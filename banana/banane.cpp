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

int b1()
{
    int x = k;
    for(int i = 1; i <= 3; i++)
        x = x - (x - 1) / 3;
    x = ((x - 1) / 3) - 1;
    return x;
}

int b2(int y)
{
    int x;
    x = (y + 1) * 3 + 1;
    for(int i = 1; i <= 3; i++)
        x = (3 * x) / 2;
    return x;
}

int main(){
    input();
    cout << "B1 : " << b1() << endl;
    cout << "B2 : " << b2(15) + b2(31)<<endl;
    return 0;
}