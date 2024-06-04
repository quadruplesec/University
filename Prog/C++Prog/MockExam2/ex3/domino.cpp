#include "Domino.h"

bool Piece::can_be_left_to(const Piece& other) const
{
    if (right_ == other.left_) return true;
    return false;
}

bool Piece::can_be_right_to(const Piece& other) const
{
    if (left_ == other.right_) return true;
    return false;
}

const Piece& Domino::left() const
{
    return pieces_.front();
}

const Piece& Domino::right() const
{
    return pieces_.back();
}

bool Domino::place_left(const Piece& p)
{
    Piece left_end = pieces_.front();

    if (!left_end.can_be_right_to(p))
    {
        return false;
    }

    pieces_.push_front(p);
    return true;
}

bool Domino::place_right(const Piece& p)
{
    Piece right_end = pieces_.back();

    if (!right_end.can_be_left_to(p))
    {
        return false;
    }

    pieces_.push_back(p);
    return true;
}
