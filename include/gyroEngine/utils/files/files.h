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
 * File:   files.h
 * Author: Jamie-Rhys Edwards jamie_airfix@yahoo.co.uk
 *
 * Created on 08 April 2017, 19:06
 */

#ifndef FILES_H
#define FILES_H

#include <boost/filesystem/operations.hpp>
#include <fstream>
#include <string>

bool does_file_exist(const std::string& FILENAME) {
    std::ofstream i(FILENAME);
    return i.good();
}

void create_directory(std::string &dirName) {
    boost::filesystem::path path(dirName);
    boost::filesystem::create_directory(path);
}

#endif /* FILES_H */