//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPSImageAreaMin, MPSImageThresholdBinary, MPSImageThresholdBinaryInverse;

__attribute__((visibility("hidden")))
@interface XMattingSolver : NSObject
{
    id <MTLDevice> _device;
    id <MTLLibrary> _library;
    id <MTLComputePipelineState> _applySolverConstraintsKernel;
    id <MTLComputePipelineState> _solverConstraintsKernel;
    id <MTLTexture> _tmpSegmentation;
    id <MTLTexture> _fgErodedSegmentation;
    id <MTLTexture> _bgErodedSegmentation;
    id <MattingFilter> _mattingFilter;
    MPSImageThresholdBinary *_fgThresholdFilter;
    MPSImageThresholdBinaryInverse *_bgThresholdFilter;
    MPSImageAreaMin *_erosionFilter;
    CDStruct_2d26af33 _config;
}

- (void).cxx_destruct;
@property CDStruct_2d26af33 config; // @synthesize config=_config;
- (int)enqueueSolveOn:(id)arg1 constraints:(id)arg2 colorGuide:(id)arg3 extraGuide:(id)arg4 inputTexture:(id)arg5 outputTexture:(id)arg6;
- (int)encodeApplySolverConstraintsOn:(id)arg1 constraints:(id)arg2 filteredSegmentation:(id)arg3 segmentation:(id)arg4;
- (int)encodeConstraintsOn:(id)arg1 segmentation:(id)arg2 constraints:(id)arg3;
- (void)releaseResources;
- (int)_compileShadersWithLibrary:(id)arg1;
- (int)allocateResources:(CDStruct_2d26af33)arg1;
- (id)initWithDevice:(id)arg1 library:(id)arg2;

@end

