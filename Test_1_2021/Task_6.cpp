bool first_bigger_for_scientist(Book a, Book b)
{
    if (a.hindex > b.hindex) return true;
    else if (a.hindex == b.hindex)
    {
        if (a.pages > b.pages) return true;
        else return false;
    }
    return false;
}
bool first_bigger_for_designer(Book a, Book b)
{
    if (a.color > b.color) return true;
    else if (a.color == b.color)
    {
        if (a.h > b.h) return true;
        else return false;
    }
    return false;
}