#include <iostream>
#include <string>
#include <unordered_map>
#include <cstdlib>

void executeCommand(const std::string& command) {
    int result = std::system(command.c_str());
    if (result != 0) {
        std::cerr << "Failed to execute the command: " << command << std::endl;
    }
}

void displayMenu() {
    std::cout << "\n\n\n\t==== System info ====" << std::endl;
    std::cout << "\t1: dmesg as superuser" << std::endl;
    std::cout << "\t2: lsb_release -a" << std::endl;
    std::cout << "\t3: lspci" << std::endl;
    std::cout << "\t4: uname -a" << std::endl;
    std::cout << "\t5: fastfetch" << std::endl;
    std::cout << "\t0: exit" << std::endl;
    std::cout << "\t=====================" << std::endl;
}

int main() {
    std::unordered_map<std::string, std::string> commands = {
        {"1", "sudo dmesg"},
        {"2", "lsb_release -a"},
        {"3", "lspci"},
        {"4", "uname -a"},
        {"5", "fastfetch"}
    };
    
    std::string choice;
    
    do {
        displayMenu();
        std::cout << "> ";
        std::cin >> choice;
        
        if (choice == "0") {
            std::cout << "\nexit the program." << std::endl;
            break;
        }
        
        if (commands.find(choice) != commands.end()) {
            executeCommand(commands[choice]);
        } else {
            std::cout << "\nIt is an invalid option. Please specify 1~5 or 0.\n";
        }
        
    } while (true);
    
    return 0;
}
