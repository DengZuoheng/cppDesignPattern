#ifndef RECEIVER_H
#define RECEIVER_H
#include <string>
class receiver
{
public:
    receiver();
    receiver(const std::string&);
    void action();
private:
    std::string __str;
};

#endif