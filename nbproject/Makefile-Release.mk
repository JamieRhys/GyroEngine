#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/src/gyroEngine/engine/GyroEngine.o \
	${OBJECTDIR}/src/main/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=-lboost_filesystem -lboost_system -lsfml-audio -lsfml-graphics -lsfml-network -lsfml-system -lsfml-window

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/gyroengine

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/gyroengine: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/gyroengine ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/src/gyroEngine/engine/GyroEngine.o: src/gyroEngine/engine/GyroEngine.cpp
	${MKDIR} -p ${OBJECTDIR}/src/gyroEngine/engine
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Iinclude -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/gyroEngine/engine/GyroEngine.o src/gyroEngine/engine/GyroEngine.cpp

${OBJECTDIR}/src/main/main.o: src/main/main.cpp
	${MKDIR} -p ${OBJECTDIR}/src/main
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Iinclude -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/main/main.o src/main/main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
