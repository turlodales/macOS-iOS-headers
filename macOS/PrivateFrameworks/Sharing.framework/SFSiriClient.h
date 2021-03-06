//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface SFSiriClient : NSObject
{
    BOOL _invalidateCalled;
    unsigned int _invalidateFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _siriDialogHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType siriDialogHandler; // @synthesize siriDialogHandler=_siriDialogHandler;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)deviceSetupPlayGreetingID:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deviceSetupPrepareGreeting:(CDUnknownBlockType)arg1;
- (void)_deviceSetupEnd;
- (void)deviceSetupEnd;
- (void)deviceSetupBegin:(unsigned long long)arg1;
- (void)stopSpeaking;
- (void)speakText:(id)arg1 flags:(unsigned int)arg2 rate:(double)arg3 delay:(double)arg4 startHandler:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)speakText:(id)arg1 languageCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)speakText:(id)arg1 rate:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)speakText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)speakPasscode:(id)arg1 instructions:(id)arg2 languageCode:(id)arg3 flags:(unsigned int)arg4 completion:(CDUnknownBlockType)arg5;
- (void)speakDeviceSetupWelcomePhaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)preWarmDeviceSetupWelcomePhaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidate;
- (void)invalidateWithFlags:(unsigned int)arg1;
- (void)invalidate;
- (void)_activate;
- (void)activate;
- (id)init;

@end

