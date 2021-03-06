//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAppleEventDescriptor;

@interface NSAppleEventManager : NSObject
{
    BOOL _isPreparedForDispatch;
    char _padding[3];
}

+ (id)sharedAppleEventManager;
+ (BOOL)_eventAccessGroups:(id)arg1 matchesDefinitionGroups:(id)arg2;
- (void)resumeWithSuspensionID:(struct __NSAppleEventManagerSuspension *)arg1;
- (void)setCurrentAppleEventAndReplyEventWithSuspensionID:(struct __NSAppleEventManagerSuspension *)arg1;
- (id)replyAppleEventForSuspensionID:(struct __NSAppleEventManagerSuspension *)arg1;
- (id)appleEventForSuspensionID:(struct __NSAppleEventManagerSuspension *)arg1;
- (const struct __NSAppleEventManagerSuspension *)suspendCurrentAppleEvent;
@property(readonly, retain) NSAppleEventDescriptor *currentReplyAppleEvent;
@property(readonly, retain) NSAppleEventDescriptor *currentAppleEvent;
- (short)dispatchRawAppleEvent:(const struct AEDesc *)arg1 withRawReply:(struct AEDesc *)arg2 handlerRefCon:(void *)arg3;
- (void)removeEventHandlerForEventClass:(unsigned int)arg1 andEventID:(unsigned int)arg2;
- (void)setEventHandler:(id)arg1 andSelector:(SEL)arg2 forEventClass:(unsigned int)arg3 andEventID:(unsigned int)arg4;
- (id)init;
- (void)_prepareForDispatch;
- (void)_setEventSecurityHandler:(id)arg1 andSelector:(SEL)arg2 forEventClass:(unsigned int)arg3 andEventID:(unsigned int)arg4;
- (void)_resumeIfNotTopHandling:(id)arg1 withScriptCommandResult:(id)arg2;
- (void)_suspendIfTopHandling:(id)arg1;
- (BOOL)_popIfTopHandling:(id)arg1;
- (id)_poppedTopHandling;
- (void)_pushHandling:(id)arg1;
- (id)_topHandling;
- (id)_perThreadHandlingStack:(BOOL)arg1;

@end

