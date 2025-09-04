# constructors
Aim: To study and implement constructors in C++

#Program a: This C++ program defines a class named student that encapsulates the details of a student, such as their roll number, name, and fee. It uses a constructor to take input from the user at the time of object creation. When an object of the class is created, the constructor prompts the user to enter the roll number, name, and fee. The program uses cin, cin.ignore(), and cin.getline() to handle input correctly, especially for string input that may contain spaces. After collecting the data, the display() function is used to print the student’s information in a formatted manner. The program demonstrates basic concepts of object-oriented programming such as classes, encapsulation, constructors, and member functions.

Algorithm:

Step-1: Start

Step-2: Define a class student

Step-3: Private data members: rollno (int), name (char array), and fee (double)

Step-4: A constructor that:

Step-5: Prompts and accepts input for rollno

Step-6: Clears the input buffer using cin.ignore()

Step-7: Accepts a full name using cin.getline()

Step-8: Prompts and accepts input for fee

Step-9: A public function display() to output the stored data

Step-10: In main(): Create an object s of the class student

Step-11: Automatically invoke the constructor to take user input

Step-12: Call the display() function to show the details

Step-13: End.

#Program b: This C++ program demonstrates the concept of default constructors in object-oriented programming. It defines a class named construct that contains two integer data members: a and b. A default constructor is provided, which initializes a with the value 10 and b with 20 when an object of the class is created. The display() member function is used to print the values of a and b. In the main() function, an object obj of the class is created, which automatically invokes the default constructor to initialize the values. This program effectively showcases how constructors can be used to initialize objects with default values upon creation.

Algorithm:

Step-1: Start

Step-2: Define a class construct

Step-3: Two public integer variables: a and b

Step-4: A default constructor that: Sets a = 10, Sets b = 20

Step-5: A public member function display() that prints the values of a and b

Step-6: In the main() function: Create an object obj of class construct

Step-7: The constructor is automatically called, initializing a and b

Step-8: Call obj.display() to print the values

Step-9: End.

#Program c: This C++ program demonstrates the use of parameterized constructors and copy constructors in a class. It defines a class student that stores information such as roll number (rno), name, and fee. The parameterized constructor initializes the object with specific values provided at the time of creation. Additionally, a copy constructor is defined, which creates a new object by copying the values of an existing object. In the main() function, an object s is created using the parameterized constructor, and then a second object Student1 is created using the copy constructor by passing object s to it. This program illustrates how copy constructors are used to duplicate objects and also highlights constructor overloading in C++.

Algorithm:

Step-1: Start

Step-2: Define a class student

Step-3: Private data members: rno, name, and fee

Step-4: A parameterized constructor that takes roll number, name, and fee as parameters and initializes the object

Step-5: A copy constructor that copies the values from another student object and prints a message indicating the copy constructor was called

Step-6: A display() function to print the student details

Step-7: In the main() function: Create object s using the parameterized constructor

Step-8: Call s.display() to show initialized values

Step-9: Create object Student1 by passing s to the copy constructor

Step-10: Call Student1.display() to show copied values

Step-11: End.

#Program d: This C++ program demonstrates the use of constructors and destructors, focusing on how many times they are called during the object's lifetime. The program defines a class named deconstruct that has a constructor and a destructor. A global variable count is used to keep track of how many objects have been created and destroyed. Each time an object is created, the constructor is called, incrementing and printing the count. When an object goes out of scope or is explicitly destroyed, the destructor is called, decrementing and printing the count. The program shows how object lifetimes are managed in C++, especially when objects are declared in nested scopes (like inside a block {}).

Algorithm:

Step-1: Start

Step-2: Declare a global integer variable count and initialize it to 0

Step-3: Define a class deconstruct with:

Step-4: A constructor that:
  Increments count
    Prints the current number of objects created
    
Step-5: A destructor that:
    Decrements count
    Prints the number of objects remaining (after destruction)
    
Step-6: In main(): Create object obj1 → constructor is called

Step-7: Enter a new block scope:

Step-8: Create two objects obj2 and obj3 → constructors called

Step-9: When block ends, obj2 and obj3 are destroyed → destructors called
    Create object obj4 → constructor called
    
Step-10: When main() ends, obj1 and obj4 are destroyed → destructors called

Step-11: End.


#Program e: This C++ program illustrates the concept of a copy constructor, which is a special constructor used to create a new object as a copy of an existing object. The class CopyConst contains two private integer variables, x and y. It includes a parameterized constructor to initialize these values and a user-defined copy constructor that duplicates the values from an existing object. In the main() function, an object c1 is created using the parameterized constructor. Then, a second object c2 is created by copying c1 using the copy constructor. The show() function displays the values of both objects, demonstrating that c2 is an exact copy of c1.

Algorithm:

Step-1: Start

Step-2: Define a class CopyConst with private data members x and y

Step-3: Define a parameterized constructor that:

Step-4: Accepts two integers and assigns them to x and y

Step-5: Define a copy constructor that:

Step-6: Accepts a reference to another object of the same class

Step-7: Copies the values of x and y from the passed object

Step-8: Define a show() function to display the values of x and y

Step-9: In the main() function: Create object c1 using the parameterized constructor

Step-10: Display values of c1

Step-11: Create object c2 using the copy constructor (passing c1)

Step-12: Display values of c2

Step-13: End.
