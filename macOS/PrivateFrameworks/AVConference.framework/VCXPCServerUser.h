//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCXPCServerUser : NSObject
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

