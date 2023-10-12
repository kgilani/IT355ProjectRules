void throwing_func() noexcept(false);

void checkErr(){
    throwing_func();
}

int main(){
    try{
        checkErr();
    }
    catch(...){
        // Handle error
    }
}