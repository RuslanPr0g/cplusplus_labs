#include <iostream>
#include <cstring>

class Plorg {
    static const int LEN = 19;
    char name_[LEN];
    int cI_;

public:
    Plorg(const char* name = "Plorga", int cI = 50);
    void setCi(int newCi);
    void showPlorg();
};

Plorg::Plorg(const char* name, int cI) {
    strncpy(this->name_, name, this->LEN);
    this->cI_ = cI;
}

void Plorg::setCi(int newCi) {
    this->cI_ = newCi;
}

void Plorg::showPlorg() {
    using std::cout;
    using std::endl;

    cout << "Name: " << this->name_ << endl;
    cout << "CI: " << this->cI_ << endl;
}

int main() {
    using std::cout;

    Plorg plorg;

    plorg.showPlorg();
    plorg.setCi(1);
    plorg.showPlorg();

    plorg = Plorg("MyPlorg");
    plorg.showPlorg();

    plorg = Plorg("Another Plorg", 20);
    plorg.showPlorg();

    return 0;
}