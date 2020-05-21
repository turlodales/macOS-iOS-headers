//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/_CFXNotificationRegistrationBase.h>

__attribute__((visibility("hidden")))
@interface _CFXNotificationTokenRegistration : _CFXNotificationRegistrationBase
{
    unsigned long long _token;
    unsigned long long _options;
    CDUnknownBlockType _handler;
    // Error parsing type: Ac, name: _registered
}

+ (id)createTokenRegistration:(int)arg1 token:(unsigned long long)arg2 connection:(id)arg3 notifyToken:(int)arg4 options:(unsigned long long)arg5 queue:(id)arg6 handler:(CDUnknownBlockType)arg7;
+ (const CDStruct_90be15af *)keyCallbacks;
@property(readonly) unsigned long long options; // @synthesize options=_options;
@property(readonly) unsigned long long token; // @synthesize token=_token;
@property(readonly, copy) CDUnknownBlockType handler;
@property(retain) id queue; // @dynamic queue;
- (CDUnknownBlockType)copyHandler;
@property(readonly) void *observer;
@property(readonly) void *object;
@property(readonly) struct __CFString *name;
- (void)_removeFromParent;
- (void)removeFromParent:(unsigned long long)arg1;
- (void)addToObserver:(id)arg1;
- (void *)key;
- (void)dealloc;
- (void)_invalidate;
- (void)invalidate;
@property(readonly, getter=isRegistered) BOOL registered;
- (id)initWithToken:(unsigned long long)arg1 options:(unsigned long long)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;

@end

