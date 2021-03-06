//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MetalPerformanceShaders/MPSKernel.h>

@interface MPSImageHistogram : MPSKernel
{
    unsigned long long histogramEntries;
    BOOL histogramAlpha;
    // Error parsing type: , name: minPixelValue
    // Error parsing type: , name: maxPixelValue
    BOOL useMinMaxHistogramKernel;
    CDStruct_1e3be3a8 _clipRectSource;
    BOOL _zeroHistogram;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(nonatomic) BOOL zeroHistogram; // @synthesize zeroHistogram=_zeroHistogram;
@property(nonatomic) CDStruct_1e3be3a8 clipRectSource; // @synthesize clipRectSource=_clipRectSource;
- (void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 histogram:(id)arg3 histogramOffset:(unsigned long long)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (unsigned long long)histogramSizeForSourceFormat:(unsigned long long)arg1;
- (id)debugDescription;
- (id)initWithDevice:(id)arg1 histogramInfo:(const CDStruct_59b50e33 *)arg2;
@property(readonly, nonatomic) CDStruct_59b50e33 histogramInfo;
- (id)initWithDevice:(id)arg1;

@end

