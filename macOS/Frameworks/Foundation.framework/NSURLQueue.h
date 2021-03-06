//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLQueueNode;

__attribute__((visibility("hidden")))
@interface NSURLQueue : NSObject
{
    unsigned long long count;
    NSURLQueueNode *head;
    NSURLQueueNode *tail;
    id monitor;
    BOOL waitOnTake;
    BOOL _pad1;
    BOOL _pad2;
    BOOL _pad3;
}

+ (id)newNode;
- (void)setWaitOnTake:(BOOL)arg1;
- (BOOL)waitOnTake;
- (unsigned long long)count;
- (BOOL)isEmpty;
- (long long)indexOf:(id)arg1;
- (void)clear;
- (BOOL)remove:(id)arg1;
- (id)peekAt:(unsigned long long)arg1;
- (id)peek;
- (id)take;
- (void)put:(id)arg1;
- (void)dealloc;
- (id)init;

@end

