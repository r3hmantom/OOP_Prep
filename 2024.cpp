#include <iostream>
#include <string>
using namespace std;

class Holiday
{
private:
	string Name;
	int Day;
	string Month;

public:
	Holiday() {
		Name = "NULL";
		Day = 0;
		Month = "NULL";
	}

	Holiday(string& _Name, int _Day, string& _Month) : Name(_Name), Day(_Day), Month(_Month) {}

	Holiday(const Holiday& rhs)
	{
		this->Day = rhs.Day;
		this->Name = rhs.Name;
		this->Month = rhs.Month;
	}


	string getName() { return Name; };
	string getMonth() { return Month; };
	int getDay() { return Day; };

	void setName(string s) { Name = s; };
	void setMonth(string s) { Month = s; };
	void setDay(int d) { Day = d; };


};


double avgDate(Holiday arr[], int size) {
	double avg = 0;

	for (int i = 0; i < size; i++)
	{
		avg += arr->getDay();
	}

	return avg;
}

int main() {


	return 0;
}






//// Practice Question
//#include <iostream>
//using namespace std;
//
//template <typename T>
//void AddNewItem(T**& _Array, T* _NewItem)
//{
//	int size = 0;
//	for (int i = 0; _Array[i] != nullptr; i++)
//		size++;
//
//	size += 1;
//
//	T** _NewArray = new T * [size + 1];
//
//
//
//	for (int i = 0; i < size - 1; i++)
//		_NewArray[i] = _Array[i];
//
//	_NewArray[size - 1] = _NewItem;
//
//	_NewArray[size] = nullptr;
//
//	delete[] _Array;
//
//	_Array = _NewArray;
//}
//char* getStringFromBuffer(const char* str)
//{
//	int len = 0;
//	for (int i = 0; str[i] != '\0'; i++)
//		len++;
//
//	char* result = new char[len + 1];
//
//	for (int i = 0; i < len; i++)
//		result[i] = str[i];
//
//	result[len] = '\0';
//
//	return result;
//}
//
//
//class Book;
//class Author;
//class Publisher;
//
//
//class Publisher {
//private:
//	char* name;
//	char* location;
//	int numBooks;
//	Book** books;
//
//public:
//	Publisher(const char* _name, const char* _location);
//	~Publisher();
//
//	char* getName() { return name; };
//	char* getLocation() { return location; };
//
//	void AddBook(Book* _book);
//	void DisplayBooks();
//	void Display();
//};
//class Author {
//private:
//	char* name;
//	char* nationality;
//	int numBooks;
//	Book** books;
//
//public:
//	Author(const char* _name, const char* _nationality);
//	~Author();
//	void AddBook(Book* _book);
//	void DisplayBooks();
//	void Display();
//};
//class Book {
//private:
//	char* title;
//	char* ASBN;
//	int price;
//	int  numAuthors;
//	Author** authors;
//	Publisher* publisher;
//
//
//public:
//	Book(const char* _title, const char* _ASBN, int _price);
//	~Book();
//	void AddAuthor(Author* _author);
//	void DisplayAuthors();
//	void Display();
//	void SetPublisher(Publisher* _publisher);
//};
//
//
//// BOOK
//Book::Book(const char* _title, const char* _ASBN, int _price)
//{
//	title = getStringFromBuffer(_title);
//	ASBN = getStringFromBuffer(_ASBN);
//	price = _price;
//	numAuthors = 0;
//	authors = nullptr;
//	publisher = nullptr;
//}
//Book::~Book()
//{
//	if (title)
//		delete[] title;
//	if (ASBN)
//		delete[] ASBN;
//	if (authors)
//		delete[] authors;
//}
//
//void Book::AddAuthor(Author* _author)
//{
//
//	Author** temp = new Author * [numAuthors + 1];
//
//	for (int i = 0; i < numAuthors; i++)
//		temp[i] = authors[i];
//
//	temp[numAuthors++] = _author;
//
//	if (authors)
//		delete[] authors;
//
//	authors = temp;
//	
//
//}
//void Book::DisplayAuthors()
//{
//	for (int i = 0; i < numAuthors; i++)
//		authors[i]->Display();
//}
//void Book::Display()
//{
//	cout << "Book: " << this->title << endl;
//	cout << "--ASBN: " << this->ASBN << endl;
//	cout << "--Price: " << this->price << endl;
//	cout << "--Publisher: " << this->publisher->getName() << endl;
//}
//void Book::SetPublisher(Publisher* _publisher)
//{
//	this->publisher = _publisher;
//}
//
//// AUTHOR 
//Author::Author(const char* _name, const char* _nationality)
//{
//	name = getStringFromBuffer(_name);
//	nationality = getStringFromBuffer(_nationality);
//	numBooks = 0;
//	books = nullptr;
//}
//Author::~Author()
//{
//	if (name)
//		delete[] name;
//	if (nationality)
//		delete[] nationality;
//	if (books)
//		delete[] books;
//}
//
//void Author::AddBook(Book* _book)
//{
//	Book** temp = new Book * [numBooks + 1];
//
//	for (int i = 0; i < numBooks; i++)
//		temp[i] = books[i];
//
//	temp[numBooks++] = _book;
//
//	if (books)
//		delete[] books;
//
//	books = temp;
//
//}
//void Author::DisplayBooks()
//{
//	for (int i = 0; i < numBooks; i++)
//		books[i]->Display();
//}
//void Author::Display()
//{
//	cout << "Author: " << this->name << endl;
//	cout << "--Nationality: " << this->nationality << endl;
//}
//
//// PUBLISHER
//Publisher::Publisher(const char* _name, const char* _location)
//{
//	name = getStringFromBuffer(_name);
//	location = getStringFromBuffer(_location);
//	books = nullptr;
//	numBooks = 0;
//}
//Publisher::~Publisher()
//{
//	if (name)
//		delete[] name;
//	if (location)
//		delete[] location;
//	if (books)
//		delete[] books;
//}
//
//void Publisher::AddBook(Book* _book)
//{
//	Book** temp = new Book * [numBooks + 1];
//
//	for (int i = 0; i < numBooks; i++)
//		temp[i] = books[i];
//
//	temp[numBooks++] = _book;
//
//	_book->SetPublisher(this);
//
//	if (books)
//		delete[] books;
//
//	books = temp;
//}
//void Publisher::DisplayBooks()
//{
//	cout << "===DISPLAYING PUBLISHER BOOKS===" << endl;
//	for (int i = 0; i < numBooks; i++)
//		books[i]->Display();
//}
//void Publisher::Display()
//{
//	cout << "Publisher: " << this->name << endl;
//	cout << "--Location: " << this->location << endl;
//}
//
//
//
//// BOOKSTORE
//class Bookstore {
//private:
//	int numBooks;
//	Book** books;
//	int numAuthors;
//	Author** authors;
//	int numPublishers;
//	Publisher** publishers;
//
//public:
//	Bookstore();
//	~Bookstore();
//
//	// Methods
//	void AddBook(Book* _book);
//	void AddAuthor(Author* _author);
//	void AddPublisher(Publisher* _publisher);
//
//	void DisplayBooks();
//	void DisplayAuthors();
//	void DisplayPublishers();
//};
//
//Bookstore::Bookstore()
//{
//	cout << "=================================" << endl;
//	cout << "WELCOME TO BOOK MANAGEMENT SYSTEM" << endl;
//	cout << "=================================" << endl;
//
//	books = nullptr;
//	numBooks = 0;
//	authors = nullptr;
//	numAuthors = 0;
//	publishers = nullptr;
//	numPublishers = 0;
//}
//Bookstore::~Bookstore()
//{
//	for (int i = 0; i < numBooks; i++)
//		delete books[i];
//
//	if (books)
//		delete[] books;
//	if (authors)
//		delete[] authors;
//	if (publishers)
//		delete[] publishers;
//}
//
//
//void Bookstore::AddBook(Book* _book)
//{
//	Book** temp = new Book * [numBooks + 1];
//
//	for (int i = 0; i < numBooks; i++)
//		temp[i] = books[i];
//
//	temp[numBooks++] = _book;
//
//	if (books)
//		delete[] books;
//
//	books = temp;
//}
//void Bookstore::AddAuthor(Author* _author)
//{
//	Author** temp = new Author * [numAuthors + 1];
//
//	for (int i = 0; i < numAuthors; i++)
//		temp[i] = authors[i];
//
//	temp[numAuthors++] = _author;
//
//	if (authors)
//		delete[] authors;
//
//	authors = temp;
//}
//void Bookstore::AddPublisher(Publisher* _publisher)
//{
//	Publisher** temp = new Publisher * [numPublishers + 1];
//
//	for (int i = 0; i < numPublishers; i++)
//		temp[i] = publishers[i];
//
//	temp[numPublishers++] = _publisher;
//
//	if (publishers)
//		delete[] publishers;
//
//	publishers = temp;
//}
//
//
//
//void Bookstore::DisplayBooks()
//{
//	for (int i = 0; i < numBooks; i++)
//		books[i]->Display();
//}
//void Bookstore::DisplayAuthors()
//{
//	for (int i = 0; i < numAuthors; i++)
//		authors[i]->Display();
//}
//void Bookstore::DisplayPublishers()
//{
//	for (int i = 0; i < numPublishers; i++)
//		publishers[i]->Display();
//}
//// =====================================================
//
//
//int main() {
//	{
//		Bookstore store;
//
//		Author* author1 = new Author("J.K. Rowling", "British");
//		Author* author2 = new Author("George R.R. Martin", "American");
//
//		Book* book1 = new Book("Harry Potter", "123456789", 39);
//		Book* book2 = new Book("A Song of Ice and Fire", "987654321", 49);
//
//		book1->AddAuthor(author1);
//		book2->AddAuthor(author2);
//
//		Publisher* publisher1 = new Publisher("Bloomsbury", "London");
//		Publisher* publisher2 = new Publisher("Bantam Books", "New York");
//
//		publisher1->AddBook(book1);
//		publisher2->AddBook(book2);
//
//		store.AddAuthor(author1);
//		store.AddAuthor(author2);
//		store.AddBook(book1);
//		store.AddBook(book2);
//		store.AddPublisher(publisher1);
//		store.AddPublisher(publisher2);
//		cout << "Books in store:\n";
//		store.DisplayBooks();
//		cout << "\nAuthors in store:\n";
//		store.DisplayAuthors();
//		cout << "\nPublishers in store:\n";
//		store.DisplayPublishers();
//
//		delete author1;
//		delete author2;
//
//		// deleting books in bookstore destructor as they are contained in bookstore as we added them
//
//		delete publisher1;
//		delete publisher2;
//	}
//
//	cout << "Mem leaks : " << _CrtDumpMemoryLeaks() << endl;
//
//	return 0;
//}




