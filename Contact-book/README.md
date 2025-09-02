# Contact Book
A simple, command-line based application for managing personal contacts.

## Project Concept
This tool provides a straightforward way to store and retrieve contact information (name, phone number, and email address). Users can add new contacts, list all saved contacts, and search for a specific contact by name. The contact list is saved to a local file, ensuring the data persists between sessions.

Tech Requirements
Language: C++ (C++11 or newer)

Compiler: g++ or Clang

Build Tool: Make (optional, a Makefile is provided)

Standard Libraries: <iostream>, <vector>, <string>, <fstream>

Usage Instructions
After compiling, the contacts executable is used to manage the contact list via command-line arguments.

Add a new contact:

./contacts add "John Doe" "555-0199" "john.d@example.com"

List all contacts:

./contacts list

Search for a contact by name:

./contacts search "John"

How to Run the Program
Navigate to this directory:

cd src/contact-book

Compile the source code using the provided Makefile:

make

Or compile it manually:

g++ -std=c++11 -o contacts main.cpp

Run the application using the defined commands. A contacts.txt file will be created in the directory.

./contacts add "Jane Smith" "555-0100" "jane.s@example.com"
./contacts list
