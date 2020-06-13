//
// Copyright (C) 2020 The Android Open Source Project
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

// clang-format off
#include "native_bridge_support/vdso/interceptable_functions.h"

DEFINE_INTERCEPTABLE_STUB_FUNCTION(glActiveTexture);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glAlphaFunc);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glAlphaFuncx);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glAlphaFuncxOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glBindBuffer);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glBindFramebufferOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glBindRenderbufferOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glBindTexture);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glBindVertexArrayOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glBlendEquationOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glBlendEquationSeparateOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glBlendFunc);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glBlendFuncSeparateOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glBufferData);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glBufferSubData);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glCheckFramebufferStatusOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glClear);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glClearColor);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glClearColorx);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glClearColorxOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glClearDepthf);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glClearDepthfOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glClearDepthx);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glClearDepthxOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glClearStencil);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glClientActiveTexture);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glClipPlanef);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glClipPlanefIMG);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glClipPlanefOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glClipPlanex);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glClipPlanexIMG);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glClipPlanexOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glColor4f);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glColor4ub);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glColor4x);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glColor4xOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glColorMask);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glColorPointer);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glColorPointerBounds);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glCompressedTexImage2D);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glCompressedTexSubImage2D);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glCopyTexImage2D);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glCopyTexSubImage2D);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glCullFace);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glCurrentPaletteMatrixOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glDeleteBuffers);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glDeleteFencesNV);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glDeleteFramebuffersOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glDeleteRenderbuffersOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glDeleteTextures);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glDeleteVertexArraysOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glDepthFunc);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glDepthMask);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glDepthRangef);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glDepthRangefOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glDepthRangex);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glDepthRangexOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glDisable);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glDisableClientState);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glDisableDriverControlQCOM);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glDiscardFramebufferEXT);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glDrawArrays);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glDrawElements);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glDrawTexfOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glDrawTexfvOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glDrawTexiOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glDrawTexivOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glDrawTexsOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glDrawTexsvOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glDrawTexxOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glDrawTexxvOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glEGLImageTargetRenderbufferStorageOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glEGLImageTargetTexture2DOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glEnable);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glEnableClientState);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glEnableDriverControlQCOM);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glEndTilingQCOM);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glExtGetBufferPointervQCOM);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glExtGetBuffersQCOM);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glExtGetFramebuffersQCOM);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glExtGetProgramBinarySourceQCOM);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glExtGetProgramsQCOM);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glExtGetRenderbuffersQCOM);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glExtGetShadersQCOM);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glExtGetTexLevelParameterivQCOM);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glExtGetTexSubImageQCOM);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glExtGetTexturesQCOM);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glExtIsProgramBinaryQCOM);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glExtTexObjectStateOverrideiQCOM);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glFinish);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glFinishFenceNV);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glFlush);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glFogf);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glFogfv);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glFogx);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glFogxOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glFogxv);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glFogxvOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glFramebufferRenderbufferOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glFramebufferTexture2DMultisampleIMG);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glFramebufferTexture2DOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glFrontFace);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glFrustumf);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glFrustumfOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glFrustumx);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glFrustumxOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGenBuffers);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGenFencesNV);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGenFramebuffersOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGenRenderbuffersOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGenTextures);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGenVertexArraysOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGenerateMipmapOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetBooleanv);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetBufferParameteriv);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetBufferPointervOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetClipPlanef);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetClipPlanefOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetClipPlanex);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetClipPlanexOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetDriverControlStringQCOM);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetDriverControlsQCOM);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetError);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetFenceivNV);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetFixedv);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetFixedvOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetFloatv);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetFramebufferAttachmentParameterivOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetIntegerv);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetLightfv);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetLightxv);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetLightxvOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetMaterialfv);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetMaterialxv);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetMaterialxvOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetPointerv);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetRenderbufferParameterivOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetString);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetTexEnvfv);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetTexEnviv);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetTexEnvxv);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetTexEnvxvOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetTexGenfvOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetTexGenivOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetTexGenxvOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetTexParameterfv);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetTexParameteriv);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetTexParameterxv);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glGetTexParameterxvOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glHint);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glIsBuffer);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glIsEnabled);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glIsFenceNV);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glIsFramebufferOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glIsRenderbufferOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glIsTexture);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glIsVertexArrayOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glLightModelf);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glLightModelfv);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glLightModelx);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glLightModelxOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glLightModelxv);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glLightModelxvOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glLightf);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glLightfv);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glLightx);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glLightxOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glLightxv);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glLightxvOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glLineWidth);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glLineWidthx);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glLineWidthxOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glLoadIdentity);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glLoadMatrixf);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glLoadMatrixx);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glLoadMatrixxOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glLoadPaletteFromModelViewMatrixOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glLogicOp);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glMapBufferOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glMaterialf);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glMaterialfv);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glMaterialx);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glMaterialxOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glMaterialxv);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glMaterialxvOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glMatrixIndexPointerOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glMatrixIndexPointerOESBounds);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glMatrixMode);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glMultMatrixf);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glMultMatrixx);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glMultMatrixxOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glMultiDrawArraysEXT);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glMultiDrawElementsEXT);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glMultiTexCoord4f);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glMultiTexCoord4x);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glMultiTexCoord4xOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glNormal3f);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glNormal3x);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glNormal3xOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glNormalPointer);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glNormalPointerBounds);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glOrthof);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glOrthofOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glOrthox);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glOrthoxOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glPixelStorei);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glPointParameterf);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glPointParameterfv);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glPointParameterx);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glPointParameterxOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glPointParameterxv);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glPointParameterxvOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glPointSize);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glPointSizePointerOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glPointSizePointerOESBounds);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glPointSizex);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glPointSizexOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glPolygonOffset);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glPolygonOffsetx);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glPolygonOffsetxOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glPopMatrix);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glPushMatrix);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glQueryMatrixxOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glReadPixels);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glRenderbufferStorageMultisampleIMG);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glRenderbufferStorageOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glRotatef);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glRotatex);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glRotatexOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glSampleCoverage);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glSampleCoveragex);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glSampleCoveragexOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glScalef);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glScalex);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glScalexOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glScissor);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glSetFenceNV);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glShadeModel);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glStartTilingQCOM);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glStencilFunc);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glStencilMask);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glStencilOp);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glTestFenceNV);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glTexCoordPointer);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glTexCoordPointerBounds);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glTexEnvf);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glTexEnvfv);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glTexEnvi);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glTexEnviv);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glTexEnvx);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glTexEnvxOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glTexEnvxv);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glTexEnvxvOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glTexGenfOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glTexGenfvOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glTexGeniOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glTexGenivOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glTexGenxOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glTexGenxvOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glTexImage2D);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glTexParameterf);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glTexParameterfv);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glTexParameteri);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glTexParameteriv);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glTexParameterx);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glTexParameterxOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glTexParameterxv);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glTexParameterxvOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glTexSubImage2D);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glTranslatef);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glTranslatex);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glTranslatexOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glUnmapBufferOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glVertexPointer);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glVertexPointerBounds);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glViewport);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glWeightPointerOES);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(glWeightPointerOESBounds);