//#include <iostream>
//using namespace std;
//
//int my_strlen(const char* str) {
//    int length = 0;
//    while (str[length] != '\0') {
//        ++length;
//    }
//    return length;
//}
//char* my_strcpy(char* destination, const char* source) {
//    int i = 0;
//    while (source[i] != '\0') {
//        destination[i] = source[i];
//        ++i;
//    }
//    destination[i] = '\0';  
//    return destination;
//}
//
//
//class Author;
//
//class Book {
//private:
//    char* title;
//    char* ISBN;
//    double price;
//    Author** authors;
//    int authorCount;
//    int authorCapacity;
//
//    void resizeAuthors() {
//        if (authorCount == authorCapacity) {
//            authorCapacity *= 2;
//            Author** newAuthors = new Author * [authorCapacity];
//            for (int i = 0; i < authorCount; ++i) {
//                newAuthors[i] = authors[i];
//            }
//            delete[] authors;
//            authors = newAuthors;
//        }
//    }
//
//public:
//    Book(const char* title, const char* ISBN, double price) : price(price), authorCount(0), authorCapacity(2) {
//        this->title = new char[my_strlen(title) + 1];
//        my_strcpy(this->title, title);
//        this->ISBN = new char[my_strlen(ISBN) + 1];
//        my_strcpy(this->ISBN, ISBN);
//        authors = new Author * [authorCapacity];
//    }
//
//    ~Book() {
//        delete[] title;
//        delete[] ISBN;
//        delete[] authors;
//    }
//
//    void addAuthor(Author* author);
//    void displayAuthors() const;
//
//    const char* getTitle() const { return title; }
//    const char* getISBN() const { return ISBN; }
//    double getPrice() const { return price; }
//};
//
//class Author {
//private:
//    char* name;
//    char* nationality;
//    Book** books; 
//    int bookCount;
//    int bookCapacity;
//
//    void resizeBooks() {
//        if (bookCount == bookCapacity) {
//            bookCapacity *= 2;
//            Book** newBooks = new Book * [bookCapacity];
//            for (int i = 0; i < bookCount; ++i) {
//                newBooks[i] = books[i];
//            }
//            delete[] books;
//            books = newBooks;
//        }
//    }
//
//public:
//    Author(const char* name, const char* nationality) : bookCount(0), bookCapacity(2) {
//        this->name = new char[my_strlen(name) + 1];
//        my_strcpy(this->name, name);
//        this->nationality = new char[my_strlen(nationality) + 1];
//        my_strcpy(this->nationality, nationality);
//        books = new Book * [bookCapacity];
//    }
//
//    ~Author() {
//        delete[] name;
//        delete[] nationality;
//        delete[] books;
//    }
//
//    void addBook(Book* book) {
//        resizeBooks();
//        books[bookCount++] = book;
//    }
//
//    void displayBooks() const {
//        for (int i = 0; i < bookCount; ++i) {
//            std::cout << books[i]->getTitle() << std::endl;
//        }
//    }
//
//    const char* getName() const { return name; }
//    const char* getNationality() const { return nationality; }
//};
//
//void Book::addAuthor(Author* author) {
//    resizeAuthors();
//    authors[authorCount++] = author;
//    author->addBook(this);
//}
//
//void Book::displayAuthors() const {
//    for (int i = 0; i < authorCount; ++i) {
//        std::cout << authors[i]->getName() << std::endl;
//    }
//}
//
//class Publisher {
//private:
//    char* name;
//    char* location;
//    Book** books; 
//    int bookCount;
//    int bookCapacity;
//
//    void resizeBooks() {
//        if (bookCount == bookCapacity) {
//            bookCapacity *= 2;
//            Book** newBooks = new Book * [bookCapacity];
//            for (int i = 0; i < bookCount; ++i) {
//                newBooks[i] = books[i];
//            }
//            delete[] books;
//            books = newBooks;
//        }
//    }
//
//public:
//    Publisher(const char* name, const char* location) : bookCount(0), bookCapacity(2) {
//        this->name = new char[my_strlen(name) + 1];
//        my_strcpy(this->name, name);
//        this->location = new char[my_strlen(location) + 1];
//        my_strcpy(this->location, location);
//        books = new Book * [bookCapacity];
//    }
//
//    ~Publisher() {
//        delete[] name;
//        delete[] location;
//        delete[] books;
//    }
//
//    void addBook(Book* book) {
//        resizeBooks();
//        books[bookCount++] = book;
//    }
//
//    void displayBooks() const {
//        for (int i = 0; i < bookCount; ++i) {
//            std::cout << books[i]->getTitle() << std::endl;
//        }
//    }
//
//    const char* getName() const { return name; }
//    const char* getLocation() const { return location; }
//};
//
//class Bookstore {
//private:
//    Book** books;
//    Author** authors;
//    Publisher** publishers;
//    int bookCount;
//    int authorCount;
//    int publisherCount;
//    int bookCapacity;
//    int authorCapacity;
//    int publisherCapacity;
//
//    void resizeBooks() {
//        if (bookCount == bookCapacity) {
//            bookCapacity *= 2;
//            Book** newBooks = new Book * [bookCapacity];
//            for (int i = 0; i < bookCount; ++i) {
//                newBooks[i] = books[i];
//            }
//            delete[] books;
//            books = newBooks;
//        }
//    }
//
//    void resizeAuthors() {
//        if (authorCount == authorCapacity) {
//            authorCapacity *= 2;
//            Author** newAuthors = new Author * [authorCapacity];
//            for (int i = 0; i < authorCount; ++i) {
//                newAuthors[i] = authors[i];
//            }
//            delete[] authors;
//            authors = newAuthors;
//        }
//    }
//
//    void resizePublishers() {
//        if (publisherCount == publisherCapacity) {
//            publisherCapacity *= 2;
//            Publisher** newPublishers = new Publisher * [publisherCapacity];
//            for (int i = 0; i < publisherCount; ++i) {
//                newPublishers[i] = publishers[i];
//            }
//            delete[] publishers;
//            publishers = newPublishers;
//        }
//    }
//
//public:
//    Bookstore() : bookCount(0), authorCount(0), publisherCount(0), bookCapacity(2), authorCapacity(2), publisherCapacity(2) {
//        books = new Book * [bookCapacity];
//        authors = new Author * [authorCapacity];
//        publishers = new Publisher * [publisherCapacity];
//    }
//
//    ~Bookstore() {
//        for (int i = 0; i < bookCount; ++i) delete books[i];
//      
//        delete[] books;
//        delete[] authors;
//        delete[] publishers;
//    }
//
//    void addBook(Book* book) {
//        resizeBooks();
//        books[bookCount++] = book;
//    }
//
//    void addAuthor(Author* author) {
//        resizeAuthors();
//        authors[authorCount++] = author;
//    }
//
//    void addPublisher(Publisher* publisher) {
//        resizePublishers();
//        publishers[publisherCount++] = publisher;
//    }
//
//    void displayAllBooks() const {
//        for (int i = 0; i < bookCount; ++i) {
//            std::cout << books[i]->getTitle() << " (ISBN: " << books[i]->getISBN() << ", Price: " << books[i]->getPrice() << ")\n";
//            books[i]->displayAuthors();
//        }
//    }
//
//    void displayAllAuthors() const {
//        for (int i = 0; i < authorCount; ++i) {
//            std::cout << authors[i]->getName() << " (Nationality: " << authors[i]->getNationality() << ")\n";
//            authors[i]->displayBooks();
//        }
//    }
//
//    void displayAllPublishers() const {
//        for (int i = 0; i < publisherCount; ++i) {
//            std::cout << publishers[i]->getName() << " (Location: " << publishers[i]->getLocation() << ")\n";
//            publishers[i]->displayBooks();
//        }
//    }
//};
//
//
//
//
//int main() {
//	Bookstore store;
//
//	Author* author1 = new Author("J.K. Rowling", "British");
//	Author* author2 = new Author("George R.R. Martin", "American");
//
//	Book* book1 = new Book("Harry Potter", "123456789", 39.99);
//	Book* book2 = new Book("A Song of Ice and Fire", "987654321", 49.99);
//
//	book1->addAuthor(author1);
//	book2->addAuthor(author2);
//
//	Publisher* publisher1 = new Publisher("Bloomsbury", "London");
//	Publisher* publisher2 = new Publisher("Bantam Books", "New York");
//
//	publisher1->addBook(book1);
//	publisher2->addBook(book2);
//
//	store.addAuthor(author1);
//	store.addAuthor(author2);
//	store.addBook(book1);
//	store.addBook(book2);
//	store.addPublisher(publisher1);
//	store.addPublisher(publisher2);
//    cout << "Books in store:\n";
//	store.displayAllBooks();
//	cout << "\nAuthors in store:\n";
//	store.displayAllAuthors();
//	cout << "\nPublishers in store:\n";
//	store.displayAllPublishers();
//
//	delete author1;
//	delete author2;
//
//    // deleting books in bookstore destructor as they are contained in bookstore as we added them
//
//	delete publisher1;
//	delete publisher2;
//
//	return 0;
//}
//












