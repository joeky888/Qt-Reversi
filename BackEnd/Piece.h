#ifndef PIECE_H
#define PIECE_H

#include <QPushButton>
#include <QMouseEvent>

class Piece : public QPushButton
{
    Q_OBJECT
public:
    Piece(QWidget *parent = 0);
    void setIndex(int, int);

private:
    int row;
    int column;

protected:
    virtual void mousePressEvent(QMouseEvent* event);

signals:
    void DropPiece(int, int);
};

#endif // PIECE_H
