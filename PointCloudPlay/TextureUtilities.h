//
//  TextureUtilities.h
//  PointCloudPlay
//
//  Created by Michele Pratusevich on 2/5/13.
//  Copyright (c) 2013 Michele Pratusevich. All rights reserved.
//

#ifndef __PointCloudPlay__TextureUtilities__
#define __PointCloudPlay__TextureUtilities__

#include <OpenGLES/ES2/gl.h>
#include <OpenGLES/ES2/glext.h>

extern "C"
{
    bool read_png_image(const char *filename, char **data, int *width, int *height);
}

GLuint create_texture(char *data, int width, int height, bool pixel_texture = false, GLenum texture_format = GL_RGBA);
GLuint read_png_texture(const char *name, bool pixel_texture = false);
void draw_image(GLuint texture_id, double x, double y, double width, double height, double texcoord_x1, double texcoord_y1, double texcoord_x2, double texcoord_y2, double opacity=1.0);

#endif /* defined(__PointCloudPlay__TextureUtilities__) */
