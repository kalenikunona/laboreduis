class Parent {
public:
    void ExternalCancel() {
        std::cout << "Parent::ExternalCancel called" << std::endl;
    }
};

class Child : public Parent {
public:
    void ExternalCancel() {
        std::cout << "Child::ExternalCancel called" << std::endl;
        Super::ExternalCancel();  // Assuming 'Super' is a typedef for 'Parent'
    }
};

int main() {
    Child child;
    child.ExternalCancel();
    return 0;
}
