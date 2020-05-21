//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface FigCPEFPAirPlaySession : NSObject
{
    BOOL _invalid;
    unsigned int _fairPlayContext;
    NSDictionary *_protectionInfo;
    NSDictionary *_contentInfo;
    struct __CFAllocator *_fairPlayDeallocator;
    struct OpaqueFigEndpointPlaybackSession *_playbackSession;
    NSString *_mediaControlUUID;
    unsigned int _vodkaVersion;
    struct FPStreamOpaque_ *_fairPlaySession;
    NSObject<OS_dispatch_queue> *_serializationQueue;
}

- (void)endSession;
- (void)beginSessionWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)authorizeItemCompletionHandler_objc:(CDStruct_82af879e *)arg1 picData:(struct __CFData *)arg2 playerGUID:(struct __CFString *)arg3 error:(int)arg4;
- (id)copyValueForSINF:(id)arg1 property:(id)arg2 error:(int *)arg3;
- (id)copyValueFromSinfsArray:(id)arg1 forProperty:(id)arg2 error:(int *)arg3;
- (id)legacySinfs;
- (id)mediaControlParamsWithStoreResponse:(id)arg1;
- (id)sicWithPic:(id)arg1;
- (id)createPicRequestWithError:(id *)arg1;
- (void)dealloc;
- (id)initWithFairPlayContext:(unsigned int)arg1 routeInfo:(id)arg2 playbackSession:(struct OpaqueFigEndpointPlaybackSession *)arg3 mediaControlUUID:(id)arg4;
- (id)initWithFairPlayContext:(unsigned int)arg1 contentInfo:(id)arg2 routeInfo:(id)arg3 playbackSession:(struct OpaqueFigEndpointPlaybackSession *)arg4 mediaControlUUID:(id)arg5;
- (id)initWithFairPlayContext:(unsigned int)arg1 protectionInfo:(id)arg2 routeInfo:(id)arg3 playbackSession:(struct OpaqueFigEndpointPlaybackSession *)arg4 mediaControlUUID:(id)arg5;

@end

