/*
C++ me class aur struct almost same hote hain.

Sirf 2 default differences hain:

Feature	struct	class
Default Access Specifier	public	private
Default Inheritance	public	private

struct Movie {
    string title;
    int year;
};

 Structure is a user-defined data type.
 Can store multiple data members.

--------------------------------------------------

2. Structure Object

Movie m;

Access members:

m.title
m.year

Rule:
Object → use (.)

--------------------------------------------------

3. Array of Structures

Movie films[3];

Access:

films[0].title
films[1].year

Rule:
Array element first, then member.

--------------------------------------------------

4. Structure as Function Argument

Pass by Value:

void printMovie(Movie movie);

✔ Copies entire structure.

Preferred:

void printMovie(const Movie& movie);

✔ No copy
✔ Faster
✔ Safer

--------------------------------------------------

5. Structure Pointer

Movie m;
Movie* ptr = &m;

Memory:

ptr ----> m

✔ Pointer stores address of structure object.

--------------------------------------------------

6. Address Operator

&m

✔ Returns address of structure object.

--------------------------------------------------

7. Dereference Operator

*ptr

✔ Returns actual object pointed by ptr.

--------------------------------------------------

8. Arrow Operator

ptr->title

Equivalent to:

(*ptr).title

Rule:

Object   → obj.member
Pointer  → ptr->member

--------------------------------------------------

9. Parentheses Rule

Correct:

(*ptr).title

Wrong:

*ptr.title

Because:

*ptr.title
=
*(ptr.title)

Operator (.) has higher precedence than (*).

--------------------------------------------------

10. Nested Structures

struct Movie {
    string title;
    int year;
};

struct Friend {
    string name;
    Movie fav;
};

Access:

f.fav.title
f.fav.year

--------------------------------------------------

11. Pointer + Nested Structure

Friend* pf = &f;

Access:

pf->fav.title
pf->fav.year

--------------------------------------------------

12. Multiple Dots Allowed

obj.a.b.c.d

Example:

student.address.city.name

✔ Valid if each member is an object.

--------------------------------------------------

13. When to Use ->

Movie* p;

p->title

✔ Left side must be a pointer.

--------------------------------------------------

14. When NOT to Use ->

Movie m;

m->title      ❌ Error

Because m is an object, not a pointer.

Correct:

m.title

--------------------------------------------------

15. Dynamic Structure Allocation

Movie* p = new Movie;

Access:

p->title = "Avatar";

Free Memory:

delete p;

--------------------------------------------------

⭐ GOLDEN RULES

Rule 1:
Object → .

obj.member

--------------------------------------------------

Rule 2:
Pointer → ->

ptr->member

--------------------------------------------------

Rule 3:

ptr->member

is always equivalent to

(*ptr).member

--------------------------------------------------

Rule 4:

Use references in functions:

const StructName& obj

instead of

StructName obj

--------------------------------------------------

Rule 5:

Nested Object:

student.address.city

Pointer + Nested Object:

ptr->address.city

*/

/*struct movies_t {
  string title;
  int year;
};

int main ()
{
  string mystr;

  movies_t amovie;
  movies_t * pmovie;
  pmovie = &amovie;

  cout << "Enter title: ";
  getline (cin, pmovie->title);
  cout << "Enter year: ";
  getline (cin, mystr);
  (stringstream) mystr >> pmovie->year;

  cout << "\nYou have entered:\n";
  cout << pmovie->title;
  cout << " (" << pmovie->year << ")\n";

  return 0;
}
  */
 /*he arrow operator (->) is a dereference operator 
 that is used exclusively with pointers to objects that
  have members. This operator serves to access the member of an object
   directly from its address*/

/*struct movies_t {
  string title;
  int year;
} films [3];

void printmovie (movies_t movie);

int main ()
{
  string mystr;
  int n;

  for (n=0; n<3; n++)
  {
    cout << "Enter title: ";
    getline (cin,films[n].title);
    cout << "Enter year: ";
    getline (cin,mystr);
    stringstream(mystr) >> films[n].year;
  }

  cout << "\nYou have entered these movies:\n";
  for (n=0; n<3; n++)
    printmovie (films[n]);
  return 0;
}

void printmovie (movies_t movie)
{
  cout << movie.title;
  cout << " (" << movie.year << ")\n";
}*/
/*struct movies_t {
  string title;
  int year;
} mine, yours;

struct product
{
    string color;
    int weight;

};


void printmovie (movies_t movie);
void printproduct (product products);

int main ()
{
  string mystr;

  mine.title = "2001 A Space Odyssey";
  mine.year = 1968;

  cout << "Enter title: ";
  getline (cin,yours.title);
  // takes the input till the enter is not pressed 

  cout << "Enter year: ";
  getline (cin,mystr);
  stringstream(mystr) >> yours.year;

  cout << "My favorite movie is:\n ";
  printmovie (mine);
  cout << "And yours is:\n ";
  printmovie (yours);

  product apple,banana;

  apple.color="Red";
  apple.weight=5;
  banana.color="Yellow";
  banana.weight=10;

  printproduct(apple);
  printproduct(banana);


  return 0;
}

void printmovie (movies_t movie)
{
  cout << movie.title;
  cout << " (" << movie.year << ")\n";
}
void printproduct (product products)
{
  cout << products.color;
  cout << " (" << products.weight << ")\n";
}
  */

// The example shows how the members of an object
// act just as regular variables. For example, 
//the member yours.year is a valid variable of type int,
// and mine.title is a valid variable of type string.
//But the objects mine and yours are also variables
// with a type (of type movies_t).

// Therefore, one of the features of data structures is the ability to refer 
//to both their members individually or to the entire structure as a whole. 
//In both cases using the same identifier: the name of the structure.

// #include<bits/stdc++.h>
// using namespace std;
// struct movies{
//     string titels;
//     int year;

// } mine , yours;// declaring a object


// int main(){
//     mine.titels="Dhurandar";
//     mine.year=2026;

//     yours.titels="Avengers";
//     yours.year=2026;

//     cout<<mine.titels<<endl;
//     cout<<mine.year<<endl;
//     cout<<yours.titels<<endl;
//     cout<<yours.year<<endl;



//     return 0;

// }