#ifndef CIRCULAR_QUEUE
#define CIRCULAR_QUEUE

#include<array>
// do not USE using namespace std!!!!

class CircularQueue{
    public:
         void add( int frame );
         int getNext();
         CircularQueue( int capacity );
         CircularQueue();

    //Destructor
    ~CircularQueue();

    private:
        int front;
        int capacity;
        int current_size;
        //storing all the frames
        std::array<int> frames;

}


#endif