//int main() {
//
//    B hello;
//    hello.print();
//
//    return 0;
//}


// PART 2
//
//#include <iostream>
//using namespace std;
//
//void D()
//{
//    cout << "Start D" << endl;
//    cout << "Throwing int exception" << endl;
//    throw - 1;
//    cout << "End D" << endl;
//}
//
//void C()
//{
//cout << "Start C()" << endl;
//    D();
//    cout << "End C" << endl;
//}
//
//void B()
//{
//    cout << "Start B" << endl;
//    try {
//        C();
//    }
//    catch (double)
//    {
//        cout << "B caught double exception" << endl;
//
//    }
//    catch (...)
//    {
//        cout << "B caught default exception" << endl;
//    }
//
//    try {
//        throw - 1;
//    }
//
//    catch (int)
//    {
//        cout << "B caught int exception" << endl;
//    }
//    cout << "End B" << endl;
//}
//
//
//void A()
//{
//    cout << "Start A";
//    cout << endl;
//
//    try { B();
//    }
//    catch (int)
//    {
//        cout << "A caught int exception" << endl;
//    }
//    cout << "End A" << endl;
//}
//int main() {
//    cout << "Start main" << endl;
//
//    try {
//        A();
//    }
//
//    catch (int)
//    {
//        cout << "main caught int exception" << endl;
//    }
//
//    cout << "End main" << endl;
//    return 0;
//
//
//}



