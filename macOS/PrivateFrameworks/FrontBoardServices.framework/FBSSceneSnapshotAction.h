//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSSceneAction.h>

#import <FrontBoardServices/FBSSceneSnapshotRequestDelegate-Protocol.h>

@class BSSettings, FBSSceneSnapshotRequestHandle, NSMutableArray, NSString;

@interface FBSSceneSnapshotAction : FBSSceneAction <FBSSceneSnapshotRequestDelegate>
{
    NSMutableArray *_requests;
    CDUnknownBlockType _requestHandler;
    CDUnknownBlockType _completionHandler;
    FBSSceneSnapshotRequestHandle *_outgoingRequestHandle;
    int _expired;
    BSSettings *_clientExtendedData;
}

- (void).cxx_destruct;
@property(copy, nonatomic) BSSettings *clientExtendedData; // @synthesize clientExtendedData=_clientExtendedData;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType requestHandler; // @synthesize requestHandler=_requestHandler;
- (Class)fallbackXPCEncodableClass;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (BOOL)snapshotRequest:(id)arg1 performWithContext:(id)arg2;
- (BOOL)snapshotRequestAllowSnapshot:(id)arg1;
- (void)_executeNextRequest;
- (void)_finishAllRequests;
- (BOOL)_remainsActionable;
- (void)setInvalidationHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) double expirationInterval; // @dynamic expirationInterval;
- (void)executeRequestsWithHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2 expirationHandler:(CDUnknownBlockType)arg3;
- (void)setExpired:(BOOL)arg1;
@property(readonly, getter=isExpired) BOOL expired; // @dynamic expired;
- (id)initWithRequests:(id)arg1 expirationInterval:(double)arg2 responseHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

