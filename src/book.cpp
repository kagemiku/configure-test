#include "book.h"


Book::Book(const std::string& title, int price) :
    title_(title),
    price_(price)
{
}


Book::~Book()
{
}


auto Book::describe() const -> std::string
{
    return std::string("Title:") + title_
        + std::string(", Price:") + std::to_string(price_);
}

