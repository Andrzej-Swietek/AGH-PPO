// To jest przykład instrukcji do ćwiczeń - kompletna instrukcja 
// zawsze będzie zawarta w tym miejscu, tj. w pliku main.cpp
// Przykład polecenia 
// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal się
// a wynik jego dzialania byl taki sam jak podany na końcu tego pliku
//
// Pliku main.cpp, nie wolno modyfikowac.
//
// Ostateczny program powinien byc przyjazny dla programisty
// (miec czytelny i dobrze napisany kod)
//
// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani żadnych innych materialow (w tym własnych wczesniej
// przygotowanych plikow oprócz makefile, chyba że polecenie stanowi inaczej)
//
//
// Kody źródłowe muszą znajdować się w katalogu do którego nikt oprócz
// właściciela nie ma praw dostępu.
// Rozwiazanie (czyli dodane pliki i main.cpp należy wgrać do UPEL 
// jako archiwum tar.gz o strukturze takiej jak w zadaniu na UPeL.
// UWAGA:
// * archiwum powinno zawierać katalog z zadaniem lab05/
// * katalog z zadaniem powinien zawierać podkatalog include/
//   w którym muszą znajdować się wszystkie niezbędne pliki nagłówkowe
// * katalog z zadaniem powinien zawierać podkatalog src/
//   w którym muszą znajdować się wszystkie niezbędne pliki z kodem źródłowym
// * katalog z zadaniem powinien zawierać podkatalog build/ 
//   w którym powinien znajdować się tylko i wyłącznie plik Makefile
// * tworzenie archiwum: tar -czvf nazwa.tar.gz zad/
//   np. tar -czvf lab01.tar.gz lab01/
// * rozpakowanie archiwum: tar -xvf nazwa.tar
// * wszystkie funkcje w plikach *.h powinny być okomentowane wg formatu wprowadzonego 
// * na wcześniejszych zajęciach
// * kazda klasa powinna byc zdefiniowana w oddzielnym pliku h (deklaracje funkcji, klas i metod) i cpp (definicje)
// * poziomy dostepu do skladnikow klas powinny byc dobrane zgodnie z zasadami programowania obiektowego (hermetyzacja/ekapsulacja)  
// * ! w wersji na najwyzsza liczbe punktow w implementowanych klasach mozna uzywac tylko tablic dynamicznych 



#include <iostream>
#include "Song.h"
#include "Album.h"
using namespace std;


int main(int argc, char** argv) 
{
	Song p1;
	p1.Presentation();
	p1.SetName("La la la");
	p1.Presentation();
	Song p2("Hej ho");
	p2.Presentation();
	p2.SetX(4);
	p2.SetY(21.3); 
	p2.Presentation();
	Song p3("Trala lala", 7.1, 2.5);
	p3.Presentation();
	Song p4("Oda do niedogotowanej zupy", 1.9, 11.2);
	p4.Presentation();
	Song p5;
	p5 = p3;
	p5.SetName("Hymn do ogorka");
	p5.SetY(52.7);
	p5.Presentation();
	Song p6;
	p6 = p5;
	p6.SetName("Opera warzywna");
	p6.SetX(17);
	p6.Presentation();
	
	Album poly1; 
	poly1.Presentation();
	poly1.SetName("Piosenki budowlane");
	poly1.Presentation();
	Album poly2("Ciemna strona jasnosci"); 
	poly2.Presentation();
	Album poly3("Rolnicze przyspiewki", p1, p2, p3); 
	poly3.Presentation();
	Album poly4("Na skraju krawedzi", p1, p2, p3, p4); 
	poly4.Presentation();
	
	Song points[6]; 
	points[0] = p1;
	points[1] = p2;
	points[2] = p3;
	points[3] = p4;
	points[4] = p5;
	points[5] = p6;

	Album * pPoly5 = new Album("Zestaw przyspiewek toastowych", 6, points); 
	pPoly5->Presentation();
	
	Song * pSongs = pPoly5->GetSongs();
	
	Album poly6("Ballady ze stodoly", 6, pSongs); 
	poly6.Presentation();

	poly1.SetNewSongs(6, pSongs);
	poly1.SetName("Twoje nogi zielone, zielone ...");
	poly1.Presentation();
	
	delete pPoly5;
	
	poly6.Presentation();
	poly1.Presentation();
	
	poly3.SetSong(1, "Bum bum bum", 45.1, 11.99);
	poly3.Presentation();
	
	poly4.SetSong(0, "Basniowe gumowce", 23, 32.4);
	poly4.Presentation();
	poly3.SetSong(4, "Dziewczyna ze stolowki", 13, -4.876);
	poly3.Presentation();


	return 0;
}

