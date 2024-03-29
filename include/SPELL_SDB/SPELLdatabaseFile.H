// ################################################################################
// FILE       : SPELLdatabaseFile.H
// DATE       : Mar 17, 2011
// PROJECT    : SPELL
// DESCRIPTION: SPELL database based on local files
// --------------------------------------------------------------------------------
//
//  Copyright (C) 2008, 2018 SES ENGINEERING, Luxembourg S.A.R.L.
//
//  This file is part of SPELL.
//
// SPELL is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// SPELL is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with SPELL. If not, see <http://www.gnu.org/licenses/>.
//
// ################################################################################

#ifndef __SPELL_DATABASE_FILE_H__
#define __SPELL_DATABASE_FILE_H__

// FILES TO INCLUDE ////////////////////////////////////////////////////////
// Project includes --------------------------------------------------------
#include "SPELL_UTIL/SPELLbase.H"
// Local includes ----------------------------------------------------------
#include "SPELL_SDB/SPELLdatabase.H"
// System includes ---------------------------------------------------------

// FORWARD REFERENCES //////////////////////////////////////////////////////
// TYPES ///////////////////////////////////////////////////////////////////
// DEFINES /////////////////////////////////////////////////////////////////
// GLOBALS /////////////////////////////////////////////////////////////////

/** \addtogroup SPELL_SDB */
/*@{*/

//////////////////////////////////////////////////////////////////////////////
/**
 ** \brief SPELL database based on raw text files
 **
 *////////////////////////////////////////////////////////////////////////////
class SPELLdatabaseFile : public SPELLdatabase
{
public: //--------------------------------------------------------------------

    // EXCEPTIONS ////////////////////////////////////////////////////////////
    // ENUMS /////////////////////////////////////////////////////////////////
    // TYPES /////////////////////////////////////////////////////////////////
    // LIFECYCLE /////////////////////////////////////////////////////////////

		//////////////////////////////////////////////////////////////////////
		/** Constructor
		**////////////////////////////////////////////////////////////////////
		SPELLdatabaseFile( const std::string& name, const std::string& filename, const std::string& defExt );

		//////////////////////////////////////////////////////////////////////
		/** Destructor
		**////////////////////////////////////////////////////////////////////
		~SPELLdatabaseFile();

	// METHODS ///////////////////////////////////////////////////////////////

		//////////////////////////////////////////////////////////////////////
		/** \see SPELLdatabase.
		**////////////////////////////////////////////////////////////////////
		void create();

		//////////////////////////////////////////////////////////////////////
		/** \see SPELLdatabase.
		**////////////////////////////////////////////////////////////////////
		void commit();

		//////////////////////////////////////////////////////////////////////
		/** \see SPELLdatabase.
		**////////////////////////////////////////////////////////////////////
		virtual void load();

		//////////////////////////////////////////////////////////////////////
		/** \see SPELLdatabase.
		**////////////////////////////////////////////////////////////////////
		void reload();

		//////////////////////////////////////////////////////////////////////
		/** \see SPELLdatabase.
		**////////////////////////////////////////////////////////////////////
		std::string id();

protected: //-----------------------------------------------------------------

    // EXCEPTIONS ////////////////////////////////////////////////////////////
    // ENUMS /////////////////////////////////////////////////////////////////
    // TYPES /////////////////////////////////////////////////////////////////
    // LIFECYCLE /////////////////////////////////////////////////////////////
	// METHODS ///////////////////////////////////////////////////////////////

		//////////////////////////////////////////////////////////////////////
		/** Invoke the ImportValue module function to obtain the Python value
		**////////////////////////////////////////////////////////////////////
		PyObject* importValue( const std::string& origValue );

	// DATA MEMBERS //////////////////////////////////////////////////////////

private: //-------------------------------------------------------------------

    // EXCEPTIONS ////////////////////////////////////////////////////////////
    // ENUMS /////////////////////////////////////////////////////////////////
    // TYPES /////////////////////////////////////////////////////////////////
    // LIFECYCLE /////////////////////////////////////////////////////////////
	// METHODS ///////////////////////////////////////////////////////////////
	// DATA MEMBERS //////////////////////////////////////////////////////////
};

/*@}*/
#endif
