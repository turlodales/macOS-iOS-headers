//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface TLAccessQueue : NSObject
{
    NSString *_threadLocalStorageKey;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSString *_label;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
- (void)_performSynchronousBlockInSerialQueue:(CDUnknownBlockType)arg1;
- (void)assertNotRunningInAccessQueue;
- (void)performAsynchronousBlock:(CDUnknownBlockType)arg1;
- (void)performSynchronousBlock:(CDUnknownBlockType)arg1;
- (id)initWithLabel:(id)arg1 appendUUIDToLabel:(BOOL)arg2;

@end