// PART 3
//#include <iostream>
//using namespace std;
//
//class A {
//public:
//    int i;
//    A(int ii) : i(ii) {
//        cout << "Calling A(int ii)" << endl;
//    }
//
//    void show()
//    {
//        cout << "A i= " << i << endl;
//    }
//};
//
//
//class B {
//    int x;
//    A obj;
//
//public:
//    B(int xx) : x(xx), obj(xx + 5) {
//        cout << "B constructor" << endl;
//    }
//
//    B(B& o) : obj(o.x)
//    {
//        cout << "Copy constructor B" << endl;
//        x = o.x + 5;
//
//    }
//
//    void show()
//    {
//        obj.show();
//    }
//};
//
//int main() {
//    B b(10);
//    B b1(b);
//    b1.show();
//
//    return 0;
//}



// PART 4
//#include <iostream>
//using namespace std;
//
//class A {
//    float d;
//public:
//    virtual void func() {
//        cout << "1 2 3" << endl;
//    }
//
//    void func2()
//    {
//        cout << "4 5 6" << endl;
//    }
//};
//
//class B : public A {
//public : 
//    void func()
//    {
//        cout << "A B C" << endl;
//    }
//
//    void func2()
//    {
//        cout << "X Y Z" << endl;
//    }
//};
//
//void somefunction(A& obj)
//{
//    obj.func2();
//}
//
//void anotherfunction(A& obj)
//{
//    obj.func();
//}
//
//int main() {
//    B b;
//    b.func();
//    somefunction(b);
//    anotherfunction(b);
//    A a_obj2 = b;
//    a_obj2.func();
//    
//    return 0;
//}



