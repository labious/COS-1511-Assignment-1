/* Draw a series of variable diagrams for the program below using the conventions of the Study Guide. Assume
that the following input is given: 2010 t
1 #include <iostream>
2 #include <string>
3 using namespace std;
4 int
main() 5
{
6 int year; char code;
7 bool book = true; float discount = 0.20;
8 cin >> year >> code;
9 switch (year)
10 {
11 case 2008: case 2009:
12 if (code == 'c')
13 if (!book)
14 discount += 0.20;
15 break;
16 case 2010:
17 if (book)
18 if (code == 't')
19 {
20 book = false;
21 code = 'g';
22 }
23 case 2011:
24 if (discount > 0.20 || code == 'g')
25 discount = 0.15;
26 else
27 discount += 0.10;
28 default:
29 discount = 0.25;
30 code = 'b';
31 book =
true; 32 }
33 discount = 0.35;
34 cout << year << " " << code << " " << book << " "
<< discount << endl;
35 return 0;
36 } */