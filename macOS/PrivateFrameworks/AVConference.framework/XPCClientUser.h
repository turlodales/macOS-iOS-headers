//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface XPCClientUser : NSObject
{
    NSObject<OS_dispatch_queue> *queue;
    CDUnknownBlockType block;
    int _eventLogLevel;
}

@property(nonatomic) int eventLogLevel; // @synthesize eventLogLevel=_eventLogLevel;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue;
- (void)dealloc;
- (id)init;

@end

