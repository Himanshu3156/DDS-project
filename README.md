# DDS-project
# C++ Project Collection
Welcome to this repository! It contains a collection of small, standalone software projects written in C++, each designed to demonstrate specific programming concepts and data structures.

## Projects Included
Below is a list of the projects available in this repository. Each project has its own detailed README with specific instructions for compiling and running the application.

E-Library Book Management: A command-line tool to manage a digital collection of books, demonstrating file I/O and object-oriented principles.

Hospital Patient Queue: A simulation of a patient queuing system, illustrating the use of the std::queue data structure.

Contact Book: A simple command-line application for managing personal contacts, focusing on classes and data persistence.

Getting Started
Prerequisites
To build and run these projects, you will need a C++ compiler that supports the C++11 standard or newer, and the make build tool.

Compiler: g++ or Clang

Build Tool: Make

On Debian/Ubuntu-based systems, you can install these with:

sudo apt-get update
sudo apt-get install build-essential

Cloning the Repository
To get a local copy of these projects, clone the repository using the following command:

git clone <repository-url>
cd <repository-folder>

Building and Running
Each project can be compiled and run independently. Navigate into a specific project's directory within src/ and follow the instructions in its local README.md file. A Makefile is provided in each for convenience.

# Example for the Contact Book
cd src/contact-book
make
./contacts add "Jane Doe" "555-0102" "jane.doe@email.com"
./contacts list
