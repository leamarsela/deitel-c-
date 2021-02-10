#ifndef TIME__H
#define TIME__H

class Time
{
    public:
    explicit Time(int = 0, int = 0, int = 0);

    //set functions
    void setTime(int, int, int);
    void setHour(int);
    void setMinute(int);
    void setSecond(int);

    //get functions
    unsigned int getHour() const;
    unsigned int getMinute() const;
    unsigned int getSecond() const;

    void printUniversal() const;
    void printStandard() const;

    private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
};

#endif  //!TIME__H