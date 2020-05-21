//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NURenderer.h"

@class CIContext, NSObject<OS_dispatch_queue>, NSString;

@interface NURenderer : NSObject <NURenderer>
{
    NSObject<OS_dispatch_queue> *_queue;
    CIContext *_context;
}

+ (id)_renderContextOptionsWithOptions:(id)arg1 nameSuffix:(id)arg2;
+ (BOOL)allowClampToAlpha;
+ (BOOL)defaultUseHalfFloat;
+ (int)workingFormat;
+ (struct CGColorSpace *)workingColorSpace;
+ (id)defaultRenderContextOptions;
+ (id)rendererWithMetalDevice:(id)arg1 options:(id)arg2;
+ (id)rendererWithGLContext:(id)arg1 options:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) CIContext *context; // @synthesize context=_context;
- (id)renderDestinationForSurface:(id)arg1 owner:(id)arg2;
- (id)imageForSurface:(id)arg1 options:(id)arg2 owner:(id)arg3;
- (id)renderImage:(id)arg1 rect:(CDStruct_996ac03c)arg2 toDestination:(id)arg3 atPoint:(CDStruct_912cb5d2)arg4 error:(out id *)arg5;
@property(readonly, nonatomic) NSString *name;
@property(readonly, copy) NSString *description;
- (id)initWithCIContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

