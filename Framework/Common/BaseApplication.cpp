#include "BaseApplication.hpp"
//Parse command Line, read configuration, initialize all sub modules

int My::BaseApplication::initialize()
{
    m_bQuit = false;

    return 0;
}

//Finalize all sub m odules and clean up all runtime temporary files
void My::BaseApplication::Finalize()
{

}

// One cycle of the main loop
void My::BaseApplication::Tick()
{
    
}

bool My::BaseApplication::IsQuit()
{
    return m_bQuit;
}