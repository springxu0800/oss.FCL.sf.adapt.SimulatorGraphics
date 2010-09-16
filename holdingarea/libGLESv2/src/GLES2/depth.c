/* Copyright (c) 2010 Nokia Corporation and/or its subsidiary(-ies).
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * BRIAN PAUL BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
 * AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * Initial Contributors:
 * Nokia Corporation - initial contribution.
 *
 * Contributors:
 *
 * Description:
 *
 */

#include "common.h"
#include "hgl.h"
#include "context.h"

GL_APICALL_BUILD void GL_APIENTRY glDepthFunc(GLenum func)
{
	DGLES2_ENTER();
	ctx->hgl.DepthFunc(func);
	DGLES2_LEAVE();
}

GL_APICALL_BUILD void GL_APIENTRY glDepthMask(GLboolean flag)
{
	DGLES2_ENTER();
	ctx->hgl.DepthMask(flag);
	DGLES2_LEAVE();
}

GL_APICALL_BUILD void GL_APIENTRY glDepthRangef(GLclampf zNear, GLclampf zFar)
{
	DGLES2_ENTER();
	ctx->hgl.DepthRange(zNear, zFar);
	DGLES2_LEAVE();
}

GL_APICALL_BUILD void GL_APIENTRY glClearDepthf(GLclampf depth)
{
	DGLES2_ENTER();
	ctx->hgl.ClearDepth(depth);
	DGLES2_LEAVE();
}

