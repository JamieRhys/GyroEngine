/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GyroEngine.hpp
 * Author: Jamie-Rhys Edwards jamie_airfix@yahoo.co.uk
 *
 * Created on 13 April 2017, 01:20
 */

#ifndef GYROENGINE_HPP
#define GYROENGINE_HPP

#include <memory>
#include <string>

namespace gyroEngine { namespace engine {
    class GyroEngine {
    private:
        
        
    public:
        GyroEngine(int argc, char* argv[]);
        GyroEngine();
        
        
    private:
        void start(int windowWidth, int windowHeight, std::string windowTitle);
        
        void preinit();
        
        void init();
        
        void postinit();
        
        void gameLoop();
        
        void update();
        
        void render();
        
        void destroy();
        
/*
 * ===========================================================================
 * Internal Functions
 * ===========================================================================
 */
        
        void configureLogger(int argc, char* argv[]);
        
        void startManagers();
        
    }; // class GyroEngine
}; // namespace engine
}; // namespace gyroEngine

#endif /* GYROENGINE_HPP */
