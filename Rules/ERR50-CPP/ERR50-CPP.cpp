#include <cstdlib>

void throwing_func() noexcept(false);

void exitHandler() {
    try{
        throwing_func();
    }
    catch(...){
        // Handle error
    }
}

int main(){
    if (0 != std::atexit(exitHandler)){
        //Handle error
    }
    // ...
}