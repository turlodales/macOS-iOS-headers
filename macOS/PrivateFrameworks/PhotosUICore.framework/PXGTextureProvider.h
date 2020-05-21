//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXImageDataSpecRegistration.h"

@class NSIndexSet, NSMutableIndexSet, NSObject<OS_dispatch_queue>, NSString, PXGViewEnvironment;

@interface PXGTextureProvider : NSObject <PXImageDataSpecRegistration>
{
    NSMutableIndexSet *_lookupLock_activeRequests;
    struct os_unfair_lock_s _lookupLock;
    CDStruct_1b544862 *_imageDataSpecs;
    long long _imageDataSpecsCount;
    long long _imageDataSpecsCapacity;
    void **_textureAtlasManagers;
    CDStruct_1b544862 _lastImageDataSpec;
    long long _lastImageDataSpecIndex;
    NSMutableIndexSet *_requestIDsPendingCancellation;
    PXGViewEnvironment *_viewEnvironment;
    NSIndexSet *_requestIDsInTargetRect;
    id <PXGTextureProviderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_requestQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_processingQueue;
    CDStruct_efb11229 _interactionState;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // @synthesize requestQueue=_requestQueue;
@property(nonatomic) __weak id <PXGTextureProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSIndexSet *requestIDsInTargetRect; // @synthesize requestIDsInTargetRect=_requestIDsInTargetRect;
@property(nonatomic) CDStruct_efb11229 interactionState; // @synthesize interactionState=_interactionState;
@property(retain, nonatomic) PXGViewEnvironment *viewEnvironment; // @synthesize viewEnvironment=_viewEnvironment;
- (void)clearTextureAtlasManagerCache;
- (void)setTextureAtlasManager:(id)arg1 atSpecIndex:(long long)arg2;
- (id)textureAtlasManagerAtSpecIndex:(long long)arg1;
- (long long)requestQueue_indexForImageDataSpec:(CDStruct_1b544862)arg1;
- (CDStruct_1b544862)imageDataSpecAtIndex:(long long)arg1;
- (long long)registerImageDataSpec:(CDStruct_1b544862)arg1;
- (void)registerImageDataSpecs:(id)arg1;
- (void)prepareImageDataSpecs;
- (void)providePayload:(id)arg1 forRequestID:(int)arg2;
- (void)setNeedsUnregisterFromDisplayLinkUpdates;
- (void)setNeedsRegisterToDisplayLinkUpdates;
- (void)providePixelBuffer:(struct __CVBuffer *)arg1 orientationTransform:(struct CGAffineTransform)arg2 forRequestID:(int)arg3;
- (void)provideImageData:(id)arg1 withSpecAtIndex:(long long)arg2 bytesPerRow:(unsigned long long)arg3 contentsRect:(struct CGRect)arg4 forRequestID:(int)arg5;
- (void)provideCGImage:(struct CGImage *)arg1 forRequestID:(int)arg2;
- (void)provideCGImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2 forRequestID:(int)arg3;
- (void)provideNothingForRequestID:(int)arg1;
- (void)requestUpdatedTexturesForDisplayLink:(id)arg1;
- (BOOL)isRequestActive:(int)arg1;
- (void)performDeferredCancellations;
- (void)cancelTextureRequestDeferred:(int)arg1;
- (void)didFinishRequestingTextures;
- (void)cancelTextureRequests:(id)arg1;
- (struct _NSRange)requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 geometries:(CDStruct_ac168a83 *)arg2 styles:(CDStruct_506f5052 *)arg3 infos:(CDStruct_9d1ebe49 *)arg4 inLayout:(id)arg5;
- (void)interactionStateDidChange:(CDStruct_efb11229)arg1;
- (void)viewEnvironmentDidChange:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

