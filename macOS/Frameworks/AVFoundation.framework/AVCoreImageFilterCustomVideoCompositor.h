//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVVideoCompositing.h"

@class CIContext, NSDictionary, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString;

@interface AVCoreImageFilterCustomVideoCompositor : NSObject <AVVideoCompositing>
{
    NSObject<OS_dispatch_group> *_filteringRequestsInFlight;
    BOOL _shouldCancelAllRequests;
    struct CGColorSpace *_dstColorSpace;
    NSObject<OS_dispatch_queue> *_defaultCIContextThreadSafety;
    CIContext *_defaultCIContext;
}

+ (void)initialize;
@property BOOL shouldCancelAllRequests; // @synthesize shouldCancelAllRequests=_shouldCancelAllRequests;
@property(readonly, nonatomic) BOOL supportsWideColorSourceFrames;
- (void)cancelAllPendingVideoCompositionRequests;
- (void)startVideoCompositionRequest:(id)arg1;
- (id)defaultCIContext;
@property(readonly) NSObject<OS_dispatch_group> *filteringRequestsInFlight; // @synthesize filteringRequestsInFlight=_filteringRequestsInFlight;
- (void)renderContextChanged:(id)arg1;
@property(readonly, nonatomic) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property(readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;
- (void)finalize;
- (void)dealloc;
- (void)_willDeallocOrFinalize;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

