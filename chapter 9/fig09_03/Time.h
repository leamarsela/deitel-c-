#ifndef TIME__H
#define TIME__H

class Time
{
    public:
    Time();
    void setTime(int, int, int);
    void printUniversal() const;
    void printStandard() const;

    private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;

};

#endif  //!TIME__H