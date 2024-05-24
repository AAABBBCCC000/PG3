#include <cstdio>
#include <iostream>
#include <list>
#include <cstring>

using namespace std;

int main()
{
    list<const char*> rosen = 
    { 
        "Komagome","Tabata","Nippori","Uguisudani","Ueno",
        "Okachimachi","Akihabara","Kanda","Tokyo","Yurakucho",
        "Shimbashi","Hamamatsucho","Tamachi","Shinagawa","Osaki",
        "Gotanda","Meguro","Ebisu","Shibuya","Harajuku",
        "Yoyogi","Shinjuku","Shin-Okubo","Takadanobaba","Mejiro",
        "Ikebukuro","Otsuka","Sugamo"
    };

    cout << "1970" << endl;

    for (list<const char*>::iterator itr = rosen.begin(); itr != rosen.end(); itr++)
    {
        cout << *itr << endl;

    }

    cout << endl;

    for (list<const char*>::iterator itr = rosen.begin(); itr != rosen.end(); itr++)
    {
        if (strcmp(*itr, "Nippori") == 0)
        {
            itr = rosen.insert(itr, "Nishi-Nippori");
            itr++;
        }
    }

    cout << "2019" << endl;

    for (list<const char*>::iterator itr = rosen.begin(); itr != rosen.end(); itr++)
    {
        cout << *itr << endl;
    }

    cout << endl;

    for (list<const char*>::iterator itr = rosen.begin(); itr != rosen.end(); itr++)
    {
        if (strcmp(*itr, "Shinagawa") == 0)
        {
            itr = rosen.insert(itr, "Takanawa Gateway");
            itr++;
        }
    }

    cout << "2022" << endl;

    for (list<const char*>::iterator itr = rosen.begin(); itr != rosen.end(); itr++)
    {
        cout << *itr << endl;
    }

    cout << endl;

    return 0;
}