//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EAGLContext, NSArray, NSMutableDictionary, TDreamFramebufferManager;

@interface TDreamManager : NSObject
{
    EAGLContext *glContext;
    TDreamFramebufferManager *framebufferManager;
    NSMutableDictionary *_contextProgramMap;
    int oldFilterMode;
    int filterMode;
    float BRIGHTNESSPARAM;
    float LOOSEPARAM;
    float SMOOTHPARAM;
    float AUX1INPUT;
    float AUX2INPUT;
    float AUX3INPUT;
    int QUANTIZE_LEVELS;
    float inputAspectRatio;
    struct IPImage outputImage;
    struct IPImage inputImage;
    struct IPImage maskImage;
    struct CGSize inputTextureSize;
    struct CGSize smallUseSize;
    struct CGSize smallUseSizeNoSmooth;
    struct CGSize largeUseSize;
    float vigneteR;
    float vigneteG;
    float vigneteB;
    float vigneteGaux;
    float vigneteBaux;
    float false1R;
    float false1G;
    float false1B;
    float false2R;
    float false2G;
    float false2B;
    NSArray *lookupsEE;
    NSArray *lookupsBN;
    NSArray *lookups;
    float coloresVignetteLookUpsBN[8][3];
    float coloresVignetteLookUpsNORMALES[8][3];
    float coloresVignetteLookUpsEspeciales[8][3];
    float coloresDobles[8][6];
    float coloresVignette[10][3];
    _Bool lookUpTextureNeedUpdate;
    int modeLookUps;
    int lookUpIndex;
}

- (void).cxx_destruct;
- (void)deleteAllFilters;
- (void)setUniformsAndParameters;
- (void)setBlackFillBasedOnSlider;
- (unsigned int)getOutputBufferName;
- (void)newLookUpFilterMode;
- (void)allocatePrograms:(id)arg1;
- (unsigned int)textureFromCacheNumber:(int)arg1;
- (unsigned int)bufferFromCacheNumber:(int)arg1;
- (void)addImageBufferToPool:(int)arg1 ipImage:(struct IPImage)arg2;
- (int)smallBufferCount;
- (int)largeBufferCount;
- (long long)processTextureOnTexture:(const struct IPImage *)arg1 andOutput:(const struct IPImage *)arg2 andParams:(struct imageProcessingParams)arg3;
- (long long)processTextureOnTexture:(const struct IPImage *)arg1 andOutput:(const struct IPImage *)arg2 andParams:(struct imageProcessingParams)arg3 withMask:(const struct IPImage *)arg4;
- (id)glContext;
- (_Bool)updateParameters:(struct imageProcessingParams)arg1;
- (void)renderPipeline;
- (id)programsForCurrentContext;
- (_Bool)checkMaskIPImage:(const struct IPImage *)arg1;
- (_Bool)checkIPImage:(const struct IPImage *)arg1;
- (id)init;
- (void)fillConstants;
- (void)dealloc;

@end

