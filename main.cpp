// Test precompiled header
int main(int, char**) 
{
    std::ofstream init_stamp("init.stamp");
    init_stamp << "Initialised" << std::endl;


    std::cout << "Hello, world!\n";

    std::ofstream exit_stamp("exit.stamp");
    exit_stamp << "Exiting" << std::endl;
}
