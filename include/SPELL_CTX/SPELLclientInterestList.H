// ################################################################################
// FILE       : SPELLclientInterestList.H
// DATE       : Apr 11, 2011
// PROJECT    : SPELL
// DESCRIPTION: List of the entities interested on a given client
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

#ifndef __SPELL_CLIENT_INTEREST_LIST_H__
#define __SPELL_CLIENT_INTEREST_LIST_H__

// FILES TO INCLUDE //////////////////////////////////////////////////////////
// Local includes ------------------------------------------------------------
#include "SPELL_CTX/SPELLclientListener.H"
// Project includes ----------------------------------------------------------
#include "SPELL_SYN/SPELLmutex.H"

/** \addtogroup SPELL_CTX */
/*@{*/


// FORWARD REFERENCES ////////////////////////////////////////////////////////
class SPELLclientInterest;
class SPELLclientIPCinterest;
// TYPES /////////////////////////////////////////////////////////////////////
// DEFINES ///////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
/**
 ** \brief
 **
**////////////////////////////////////////////////////////////////////////////
class SPELLclientInterestList
{
public: //--------------------------------------------------------------------

	// EXCEPTIONS ////////////////////////////////////////////////////////////
	// ENUMS /////////////////////////////////////////////////////////////////
	// TYPES /////////////////////////////////////////////////////////////////
	// LIFECYCLE /////////////////////////////////////////////////////////////

		//////////////////////////////////////////////////////////////////////
		/** Constructor.
		**////////////////////////////////////////////////////////////////////
		SPELLclientInterestList();

		//////////////////////////////////////////////////////////////////////
		/** Destructor.
		**////////////////////////////////////////////////////////////////////
		~SPELLclientInterestList();

	// METHODS ///////////////////////////////////////////////////////////////

		//////////////////////////////////////////////////////////////////////
		/** Set the interested entity
		 *
		 * \param entity IN: pointer to the entity
		 *
		**////////////////////////////////////////////////////////////////////
		void setClientListener( SPELLclientListener* entity );

		//////////////////////////////////////////////////////////////////////
		/** Remove the interested entity
		**////////////////////////////////////////////////////////////////////
		void removeClientListener();

	// DATA MEMBERS //////////////////////////////////////////////////////////

protected: //-----------------------------------------------------------------

		friend class SPELLclientInterest;
		friend class SPELLclientIPC;

	// EXCEPTIONS ////////////////////////////////////////////////////////////
	// ENUMS /////////////////////////////////////////////////////////////////
	// TYPES /////////////////////////////////////////////////////////////////
	// STATIC ////////////////////////////////////////////////////////////////
	// LIFECYCLE /////////////////////////////////////////////////////////////
	// METHODS ///////////////////////////////////////////////////////////////

		//////////////////////////////////////////////////////////////////////
		/** Send a message to interested entity
		**////////////////////////////////////////////////////////////////////
		void distributeMessage( const SPELLipcMessage& msg );

		//////////////////////////////////////////////////////////////////////
		/** Send a request to the controlling entity. The non-controlling
		 * entities may receive a one-way message (TBD)
		**////////////////////////////////////////////////////////////////////
		SPELLipcMessage distributeRequest( const SPELLipcMessage& msg );


private: //-------------------------------------------------------------------

	// EXCEPTIONS ////////////////////////////////////////////////////////////
	// ENUMS /////////////////////////////////////////////////////////////////
	// TYPES /////////////////////////////////////////////////////////////////
	// STATIC ////////////////////////////////////////////////////////////////
	// LIFECYCLE /////////////////////////////////////////////////////////////
	// METHODS ///////////////////////////////////////////////////////////////
	// DATA MEMBERS //////////////////////////////////////////////////////////

		/** Holds the interested entity */
		SPELLclientListener*    m_listener;
		/** Synchronization mutex */
		SPELLmutex				m_lock;
};

/*@}*/
#endif
