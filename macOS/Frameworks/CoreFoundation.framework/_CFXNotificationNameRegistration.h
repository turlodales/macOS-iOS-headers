//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreFoundation/_CFXNotificationRegistrationContainer.h>

__attribute__((visibility("hidden")))
@interface _CFXNotificationNameRegistration : _CFXNotificationRegistrationContainer
{
    struct __CFString *_name;
}

+ (Class)childClass;
+ (const CDStruct_90be15af *)keyCallbacks;
@property(readonly) struct __CFString *name; // @synthesize name=_name;
- (BOOL)enumerate:(CDUnknownBlockType)arg1;
- (id)acquireObject:(void *)arg1;
- (void)match:(void *)arg1 observer:(void *)arg2 matching:(CDStruct_9fbff6f4 *)arg3;
- (void)find:(void *)arg1 observer:(void *)arg2 matching:(CDStruct_9fbff6f4 *)arg3;
- (void *)key;
- (void)dealloc;
- (id)initWithName:(struct __CFString *)arg1 options:(unsigned long long)arg2 parent:(id)arg3;

@end

