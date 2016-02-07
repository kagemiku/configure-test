#include <string>


class Book {
private:
    std::string title_;
    int price_;

public:
    Book(const std::string& title, int price);
    ~Book();

    auto describe() const -> std::string;
};

