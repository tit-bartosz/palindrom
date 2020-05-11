#include <iostream>
#include <fstream>

using namespace std;
fstream odczyt;
int c;
int i=0;
string a;
bool sprawdzpali (string s1) //funkcja sprawdzaj¹ca czy to jest palingram.
{
    int dl=s1.size();
    for (int i=0; i<dl/2; i++)
        if (s1[i]!=s1[dl-i-1])
            return false;
    return true;

}

int main()
{
    odczyt.open("dane.txt",ios::in);

    while(odczyt.good())
    {
        odczyt >> a;
        if(sprawdzpali(a)==true)
        {

            c++;
            i++;
            cout << i <<". " << a << endl;
        }
    }
    cout <<"Jest tyle palindromow: "  <<c;
    odczyt.close();
    return 0;
}
