#include <iostream>

std::string greeting() {
    std::string msg = "Hello";
    msg.append(", ");
    msg.append("Bazel");
    return msg;
}

int main() {
    std::cout << greeting().c_str() << "\n";
}