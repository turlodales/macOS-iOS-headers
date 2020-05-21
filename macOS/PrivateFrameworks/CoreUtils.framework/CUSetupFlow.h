//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CUActivatable.h"
#import "CUEnvironmentable.h"

@class CUEndpoint, CUEnvironment, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface CUSetupFlow : NSObject <CUActivatable, CUEnvironmentable>
{
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableArray *_stepArray;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    CUEnvironment *_environment;
    CDUnknownBlockType _errorHandler;
    CUEndpoint *_peerEndpoint;
    CDUnknownBlockType _runHandler;
    unsigned long long _setupFlags;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long setupFlags; // @synthesize setupFlags=_setupFlags;
@property(copy, nonatomic) CDUnknownBlockType runHandler; // @synthesize runHandler=_runHandler;
@property(retain, nonatomic) CUEndpoint *peerEndpoint; // @synthesize peerEndpoint=_peerEndpoint;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) CUEnvironment *environment; // @synthesize environment=_environment;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (BOOL)run;
- (void)reportError:(id)arg1;
- (void)addStep:(id)arg1;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

