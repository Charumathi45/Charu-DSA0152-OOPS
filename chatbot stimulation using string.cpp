#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

std::string getResponse(const std::string& input) {

    std::string responses[] = {
        "Hello! How can I help you today?",
        "What brings you here?",
        "Nice to meet you!",
        "How can I assist you?",
        "Tell me more about that.",
        "That's interesting. Please continue.",
        "I see. Can you elaborate?",
        "How can I support you?"
    };

    srand(time(NULL));  
    int index = rand() % (sizeof(responses) / sizeof(responses[0]));

    return responses[index];
}

int main() {
    std::string userInput;
    std::cout << "Chatbot: Hello! How can I assist you today?\n";

    while (true) {
        std::cout << "User: ";
        std::getline(std::cin, userInput);

        if (userInput == "exit") {
            std::cout << "Chatbot: Goodbye!\n";
            break;
        }

        std::string response = getResponse(userInput);
        std::cout << "Chatbot: " << response << "\n";
    }

    return 0;
}

