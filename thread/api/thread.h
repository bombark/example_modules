
class Thread;


class ThreadCtx {
    Thread *mThreads;

public:
    void makeThread();
    void joinThread();
    int getValue();
};