/** Wynik dzialania programu:

Wywolanie konstruktora Song...

### Prezentacja punktu ###
Nazwa:
Wspolrzedna X: 0
Wspolrzedna Y: 0

### Prezentacja punktu ###
Nazwa: A
Wspolrzedna X: 0
Wspolrzedna Y: 0

Wywolanie konstruktora Song...

### Prezentacja punktu ###
Nazwa: B
Wspolrzedna X: 0
Wspolrzedna Y: 0

### Prezentacja punktu ###
Nazwa: B
Wspolrzedna X: 4
Wspolrzedna Y: 21.3

Wywolanie konstruktora Song...

### Prezentacja punktu ###
Nazwa: C
Wspolrzedna X: 7.1
Wspolrzedna Y: 2.5

Wywolanie konstruktora Song...

### Prezentacja punktu ###
Nazwa: D
Wspolrzedna X: 1.9
Wspolrzedna Y: 11.2

Wywolanie konstruktora Song...

### Prezentacja punktu ###
Nazwa: E
Wspolrzedna X: 7.1
Wspolrzedna Y: 52.7

Wywolanie konstruktora Song...

### Prezentacja punktu ###
Nazwa: F
Wspolrzedna X: 17
Wspolrzedna Y: 52.7

Wywolanie konstruktora Album...

### Prezentacja wielokata ###
Nazwa:
Liczba wierzcholkow: 0

### Prezentacja wielokata ###
Nazwa: Zerokat
Liczba wierzcholkow: 0

Wywolanie konstruktora Album...

### Prezentacja wielokata ###
Nazwa: Nastepny zerokat
Liczba wierzcholkow: 0

Wywolanie konstruktora Album...

Wywolanie konstruktora Song...

Wywolanie konstruktora Song...

Wywolanie konstruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

### Prezentacja wielokata ###
Nazwa: Trojkat
Liczba wierzcholkow: 3
Wierzcholek - nazwa: A, X = 0, Y = 0
Wierzcholek - nazwa: B, X = 4, Y = 21.3
Wierzcholek - nazwa: C, X = 7.1, Y = 2.5

Wywolanie konstruktora Album...

Wywolanie konstruktora Song...

Wywolanie konstruktora Song...

Wywolanie konstruktora Song...

Wywolanie konstruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

### Prezentacja wielokata ###
Nazwa: Czworokat
Liczba wierzcholkow: 4
Wierzcholek - nazwa: A, X = 0, Y = 0
Wierzcholek - nazwa: B, X = 4, Y = 21.3
Wierzcholek - nazwa: C, X = 7.1, Y = 2.5
Wierzcholek - nazwa: D, X = 1.9, Y = 11.2

Wywolanie konstruktora Song...

Wywolanie konstruktora Song...

Wywolanie konstruktora Song...

Wywolanie konstruktora Song...

Wywolanie konstruktora Song...

Wywolanie konstruktora Song...

Wywolanie konstruktora Album...

Wywolanie konstruktora Song...

Wywolanie konstruktora Song...

Wywolanie konstruktora Song...

Wywolanie konstruktora Song...

Wywolanie konstruktora Song...

Wywolanie konstruktora Song...

### Prezentacja wielokata ###
Nazwa: Szesciokat
Liczba wierzcholkow: 6
Wierzcholek - nazwa: A, X = 0, Y = 0
Wierzcholek - nazwa: B, X = 4, Y = 21.3
Wierzcholek - nazwa: C, X = 7.1, Y = 2.5
Wierzcholek - nazwa: D, X = 1.9, Y = 11.2
Wierzcholek - nazwa: E, X = 7.1, Y = 52.7
Wierzcholek - nazwa: F, X = 17, Y = 52.7

Wywolanie konstruktora Album...

Wywolanie konstruktora Song...

Wywolanie konstruktora Song...

Wywolanie konstruktora Song...

Wywolanie konstruktora Song...

Wywolanie konstruktora Song...

Wywolanie konstruktora Song...

### Prezentacja wielokata ###
Nazwa: Nastepny szeciokat
Liczba wierzcholkow: 6
Wierzcholek - nazwa: A, X = 0, Y = 0
Wierzcholek - nazwa: B, X = 4, Y = 21.3
Wierzcholek - nazwa: C, X = 7.1, Y = 2.5
Wierzcholek - nazwa: D, X = 1.9, Y = 11.2
Wierzcholek - nazwa: E, X = 7.1, Y = 52.7
Wierzcholek - nazwa: F, X = 17, Y = 52.7

Wywolanie konstruktora Song...

Wywolanie konstruktora Song...

Wywolanie konstruktora Song...

Wywolanie konstruktora Song...

Wywolanie konstruktora Song...

Wywolanie konstruktora Song...

### Prezentacja wielokata ###
Nazwa: Oryginalny zerokat
Liczba wierzcholkow: 6
Wierzcholek - nazwa: A, X = 0, Y = 0
Wierzcholek - nazwa: B, X = 4, Y = 21.3
Wierzcholek - nazwa: C, X = 7.1, Y = 2.5
Wierzcholek - nazwa: D, X = 1.9, Y = 11.2
Wierzcholek - nazwa: E, X = 7.1, Y = 52.7
Wierzcholek - nazwa: F, X = 17, Y = 52.7

Wywolanie destruktora Album...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

### Prezentacja wielokata ###
Nazwa: Nastepny szeciokat
Liczba wierzcholkow: 6
Wierzcholek - nazwa: A, X = 0, Y = 0
Wierzcholek - nazwa: B, X = 4, Y = 21.3
Wierzcholek - nazwa: C, X = 7.1, Y = 2.5
Wierzcholek - nazwa: D, X = 1.9, Y = 11.2
Wierzcholek - nazwa: E, X = 7.1, Y = 52.7
Wierzcholek - nazwa: F, X = 17, Y = 52.7

### Prezentacja wielokata ###
Nazwa: Oryginalny zerokat
Liczba wierzcholkow: 6
Wierzcholek - nazwa: A, X = 0, Y = 0
Wierzcholek - nazwa: B, X = 4, Y = 21.3
Wierzcholek - nazwa: C, X = 7.1, Y = 2.5
Wierzcholek - nazwa: D, X = 1.9, Y = 11.2
Wierzcholek - nazwa: E, X = 7.1, Y = 52.7
Wierzcholek - nazwa: F, X = 17, Y = 52.7

### Prezentacja wielokata ###
Nazwa: Trojkat
Liczba wierzcholkow: 3
Wierzcholek - nazwa: G, X = 45.1, Y = 11.99
Wierzcholek - nazwa: B, X = 4, Y = 21.3
Wierzcholek - nazwa: C, X = 7.1, Y = 2.5

### Prezentacja wielokata ###
Nazwa: Czworokat
Liczba wierzcholkow: 4
Wierzcholek - nazwa: A, X = 0, Y = 0
Wierzcholek - nazwa: B, X = 4, Y = 21.3
Wierzcholek - nazwa: C, X = 7.1, Y = 2.5
Wierzcholek - nazwa: D, X = 1.9, Y = 11.2

### Prezentacja wielokata ###
Nazwa: Trojkat
Liczba wierzcholkow: 3
Wierzcholek - nazwa: G, X = 45.1, Y = 11.99
Wierzcholek - nazwa: B, X = 4, Y = 21.3
Wierzcholek - nazwa: C, X = 7.1, Y = 2.5

Wywolanie destruktora Album...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Album...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Album...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Album...

Wywolanie destruktora Album...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Song...

Wywolanie destruktora Song...
*/
