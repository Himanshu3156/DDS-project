#Hospital Patient Queue
A command-line simulation of a hospital patient check-in and processing system.

##Project Concept
This application simulates a patient queue, such as one you would find in a hospital's emergency room or clinic. New patients are added to the back of the queue, and the system processes them from the front. It serves as a practical demonstration of the First-In, First-Out (FIFO) principle using C++'s standard queue container.

Tech Requirements
Language: C++ (C++11 or newer)

Compiler: g++ or Clang

Build Tool: Make (optional, a Makefile is provided)

Standard Libraries: <iostream>, <queue>, <string>

Usage Instructions
The compiled program, queue, takes commands as arguments to manage the patient list.

Add a patient to the queue:

./queue add "John Smith"

Process the next patient in the queue:

./queue next

View the current list of patients waiting:

./queue list

How to Run the Program
Navigate to this directory:

cd src/hospital-patient-queue

Compile the source code using make:

make

Or compile manually:

g++ -std=c++11 -o queue main.cpp

Run the application with commands to manage the queue:

./queue add "Patient Alpha"
./queue add "Patient Beta"
./queue list
./queue next
./queue list
