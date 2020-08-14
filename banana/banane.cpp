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

int main(){
    input();
    return 0;
}