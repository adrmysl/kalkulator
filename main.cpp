#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    int losowa, nr_proby=0, wprowadzona;
    bool odgadniecie=false;

    cout << "Witaj, pomyslalem sobie liczbe z zakresu 1 ..  100" << endl;
    losowa=rand()%100+1;
        while(odgadniecie==false)
        {   nr_proby++;
            cout << "Zgadnij jaka to liczba " << "(to twoja "<< nr_proby << "proba) ";
            cin >> wprowadzona;
            if(losowa<wprowadzona)
            {
                cout << "To za duzo"<< endl;
            }
            else if(losowa>wprowadzona)
            {
                cout << "To za malo"<< endl;
            }
            else if(losowa==wprowadzona)
            {
                cout << "Brawo, udalo sie za "<<nr_proby<<" razem" << endl;
                odgadniecie=true;
            }
        }

    return 0;
}
