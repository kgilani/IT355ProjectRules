void f (const Employee *name){
    if (name) {
        cout << *name;
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