// PART 5

//#include <iostream>
//using namespace std;
//
//
//template<typename T>
//void MySort(T Arr[], int size)
//{
//	for (int i = 0; i < size - 1; i++)
//	{
//		for (int j = 0; j < size - i - 1; j++)
//		{
//			if (Arr[j] > Arr[j + 1])
//			{
//				T temp = Arr[j];
//				Arr[j] = Arr[j + 1];
//				Arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//template <>
//void MySort <const char*>(const char* Arr[], int size)
//{
//	for (int i = 0; i < size - 1; i++)
//	{
//		for (int j = 0; j < size - i - 1; j++)
//		{
//			if ( strcmp( Arr[j], Arr[j + 1])  > 0)
//			{
//				const char* temp = Arr[j];
//				Arr[j] = Arr[j + 1];
//				Arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//
//template <typename T>
//void printArray(T Arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << Arr[i] << endl;
//	}
//
//	cout << endl;
//}
//
//
//template <>
//void printArray<const char*>(const char* Arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << Arr[i] << endl;
//	}
//
//	cout << endl;
//}
//
//
//int main() {
//
//	// Test with int array
//	int intArr[] = { 5, 2, 9, 1, 5, 6 };
//	int intSize = sizeof(intArr) / sizeof(intArr[0]);
//	MySort(intArr, intSize);
//	printArray(intArr, intSize);
//
//	// Test with float array
//	float floatArr[] = { 3.5, 2.2, 9.1, 1.8, 5.6, 6.3 };
//	int floatSize = sizeof(floatArr) / sizeof(floatArr[0]);
//	MySort(floatArr, floatSize);
//	printArray(floatArr, floatSize);
//
//	// Test with const char* array
//	const char* charArr[] = { "apple", "orange", "banana", "pear", "grape" };
//	int charSize = sizeof(charArr) / sizeof(charArr[0]);
//	MySort(charArr, charSize);
//	printArray(charArr, charSize);
//
//	return 0;
//}



