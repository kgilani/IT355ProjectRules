void f (const Employee *e){
    if (e) {
        cout << *e;
    }
}

int main(){
    Employee coder("Joe Smith");
    Employee typist("Bill Jones");
    Manager designer("Jane Doe", typist);

    f(&coder);
    f(&typist);
    f(&designer);
}