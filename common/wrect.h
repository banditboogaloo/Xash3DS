/*
wrect.h - rectangle definition
Copyright (C) 2010 Uncle Mike

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
*/

#pragma once
#if !defined( WRECTH )
#define WRECTH

typedef struct rect_s
{
	int	left;
	int right;
	int top;
	int bottom;

#ifdef __cplusplus
	int Width()
	{
		return right - left;
	}

	int Height()
	{
		return bottom - top;
	}
#endif
} wrect_t;

#endif
