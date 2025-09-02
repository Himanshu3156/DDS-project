#include <iostream>
#include <vector>
#include <string>
#include <fstream>

const std::string FILENAME = "contacts.txt";

// Defines the structure for a single contact
class Contact {
public:
    std::string name;
    std::string phone;
    std::string email;
};

// --- Function Stubs ---

void addContact(const Contact& contact) {
    // Next Implementation Steps:
    // 1. Open FILENAME in append mode (`std::ios::app`).
    // 2. Write the contact's details to the file, one attribute per line for simplicity.
    //    Example:
    //    John Doe
    //    555-0199
    //    john.d@example.com
    // 3. Add error handling for file I/O.
    // 4. Close the file.
    std::cout << "Placeholder: Adding contact '" << contact.name << "'." << std::endl;
}

void listContacts() {
    // Next Implementation Steps:
    // 1. Open FILENAME for reading.
    // 2. Read the file three lines at a time (name, phone, email) to reconstruct each Contact object.
    // 3. Print the details of each contact in a clean, readable format.
    // 4. Handle cases where the file cannot be opened or is empty.
    std::cout << "Placeholder: Listing all contacts." << std::endl;
}

void searchContacts(const std::string& nameQuery) {
    // Next Implementation Steps:
    // 1. Open FILENAME for reading.
    // 2. Read the file and create Contact objects.
    // 3. For each contact, check if its name contains the `nameQuery` string.
    //    (Use `std::string::find`).
    // 4. If a match is found, print that contact's full details.
    // 5. If no matches are found after checking all contacts, print a notification.
    std::cout << "Placeholder: Searching for contacts matching '" << nameQuery << "'." << std::endl;
}


int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <command> [options]" << std::endl;
        std::cerr << "Commands: add, list, search" << std::endl;
        return 1;
    }

    std::string command = argv[1];

    if (command == "add" && argc == 5) {
        Contact newContact = {argv[2], argv[3], argv[4]};
        addContact(newContact);
    } else if (command == "list" && argc == 2) {
        listContacts();
    } else if (command == "search" && argc == 3) {
        searchContacts(argv[2]);
    } else {
        std::cerr << "Error: Invalid command or incorrect number of arguments." << std::endl;
        return 1;
    }

    return 0;
}
