//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionExpectedReplies : NSObject
{
    struct __CFDictionary *_replyTable;
    struct _opaque_pthread_mutex_t _lock;
    unsigned long long _sequence;
}

- (id)progressForSequence:(unsigned long long)arg1;
- (void)removeProgressSequence:(unsigned long long)arg1;
- (unsigned long long)sequenceForProgress:(id)arg1;
- (void)dealloc;
- (id)init;

@end

