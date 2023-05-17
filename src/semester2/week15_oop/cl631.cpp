//https://drive.google.com/file/d/1jJntFuU43RTNeEpMRI7ywyAC9mpq9aXR/view?usp=share_link

#include <iostream>

using namespace std;

class TreePrinter {
public:
    virtual void printTree();
};

class TreePrinter1 : public TreePrinter {
public:
    void printTree() override {
        cout << " /\\ " << endl;
        cout << "//\\\\" << endl;
    }
};

class TreePrinter2 : public TreePrinter {
public:
    void printTree() override {
        cout << " /\\ " << endl;
        cout << "/**\\" << endl;
    }
};

class TreePrinter3 : public TreePrinter {
public:
    void printTree() override {
        cout << " /\\ " << endl;
        cout << "/++\\" << endl;
    }
};

int main() {
    TreePrinter1 treePrinter1;
    TreePrinter2 treePrinter2;
    TreePrinter3 treePrinter3;

    treePrinter1.printTree();
    treePrinter2.printTree();
    treePrinter3.printTree();

    return 0;
}
