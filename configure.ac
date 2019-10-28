################################################################################
#
#  Copyright (C) 2008, 2018 SES ENGINEERING, Luxembourg S.A.R.L.
# 
#  This file is part of SPELL.
# 
#  SPELL is free software: you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation, either version 3 of the License, or
#  (at your option) any later version.
# 
#  SPELL is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
#  GNU General Public License for more details.
# 
#  You should have received a copy of the GNU General Public License
#  along with SPELL. If not, see <http://www.gnu.org/licenses/>.
#
################################################################################

AC_INIT([SPELL], [2.5.4], [juergen.gall@ses.com, raimondas.sasnauskas@ses.com])
AM_INIT_AUTOMAKE([1.9 tar-pax -Wall -Werror foreign])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_MACRO_DIR([m4])
AM_DISABLE_STATIC

#------------------------------------------------------------------------------# 
# Checks for basic standard programs
#------------------------------------------------------------------------------# 
AC_PROG_CC
AC_PROG_CXX
AC_PROG_LIBTOOL
AC_PROG_INSTALL
AC_PROG_MAKE_SET
AM_PATH_PYTHON

#------------------------------------------------------------------------------#
# Checks for some development headers (POSIX-threads, C++ standard library)
#------------------------------------------------------------------------------#
AC_HEADER_STDC
AC_LANG_CPLUSPLUS
AX_PYTHON_DEVEL
AC_CHECK_HEADER(pthread.h,,AC_MSG_ERROR(pthread.h is required (POSIX threads library)))
AC_CHECK_HEADER(ncurses.h,,AC_MSG_ERROR(ncurses.h is required))
PKG_PROG_PKG_CONFIG

AC_CHECK_LIB([rt]       , [clock_gettime]    ,[:],[AC_MSG_ERROR(rt library is required)])
AC_CHECK_LIB([dl]       , [dlopen]           ,[:],[AC_MSG_ERROR(dl library is required)])
AC_CHECK_LIB([util]     , [openpty]          ,[:],[AC_MSG_ERROR(util library is required)])
AC_CHECK_LIB([xerces-c] , [_init]            ,[:],[AC_MSG_ERROR(xerces-c library is required)])
AC_CHECK_LIB([z]        , [inflate]          ,[:],[AC_MSG_ERROR(zlib library is required)])
AC_CHECK_LIB([ssl]      , [SSL_library_init] ,[:],[AC_MSG_ERROR(openssl library is required)])
AC_CHECK_LIB([menu]     , [_init]            ,[:],[AC_MSG_ERROR(menu library is required)])
AC_CHECK_LIB([ncurses]  , [initscr]          ,[:],[AC_MSG_ERROR(ncurses library is required)])
AC_CHECK_LIB([log4cplus], [_init]            ,[:],[AC_MSG_ERROR(log4cplus library is required)])

#------------------------------------------------------------------------------#
# Specification of all the makefiles to be generated.
#------------------------------------------------------------------------------#
MAKEFILES=Makefile

AC_CONFIG_FILES([Makefile \

                 lib/Makefile \

                 lib/SPELL_CIF/Makefile  \
                 lib/SPELL_CTX/Makefile  \
                 lib/SPELL_EXC/Makefile  \
                 lib/SPELL_LST/Makefile  \
                 lib/SPELL_PRD/Makefile  \
                 lib/SPELL_WS/Makefile   \
                 lib/SPELL_CFG/Makefile  \
                 lib/SPELL_CIFC/Makefile \
                 lib/SPELL_CIFS/Makefile \
                 lib/SPELL_IPC/Makefile  \
                 lib/SPELL_PRC/Makefile  \
                 lib/SPELL_SYN/Makefile  \
                 lib/SPELL_WRP/Makefile  \
                 lib/SPELL_UTIL/Makefile \
                 lib/SPELL_SDB/Makefile  \
                 lib/SPELL_DTA/Makefile  \

                 config/Makefile \
                 data/Makefile \
                 scripts/Makefile \

                 src/Makefile            \
                 src/context/Makefile    \
                 src/executor/Makefile   \
                 src/executorcmd/Makefile\
                 src/listener/Makefile   \
                 src/shell/Makefile      \
                 src/spell/Makefile      \

                 drivers/Makefile        \
                 drivers/example/Makefile
               ])
AC_OUTPUT
