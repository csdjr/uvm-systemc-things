#include <systemc>
#include <uvm>

using namespace uvm;

// 定义一个继承自 uvm_void 的类
class my_object : public uvm_void {
public:
    void print() {
        std::cout << "This is my_object" << std::endl;
    }
};

int sc_main(int argc, char* argv[]) {
    // 创建 my_object 的实例
    my_object obj;

    // 调用 my_object 的方法
    obj.print();

    return 0;
}