//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class RKColorUtil;

__attribute__((visibility("hidden")))
@interface RKSHL : NSObject
{
    struct vector<SHLDataElem, std::__1::allocator<SHLDataElem>> *m_vectorDataElem;
    struct vector<std::__1::vector<float, std::__1::allocator<float>>, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float>>>> *m_vectorGainArray;
    RKColorUtil *m_rkColorUtil;
    unsigned long long m_grid;
    unsigned long long m_clutDataSize;
    float *m_clutData;
    long long m_overlayElem;
    long long m_overlayOption;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (double)getGammaUsedToFix8bitsQuantization;
- (void)getOverlayElem:(long long *)arg1 andOption:(long long *)arg2;
- (void)setOverlayElem:(long long)arg1 andOption:(long long)arg2;
- (void)reset;
- (void)getDataElem:(struct SHLDataElem *)arg1 number:(long long)arg2;
- (void)setDataElem:(const struct SHLDataElem *)arg1 number:(long long)arg2;
- (id)getCIColorBrickData:(const struct Vec3f *)arg1;
- (id)getCIColorCubeData:(unsigned long long)arg1;
- (void)processColorBlackOverlay:(const struct Vec3f *)arg1 clrProcessed:(struct Vec3f *)arg2 clamp:(_Bool)arg3;
- (void)processColorDesaturateOverlay:(const struct Vec3f *)arg1 clrProcessed:(struct Vec3f *)arg2 clamp:(_Bool)arg3;
- (void)processColor:(const struct Vec3f *)arg1 clrProcessed:(struct Vec3f *)arg2 clamp:(_Bool)arg3;
- (void)preProcess;
- (void)allocLutData:(unsigned int)arg1;

@end

