namespace animals{
    struct Dog {};
    void bark(Dog) {}
}

int main(){
    animals::Dog d;
    bark(d); // uses ADL -> works because Dog is in animals: works even without animals::because ADL finds bark where dog is.
}