// QUESTION 3
// PART A
//#include <iostream>
//using namespace std;
//
//class Date {
//public:
//    Date(int d = 1, int m = 1, int y = 1960) : Day(d), Month(m), Year(y) {}
//
//    void Print() const {
//        cout << Day << "-" << Month << "-" << Year;
//    }
//
//    int& operator[](int index) {
//        switch (index) {
//        case 0: return Day;
//        case 1: return Month;
//        case 2: return Year;
//        default:
//            throw out_of_range("Index out of range");
//        }
//    }
//
//private:
//    int Day, Month, Year;
//};
//
//class Employee {
//public:
//    Employee(string name = "", int d1 = 1, int m1 = 1, int y1 = 1960, int d2 = 1, int m2 = 1, int y2 = 1960)
//        : Name(name), DOB(d1, m1, y1), JoiningDate(d2, m2, y2) {}
//
//    void Print() const {
//        cout << "Name: " << Name << endl;
//        cout << "DOB: ";
//        DOB.Print();
//        cout << endl;
//        cout << "Joining Date: ";
//        JoiningDate.Print();
//        cout << endl;
//    }
//
//    Date& operator[](const string& member) {
//        if (member == "DOB") {
//            return DOB; // Access DOB's Month
//        }
//        else if (member == "JoiningDate") {
//            return JoiningDate; // Access JoiningDate's Month
//        }
//        else {
//            throw invalid_argument("Invalid member name");
//        }
//    }
//
//private:
//    string Name;
//    Date DOB;
//    Date JoiningDate;
//};
//
//int main() {
//    Employee emp("John Doe", 1, 1, 1990, 1, 5, 2023);
//
//    emp["DOB"][2] = 90; // Update DOB's Month
//
//    cout << "Employee Details:" << endl;
//    emp.Print();
//
//    return 0;
//}
//



