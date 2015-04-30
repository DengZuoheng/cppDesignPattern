#ifndef command_h
#define command_h

class command
{
public:
    command(){}
    virtual void execute()=0;
    virtual ~command(){}
};

#endif