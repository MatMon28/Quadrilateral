/*! \file Rombo.h
	\brief Declaration of the class Rhombus

	Details.
*/


#ifndef ROMBO_H
#define ROMBO_H

#include<iostream>

#include "Quadrilatero.h"

using namespace std;

/// @class Rhombus
/// @brief to manage an object with the shape of a rhombus
class Rhombus : public Quadrilateral
{
protected:

	float diagL;
	float diagS;

public:

	/// @name CONSTRUCTORS/DESTRUCTOR
	/// @{
	Rhombus();
	Rhombus(float dL, float dS);
	Rhombus(const Rhombus& r);

	~Rhombus();
	/// @}

	/// @name OPERATORS
	/// @{
	Rhombus& operator=(const Rhombus& r);
	bool operator==(const Rhombus& r);
	/// @}

	/// @name BASIC HANDLING
	/// @{
	void Init();
	void Init(const Rhombus& r);
	void Reset();
	/// @}


	/// @name GETTERS / SETTERS
	/// @{
	void SetDiagL(float d);
	void SetDiagS(float d);
	void SetDim(float dL, float dS);

	void GetDim(float& dL, float& dS);
	float GetDiagL();
	float GetDiagS();
	float GetSide();

	float GetArea();
	/// @}


	/// @name DEBUG and SERIALIZATION 
	/// @{
	void ErrorMessage(const char* string);
	void WarningMessage(const char* string);
	void Dump();
	/// @}

};

#endif