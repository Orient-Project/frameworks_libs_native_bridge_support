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

DEFINE_INTERCEPTABLE_STUB_FUNCTION(slCreateEngine);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(slQueryNumSupportedEngineInterfaces);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(slQuerySupportedEngineInterfaces);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_3DCOMMIT);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_3DDOPPLER);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_3DGROUPING);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_3DLOCATION);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_3DMACROSCOPIC);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_3DSOURCE);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_ANDROIDACOUSTICECHOCANCELLATION);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_ANDROIDAUTOMATICGAINCONTROL);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_ANDROIDBUFFERQUEUESOURCE);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_ANDROIDCONFIGURATION);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_ANDROIDEFFECT);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_ANDROIDEFFECTCAPABILITIES);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_ANDROIDEFFECTSEND);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_ANDROIDNOISESUPPRESSION);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_ANDROIDSIMPLEBUFFERQUEUE);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_AUDIODECODERCAPABILITIES);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_AUDIOENCODER);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_AUDIOENCODERCAPABILITIES);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_AUDIOIODEVICECAPABILITIES);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_BASSBOOST);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_BUFFERQUEUE);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_DEVICEVOLUME);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_DYNAMICINTERFACEMANAGEMENT);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_DYNAMICSOURCE);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_EFFECTSEND);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_ENGINE);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_ENGINECAPABILITIES);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_ENVIRONMENTALREVERB);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_EQUALIZER);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_LED);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_METADATAEXTRACTION);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_METADATATRAVERSAL);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_MIDIMESSAGE);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_MIDIMUTESOLO);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_MIDITEMPO);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_MIDITIME);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_MUTESOLO);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_NULL);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_OBJECT);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_OUTPUTMIX);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_PITCH);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_PLAY);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_PLAYBACKRATE);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_PREFETCHSTATUS);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_PRESETREVERB);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_RATEPITCH);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_RECORD);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_SEEK);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_THREADSYNC);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_VIBRA);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_VIRTUALIZER);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_VISUALIZATION);
DEFINE_INTERCEPTABLE_STUB_VARIABLE(SL_IID_VOLUME);

static void __attribute__((constructor(0))) init_stub_library() {
  INIT_INTERCEPTABLE_STUB_FUNCTION("libOpenSLES.so", slCreateEngine);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libOpenSLES.so", slQueryNumSupportedEngineInterfaces);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libOpenSLES.so", slQuerySupportedEngineInterfaces);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_3DCOMMIT);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_3DDOPPLER);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_3DGROUPING);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_3DLOCATION);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_3DMACROSCOPIC);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_3DSOURCE);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_ANDROIDACOUSTICECHOCANCELLATION);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_ANDROIDAUTOMATICGAINCONTROL);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_ANDROIDBUFFERQUEUESOURCE);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_ANDROIDCONFIGURATION);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_ANDROIDEFFECT);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_ANDROIDEFFECTCAPABILITIES);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_ANDROIDEFFECTSEND);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_ANDROIDNOISESUPPRESSION);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_ANDROIDSIMPLEBUFFERQUEUE);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_AUDIODECODERCAPABILITIES);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_AUDIOENCODER);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_AUDIOENCODERCAPABILITIES);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_AUDIOIODEVICECAPABILITIES);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_BASSBOOST);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_BUFFERQUEUE);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_DEVICEVOLUME);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_DYNAMICINTERFACEMANAGEMENT);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_DYNAMICSOURCE);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_EFFECTSEND);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_ENGINE);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_ENGINECAPABILITIES);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_ENVIRONMENTALREVERB);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_EQUALIZER);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_LED);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_METADATAEXTRACTION);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_METADATATRAVERSAL);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_MIDIMESSAGE);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_MIDIMUTESOLO);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_MIDITEMPO);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_MIDITIME);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_MUTESOLO);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_NULL);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_OBJECT);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_OUTPUTMIX);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_PITCH);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_PLAY);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_PLAYBACKRATE);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_PREFETCHSTATUS);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_PRESETREVERB);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_RATEPITCH);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_RECORD);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_SEEK);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_THREADSYNC);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_VIBRA);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_VIRTUALIZER);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_VISUALIZATION);
  INIT_INTERCEPTABLE_STUB_VARIABLE("libOpenSLES.so", SL_IID_VOLUME);
}
// clang-format on
