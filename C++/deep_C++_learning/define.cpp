#define PI 3.14159

double area(double r){
    return PI * r * r;  // compiler really sees "3.14159 * r * r"
}

int main(){
    return 0;
}