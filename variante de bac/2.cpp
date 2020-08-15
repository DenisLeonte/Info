#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<vector<string>> hashTable;
    string aux;
    char text[100];
    int n,nMax = 0;
    cin.getline(text, 100);
    cin >> n;
    for(int i = 0; i<=100; i++)
    {
        if(text[i] == ' ')    
        {
                int k;
                k = aux.size();
                hashTable[k].push_back(aux);
                if (k > nMax)
                    nMax = k;
                aux.erase();
        }
        else if (text[i + 1] == '\0')
            break;
        else
            aux.push_back(text[i]);
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