// QUESTION 3 
// PART B

//
//#include <iostream>
//using namespace std;
//
//class Date {
//public:
//    Date(int d = 1, int m = 1, int y = 1960) : Day(d), Month(m), Year(y) {}
//
//    void Print() const {
//        cout << Day << "-" << Month << "-" << Year;
//    }
//
//    int& operator[](int index) {
//        switch (index) {
//        case 0: return Day;
//        case 1: return Month;
//        case 2: return Year;
//        default:
//            throw out_of_range("Index out of range");
//        }
//    }
//
//private:
//    int Day, Month, Year;
//};
//
//class Employee {
//public:
//    Employee(string name = "" ,Date* _DOB = nullptr)
//        : Name(name){
//        this->SetDOB(_DOB);
//    }
//
//    void Print() const {
//        cout << "Name: " << Name << endl;
//        cout << "DOB: ";
//        DOB->Print();
//        cout << endl;
//       
//    }
//
//    void SetDOB(Date* dptr)
//    {
//        DOB = dptr;
//    }
//
//   
//    ~Employee()
//    {
//        if (DOB)
//            delete DOB;
//    }
//
//private:
//    string Name;
//    Date* DOB;
//};
//
//int main() {
//    {
//        Date* dob = new Date(18, 25, 2005);
//        Employee emp("John Doe");
//
//        emp.SetDOB(dob);
//
//        cout << "Employee Details:" << endl;
//        emp.Print();
//    }
//    cout << _CrtDumpMemoryLeaks() << endl;
//
//    return 0;
//}

