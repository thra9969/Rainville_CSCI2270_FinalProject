#ifndef FINAL_H
#define FINAL_H
struct Node{
    std::string key;
    Node *next;
    Node *previous;
};
class Final
{
    public:
        Final();
        ~Final();
        void adventure(std::string x);
        void advafter(std::string x, std::string y);
        void eraserecords(std::string x);
        void insertfalseinfo(std::string previous,std::string x);
        Node* searchforinfo(std::string x);
        void printquest();
        void addition(float x, float y);
        void subtraction(float x, float y);
        void multiplication(float x, float y);
        void division(float x, float y);
    protected:
    private:
        Node *current;
        Node *head;
        Node *tail;
};

#endif // FINAL_H
