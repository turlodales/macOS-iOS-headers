//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionRequestedReplies : NSObject
{
    struct __CFDictionary *_replyDictionaryTable;
    struct __CFDictionary *_progressTable;
    unsigned long long _requestedReplyCount;
    unsigned char _invalid;
    struct _opaque_pthread_mutex_t _lock;
}

- (id)progressForSequence:(unsigned long long)arg1;
- (void)beginTransactionForSequence:(unsigned long long)arg1 reply:(id)arg2 withProgress:(id)arg3;
- (void)endTransactionForSequence:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end

