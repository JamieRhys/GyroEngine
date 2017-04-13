/*
 * Copyright (C) 2017 Jamie-Rhys Edwards jamie_airfix@yahoo.co.uk
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <gyroEngine/engine/GyroEngine.hpp>
#include <gyroEngine/utils/logging/init/initLog.h>
#include <gyroEngine/utils/logging/Log.h>

#include <utility>
#include <stdexcept>

namespace gyroEngine { namespace engine {
/*
 * ===========================================================================
 * Public Functions
 * ===========================================================================
 */
    GyroEngine::GyroEngine(int argc, char* argv[]) {
        configureLogger(argc, argv);
        
        LOG(INFO) << "Starting Engine...";
        start(640, 480, "Mini Monsters");
    }
    
    GyroEngine::GyroEngine() {
        
    }
    
/*
 * ===========================================================================
 * Private Functions
 * ===========================================================================
 */
    void GyroEngine::start(int windowWidth, int windowHeight, std::string windowTitle) {
        LOG(INFO) << "Starting Managers...";
        startManagers();
        
        try {
            LOG(INFO) << "Pre-Initialising Engine...";
            preinit();
            
            LOG(INFO) << "Initialising Engine...";
            init();
            
            LOG(INFO) << "Post-Initialising Engine...";
            postinit();
            
            LOG(INFO) << "Starting Engine Loop...";
            gameLoop();
            
            LOG(INFO) << "Shutting Down Engine...";
            destroy();
        } catch(std::exception &e) {
            LOG(FATAL) << "Fatal Exception: " << e.what();
        }
    }
    
    void GyroEngine::preinit() {
        
    }
    
    void GyroEngine::init() {
        
    }
    
    void GyroEngine::postinit() {
        
    }
    
    void GyroEngine::gameLoop() {
        
    }
    
    void GyroEngine::update() {
        
    }
    
    void GyroEngine::render() {
        
    }
    
    void GyroEngine::destroy() {
        
    }
    
/*
 * ===========================================================================
 * Internal Functions
 * ===========================================================================
 */
    void GyroEngine::configureLogger(int argc, char* argv[]) {
        START_EASYLOGGINGPP(argc, argv);
        
        configure_logging("log.conf");
    }
    
    void GyroEngine::startManagers() {
        
    }
    
}; // namespace engine
}; // namespace gyroEngine