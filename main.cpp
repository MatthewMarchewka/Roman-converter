#include <iostream>

using namespace std;

void na_rzymski (char tab[], int liczba)
{
    int i=0;

        //liczby z 3900-900

        int dodatkowa=0;
        do{
        if(dodatkowa!=3){
            if(liczba>=1000){
                 tab[i++] = 'M';
                liczba= liczba-1000;
                dodatkowa++;
            };
        };
        }while(!(dodatkowa>=3 || liczba<1000) );

        if(liczba>=1900 && liczba<2000){
             tab[i++]= 'C';
             tab[i++]= 'M';
            liczba= liczba-1900;
        }


        //liczby od 400 do 500
            if(liczba>=500){
                 tab[i++] = 'D';
                liczba= liczba-500;
                dodatkowa++;
            };


        if(liczba>=400 && liczba>500)
        {
             tab[i++]= 'C';
             tab[i++]= 'D';
            liczba= liczba-490;
        }
        //liczby od 90 do 300
        dodatkowa= 0;
         do{
        if(dodatkowa!=3){
            if(liczba>=100){
                 tab[i++]= 'C';
                liczba= liczba-100;
                dodatkowa++;
            };
        };
        }while(!(dodatkowa>=3 || liczba<100) );

        if(liczba>=90 && liczba<100)
        {
             tab[i++]= 'X';
             tab[i++]= 'C';
            liczba= liczba-90;
        };

        //liczby od 40 do 50
            if(liczba>50){
                 tab[i++] = 'L';
                liczba= liczba-50;
                dodatkowa++;
            };

        if(liczba>=40 && liczba<50)
        {
             tab[i++]= 'X';
             tab[i++]= 'L';
            liczba= liczba-40;
        }
        //liczba od 9 do 39
        dodatkowa= 0;
        do{
            if(liczba>=10){
                 tab[i++]= 'X';
                liczba= liczba-10;
                dodatkowa++;
            };
        }while(!(dodatkowa>=3 || liczba<10) );

        if(liczba==9)
        {
             tab[i++]= 'I';
             tab[i++]= 'X';
            liczba= liczba-9;
        };
        //liczba od 4 do 5

        if(liczba>=5 && liczba<=8)
        {
            tab[i++]= 'V';
            liczba= liczba-5;
        }

        if(liczba==4)
        {
            tab[i++]= 'I';
            tab[i++]= 'V';
            liczba= liczba-4;
        }


        for(liczba;liczba!=0;liczba--)
        {
            tab[i++]= 'I';
        };

}




int main()
{
   char tablica[120] = {0};
   int liczba;
   cin >> liczba;

   na_rzymski( tablica, liczba);

   for (int i=0; tablica[i]!=0;i++)
            cout << tablica[i];



    cout << endl;

	system("pause");
}
