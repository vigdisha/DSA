
//leetocode :reverse
class solution{
    public:
    void reverse(){
        if(size<2){
            return;
        }
        Node *prev = nullptr;
        Node *pres =head;
        Node *next = pres->next;

        while(pres != nullptr){
            pres->next = prev;
            prev = pres;
            present = next;

            while(next != nullptr){
                next = next->next;
            }
        }
    return  prev;
    }
}