#ifndef LINROVNICA_LINROCNICA_H
#define LINROVNICA_LINROCNICA_H

class Rovnica
{
private:
    float koefA;
    float koefB;
public:
    Rovnica();
    Rovnica(float mojeA, float mojeB);
    Rovnica(float mojKoef, char ktory='a');
    void  vypisRovnicu() const;
    float vratKoren() const;

};
#endif //LINROVNICA_LINROCNICA_H
