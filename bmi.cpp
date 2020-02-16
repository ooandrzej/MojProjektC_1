#include <iostream>
#include <cstring>      //strlen
#include <algorithm>    //replace
#include <iomanip>      //cout.setf(ios::fixed); cout.precision(2);
#include <limits>       //std::numeric_limits

using namespace std;

int main()
{
    double waga { 0 }, bmi { 0 }, liczba { 0 };
    string wzrost;
   
    cout << "Podaj wage := ";
    while( !( cin >> waga ) )
    {
        cout << "Wprowadzony znak nie jest liczba" << endl;
        cout << "Prosze podac liczbe : ";
        //czyscimy strumien wejsciowy std::cin
        std::cin.clear();
        std::cin.ignore( std::numeric_limits < std::streamsize >::max(), '\n' );
        continue;
    }
    //czyscimy strumien wejsciowy std::cin
    std::cin.clear();
    std::cin.ignore( std::numeric_limits < std::streamsize >::max(), '\n' );
    cout << "Podaj wzrost := ";
    getline( cin, wzrost ); //o.k.
   
    //zamiana przecinka (comma) na kropke (dot)
    replace( wzrost.begin(), wzrost.end(), ',', '.' );
   
    //szukamy kropki
    size_t found = wzrost.find( '.' );
   
    if( found == true )
    {
        //konwersja lancucha znakow do zmiennej typu double, float
        liczba = atof( wzrost.c_str() );
        //cout << "dot found" << endl; //only for test
        bmi = waga /( liczba * liczba );
    }
    else
    {
        //konwersja lancucha znakow do zmiennej typu double, float
        liczba = atof( wzrost.c_str() );
        //cout << "dot not found" << endl; //only for test
        bmi = waga /(( liczba * liczba ) / 10000 );
    }
   
    cout << endl;
    cout << "Your Body Mass Index (BMI) := " << fixed << setprecision( 2 ) << bmi << endl;
   
    if( bmi < 18.5 )
         cout << "Niedowaga.\n";
    else if( bmi >= 18.5 && bmi <= 25 )
         cout << "Prawidlowa masa ciala\n";
    else if( bmi >= 25 && bmi <= 29.99 )
         cout << "Nadwaga\n";
    else if( bmi > 30 )
         cout << "Otylosc.\n";
   
    cout << endl;
    getchar();
    return 0;
}