static void __attribute__((constructor(0))) init_stub_library() {
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glActiveTexture);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glAlphaFunc);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glAlphaFuncx);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glAlphaFuncxOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glBindBuffer);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glBindFramebufferOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glBindRenderbufferOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glBindTexture);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glBindVertexArrayOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glBlendEquationOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glBlendEquationSeparateOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glBlendFunc);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glBlendFuncSeparateOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glBufferData);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glBufferSubData);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glCheckFramebufferStatusOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glClear);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glClearColor);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glClearColorx);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glClearColorxOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glClearDepthf);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glClearDepthfOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glClearDepthx);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glClearDepthxOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glClearStencil);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glClientActiveTexture);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glClipPlanef);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glClipPlanefIMG);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glClipPlanefOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glClipPlanex);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glClipPlanexIMG);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glClipPlanexOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glColor4f);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glColor4ub);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glColor4x);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glColor4xOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glColorMask);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glColorPointer);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glColorPointerBounds);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glCompressedTexImage2D);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glCompressedTexSubImage2D);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glCopyTexImage2D);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glCopyTexSubImage2D);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glCullFace);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glCurrentPaletteMatrixOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glDeleteBuffers);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glDeleteFencesNV);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glDeleteFramebuffersOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glDeleteRenderbuffersOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glDeleteTextures);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glDeleteVertexArraysOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glDepthFunc);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glDepthMask);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glDepthRangef);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glDepthRangefOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glDepthRangex);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glDepthRangexOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glDisable);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glDisableClientState);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glDisableDriverControlQCOM);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glDiscardFramebufferEXT);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glDrawArrays);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glDrawElements);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glDrawTexfOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glDrawTexfvOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glDrawTexiOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glDrawTexivOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glDrawTexsOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glDrawTexsvOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glDrawTexxOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glDrawTexxvOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glEGLImageTargetRenderbufferStorageOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glEGLImageTargetTexture2DOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glEnable);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glEnableClientState);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glEnableDriverControlQCOM);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glEndTilingQCOM);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glExtGetBufferPointervQCOM);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glExtGetBuffersQCOM);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glExtGetFramebuffersQCOM);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glExtGetProgramBinarySourceQCOM);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glExtGetProgramsQCOM);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glExtGetRenderbuffersQCOM);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glExtGetShadersQCOM);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glExtGetTexLevelParameterivQCOM);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glExtGetTexSubImageQCOM);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glExtGetTexturesQCOM);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glExtIsProgramBinaryQCOM);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glExtTexObjectStateOverrideiQCOM);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glFinish);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glFinishFenceNV);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glFlush);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glFogf);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glFogfv);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glFogx);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glFogxOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glFogxv);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glFogxvOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glFramebufferRenderbufferOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glFramebufferTexture2DMultisampleIMG);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glFramebufferTexture2DOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glFrontFace);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glFrustumf);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glFrustumfOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glFrustumx);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glFrustumxOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGenBuffers);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGenFencesNV);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGenFramebuffersOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGenRenderbuffersOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGenTextures);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGenVertexArraysOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGenerateMipmapOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetBooleanv);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetBufferParameteriv);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetBufferPointervOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetClipPlanef);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetClipPlanefOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetClipPlanex);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetClipPlanexOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetDriverControlStringQCOM);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetDriverControlsQCOM);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetError);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetFenceivNV);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetFixedv);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetFixedvOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetFloatv);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetFramebufferAttachmentParameterivOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetIntegerv);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetLightfv);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetLightxv);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetLightxvOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetMaterialfv);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetMaterialxv);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetMaterialxvOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetPointerv);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetRenderbufferParameterivOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetString);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetTexEnvfv);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetTexEnviv);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetTexEnvxv);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetTexEnvxvOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetTexGenfvOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetTexGenivOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetTexGenxvOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetTexParameterfv);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetTexParameteriv);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetTexParameterxv);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glGetTexParameterxvOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glHint);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glIsBuffer);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glIsEnabled);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glIsFenceNV);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glIsFramebufferOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glIsRenderbufferOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glIsTexture);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glIsVertexArrayOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glLightModelf);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glLightModelfv);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glLightModelx);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glLightModelxOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glLightModelxv);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glLightModelxvOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glLightf);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glLightfv);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glLightx);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glLightxOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glLightxv);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glLightxvOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glLineWidth);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glLineWidthx);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glLineWidthxOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glLoadIdentity);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glLoadMatrixf);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glLoadMatrixx);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glLoadMatrixxOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glLoadPaletteFromModelViewMatrixOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glLogicOp);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glMapBufferOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glMaterialf);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glMaterialfv);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glMaterialx);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glMaterialxOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glMaterialxv);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glMaterialxvOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glMatrixIndexPointerOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glMatrixIndexPointerOESBounds);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glMatrixMode);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glMultMatrixf);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glMultMatrixx);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glMultMatrixxOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glMultiDrawArraysEXT);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glMultiDrawElementsEXT);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glMultiTexCoord4f);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glMultiTexCoord4x);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glMultiTexCoord4xOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glNormal3f);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glNormal3x);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glNormal3xOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glNormalPointer);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glNormalPointerBounds);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glOrthof);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glOrthofOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glOrthox);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glOrthoxOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glPixelStorei);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glPointParameterf);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glPointParameterfv);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glPointParameterx);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glPointParameterxOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glPointParameterxv);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glPointParameterxvOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glPointSize);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glPointSizePointerOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glPointSizePointerOESBounds);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glPointSizex);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glPointSizexOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glPolygonOffset);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glPolygonOffsetx);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glPolygonOffsetxOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glPopMatrix);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glPushMatrix);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glQueryMatrixxOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glReadPixels);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glRenderbufferStorageMultisampleIMG);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glRenderbufferStorageOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glRotatef);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glRotatex);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glRotatexOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glSampleCoverage);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glSampleCoveragex);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glSampleCoveragexOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glScalef);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glScalex);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glScalexOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glScissor);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glSetFenceNV);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glShadeModel);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glStartTilingQCOM);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glStencilFunc);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glStencilMask);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glStencilOp);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glTestFenceNV);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glTexCoordPointer);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glTexCoordPointerBounds);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glTexEnvf);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glTexEnvfv);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glTexEnvi);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glTexEnviv);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glTexEnvx);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glTexEnvxOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glTexEnvxv);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glTexEnvxvOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glTexGenfOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glTexGenfvOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glTexGeniOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glTexGenivOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glTexGenxOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glTexGenxvOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glTexImage2D);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glTexParameterf);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glTexParameterfv);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glTexParameteri);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glTexParameteriv);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glTexParameterx);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glTexParameterxOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glTexParameterxv);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glTexParameterxvOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glTexSubImage2D);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glTranslatef);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glTranslatex);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glTranslatexOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glUnmapBufferOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glVertexPointer);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glVertexPointerBounds);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glViewport);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glWeightPointerOES);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libGLESv1_CM.so", glWeightPointerOESBounds);
}
// clang-format on
