/* Copyright (c) 2010 Nokia Corporation and/or its subsidiary(-ies).
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and /or associated documentation files
 * (the "Materials "), to deal in the Materials without restriction,
 * including without limitation the rights to use, copy, modify, merge,
 * publish, distribute, sublicense, and/or sell copies of the Materials,
 * and to permit persons to whom the Materials are furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Materials.
 *
 * THE MATERIALS ARE PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE MATERIALS OR
 * THE USE OR OTHER DEALINGS IN THE MATERIALS.
 *
 * Initial Contributors:
 * Nokia Corporation - initial contribution.
 *
 * Contributors:
 *
 * Description:
 *
 */

#ifndef _IMAGETARGET_H_
#define _IMAGETARGET_H_

enum EImageTarget {
	IMAGE_TARGET_TEXTURE_2D,
	IMAGE_TARGET_TEXTURE_CUBE_MAP_POSITIVE_X,
    IMAGE_TARGET_TEXTURE_CUBE_MAP_NEGATIVE_X,
    IMAGE_TARGET_TEXTURE_CUBE_MAP_POSITIVE_Y,
    IMAGE_TARGET_TEXTURE_CUBE_MAP_NEGATIVE_Y,
    IMAGE_TARGET_TEXTURE_CUBE_MAP_POSITIVE_Z,
    IMAGE_TARGET_TEXTURE_CUBE_MAP_NEGATIVE_Z,
	IMAGE_TARGET_RENDERBUFFER
};

#endif // _IMAGETARGET_H_