#include "stdafx.h"
/*
-----------------------------------------------------------------------------
 File: Grade.cpp

 Desc: A graphic displayed in the Grade during Dancing.

 Copyright (c) 2001 Chris Danford.  All rights reserved.
-----------------------------------------------------------------------------
*/

#include "Grade.h"

CString GradeToString( Grade g )
{
	switch( g )
	{
	case GRADE_AAA:		return "AAA";
	case GRADE_AA:		return "AA";
	case GRADE_A:		return "A";
	case GRADE_B:		return "B";
	case GRADE_C:		return "C";
	case GRADE_D:		return "D";
	case GRADE_E:		return "E";
	case GRADE_NO_DATA:	return "N";
	default:			ASSERT(true);	return "N";
	}
};

Grade StringToGrade( CString s )
{
	s.MakeUpper();
	if	   ( s == "AAA" )	return GRADE_AAA;
	else if( s == "AA" )	return GRADE_AA;
	else if( s == "A" )		return GRADE_A;
	else if( s == "B" )		return GRADE_B;
	else if( s == "C" )		return GRADE_C;
	else if( s == "D" )		return GRADE_D;
	else if( s == "E" )		return GRADE_E;
	else if( s == "N" )		return GRADE_NO_DATA;
	else	ASSERT(true);	return GRADE_NO_DATA;	// invalid grade string
};
