//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface PAImageCacheEntrySharedValid : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _valid;
}

- (void).cxx_destruct;
@property BOOL valid; // @synthesize valid=_valid;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)init;

@end

