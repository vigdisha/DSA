// Many answers and their examples are misleading.

// Encapsulation is the packing of "data" and "functions operating on that data" into a single component and restricting the access to some of the object's components.
// Encapsulation means that the internal representation of an object is generally hidden from view outside of the object's definition.

// Abstraction is a mechanism which represent the essential features without including implementation details.

// Encapsulation:-- Information hiding.
// Abstraction:-- Implementation hiding.
class foo{
    private:
        int a, b;
    public:
        foo(int x=0, int y=0): a(x), b(y) {}

        int add(){    
            return a+b;   
        } 
}  
