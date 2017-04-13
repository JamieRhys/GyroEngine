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

/* 
 * File:   InitLog.h
 * Author: Jamie-Rhys Edwards jamie_airfix@yahoo.co.uk
 *
 * Created on 08 April 2017, 19:05
 */

#ifndef INITLOG_H
#define INITLOG_H

// We indirectly include both fstream and
// string from Files.hpp.
#include <gyroEngine/utils/files/files.h>
#include <gyroEngine/utils/logging/Log.h>

INITIALIZE_EASYLOGGINGPP

/** \brief Creates a configuration file for EL++ */
void create_log_config(std::string& filename) {
    std::string prefix;

#ifdef __linux__
    prefix = ".config";
#endif

    create_directory(prefix);

    std::ofstream config(prefix + "/" + filename, std::ios::out);

    config << "## Log Configuration File." << std::endl;
    config << "* GLOBAL:" << std::endl;
    config << "		FORMAT					= \"%datetime{%d/%M/%Y} [%level] %msg\"" << std::endl;
    config << "		FILENAME				= \"logs/logging.log\"" << std::endl;
    config << "		ENABLED					= true" << std::endl;
    config << "		TO_FILE					= true" << std::endl;
    config << "		TO_STANDARD_OUTPUT		= true" << std::endl;
    config << "		MILLISECONDS_WIDTH		= 6" << std::endl;
    config << "		PERFORMANCE_TRACKING	= true" << std::endl;
    config << "		MAX_LOG_FILE_SIZE		= 2097154		## 2MB" << std::endl;
    config << "		LOG_FLUSH_THRESHOLD		= 100			## Flush after every 100 logs" << std::endl;
    config << std::endl;
    config << "*DEBUG:" << std::endl;
    config << "		FORMAT					= \"%datetime{%d/%M/%Y} [%level] %func %msg\"" << std::endl;

    config.close();
}

/** \brief Configures and starts EL++
 *  \details ".config" is prefixed to filename.
 *  \param filename 	- The config file name.
 */
void configure_logging(std::string filename) {
    std::string prefix;
    
#ifdef __linux__
    prefix = ".config";
#endif
    
    std::string path = prefix + "/" + filename;

    // Check to see if our config file exists...
    if (!does_file_exist(path)) {
            // It doesn't so create a new one.
            create_log_config(filename);
    }

    // If we get here, the file does exist so load it...
    el::Configurations config(path);

    // Configure all loggers.
    el::Loggers::reconfigureAllLoggers(config);
}


#endif /* INITLOG_H */