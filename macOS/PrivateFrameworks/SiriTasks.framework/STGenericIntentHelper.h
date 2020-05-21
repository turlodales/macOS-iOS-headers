//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>;

@interface STGenericIntentHelper : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_handlers;
    NSObject<OS_dispatch_queue> *_siriResponseQueue;
    NSObject<OS_dispatch_semaphore> *_waitForIntentCompleteSemaphore;
}

+ (id)sharedHelper;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *waitForIntentCompleteSemaphore; // @synthesize waitForIntentCompleteSemaphore=_waitForIntentCompleteSemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *siriResponseQueue; // @synthesize siriResponseQueue=_siriResponseQueue;
@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
- (BOOL)_invokeHandlerForIntent:(id)arg1;
- (void)forIntent:(id)arg1 registerHandler:(CDUnknownBlockType)arg2;
- (void)forIntentParam:(id)arg1 predict:(id)arg2;
- (void)_handleIntent:(id)arg1 withTask:(id)arg2 andApplication:(id)arg3;
- (void)handleSiriTask:(id)arg1 withApplication:(id)arg2;
- (void)finishedLaunching:(BOOL)arg1;
- (id)init;

@end

