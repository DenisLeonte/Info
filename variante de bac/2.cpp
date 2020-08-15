#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<vector<string>> hashTable;
    string aux;
    char text[100];
    int n,nMax = 0;
    cin>>n>>text;
    for(int i = 0; i<=100; i++)
    {
        if(text[i] != ' ')
            aux.push_back(text[i]);
        else
        {
            int k;
            k = aux.size();
            hashTable[k].push_back(aux);
            if(k > nMax)
                nMax = k;
            aux.erase();
        }
    }
    for(int i = n; i <= nMax; i++)
    {
        for(auto &it:hashTable[i])
        {
            cout<<it<<endl;
        }
    }
    for(int i = 1; i<=n; i++)
    {
        for(auto &it:hashTable[i])
        {
            cout<<it<<endl;
        }
    }
    return 0;
}