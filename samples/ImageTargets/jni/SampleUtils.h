/*==============================================================================
            Copyright (c) 2012 QUALCOMM Austria Research Center GmbH.
            All Rights Reserved.
            Qualcomm Confidential and Proprietary
            
@file 
    SampleUtils.h

@brief
    A utility class.

==============================================================================*/


#ifndef _QCAR_SAMPLEUTILS_H_
#define _QCAR_SAMPLEUTILS_H_

// Includes:
#include "Texture.h"

#include <stdio.h>
#include <android/log.h>

#ifdef USE_OPENGL_ES_1_1
#include <GLES/gl.h>
#include <GLES/glext.h>
#else
#include <GLES2/gl2.h>
#include <GLES2/gl2ext.h>
#endif

// Utility for logging:
#define LOG_TAG    "IMAGE_TARGETS"
#define LOG(...)  __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)

/// A utility class used by the QCAR SDK samples.
class SampleUtils
{
public:

    /// Prints a 4x4 matrix.
    static void printMatrix(const float* matrix);

    /// Prints GL error information.
    static void checkGlError(const char* operation);
    
    /// Set the rotation components of this 4x4 matrix.
    static void setRotationMatrix(float angle, float x, float y, float z, 
        float *nMatrix);
    
    /// Set the translation components of this 4x4 matrix.
    static void translatePoseMatrix(float x, float y, float z,
        float* nMatrix = NULL);
    
    /// Applies a rotation.
    static void rotatePoseMatrix(float angle, float x, float y, float z, 
        float* nMatrix = NULL);
    
    /// Applies a scaling transformation.
    static void scalePoseMatrix(float x, float y, float z, 
        float* nMatrix = NULL);
    
    /// Multiplies the two matrices A and B and writes the result to C.
    static void multiplyMatrix(float *matrixA, float *matrixB, 
        float *matrixC);
    
    /// Initialize a shader.
    static unsigned int initShader(unsigned int shaderType, 
        const char* source);
    
    /// Create a shader program.
    static unsigned int createProgramFromBuffer(const char* vertexShaderBuffer,
        const char* fragmentShaderBuffer);

    // Does all matrix work involved with drawing images
    static void drawMatrix(float transX, float transY, float transZ, float* MVmatrix,
			float scaleX, float scaleY, float scaleZ,
			float *proMatrix, float *MVPmatrix,
			float *imageVert, float *imageNorm, float *imageTexCoor, int numVerts,
			unsigned int shaderID, GLint vHandle, GLint nHandle, GLint tCoordHandle, GLint mvpMHandle, Texture** theTextures, int theTextureIndex);
};

#endif // _QCAR_SAMPLEUTILS_H_
