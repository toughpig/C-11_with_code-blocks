#ifndef LOOP_H
#define LOOP_H
#include<stdexcept>

class loop
{
    public:
        int num;
        char id;
        loop(int num,char id){
            this->id=id;
            this->num=num;
        };
        void add(loop l2){
            if(this->id!=l2.id)
                throw std::runtime_error("id does not fit");
            this->num+=l2.num;
        }
        virtual ~loop();

    protected:
    private:
};

#endif // LOOP_H
