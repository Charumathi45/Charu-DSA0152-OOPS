#include <iostream>
#include <string>
#include <memory>


struct Node {
    bool isLeaf;
    std::string question;
    std::string classification;
    std::shared_ptr<Node> yesBranch;
    std::shared_ptr<Node> noBranch;

    Node(std::string q) : isLeaf(false), question(q) {}
    Node(std::string c, bool leaf) : isLeaf(leaf), classification(c) {}
};


std::string classify(const std::shared_ptr<Node>& node) {
    if (node->isLeaf) {
        return node->classification;
    } else {
        std::string answer;
        std::cout << node->question << " (yes/no): ";
        std::cin >> answer;
        if (answer == "yes") {
            return classify(node->yesBranch);
        } else {
            return classify(node->noBranch);
        }
    }
}

int main() {
    
    auto root = std::make_shared<Node>("Is the person older than 30?");
    root->yesBranch = std::make_shared<Node>("Does the person exercise regularly?");
    root->yesBranch->yesBranch = std::make_shared<Node>("Fit", true);
    root->yesBranch->noBranch = std::make_shared<Node>("Unfit", true);
    root->noBranch = std::make_shared<Node>("Fit", true);

    std::cout << "Decision Tree Classifier\n";
    std::cout << "------------------------\n";

    std::string result = classify(root);
    std::cout << "The person is classified as: " << result << std::endl;

    return 0;
}
