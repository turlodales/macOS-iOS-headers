//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface EFObjectPool : NSObject
{
    NSMutableArray *_storage;
    CDUnknownBlockType _generator;
    CDUnknownBlockType _tearDown;
    struct os_unfair_lock_s _lock;
}

- (void).cxx_destruct;
- (void)releaseObject:(id)arg1;
- (id)acquireObject;
- (id)initWithCapacity:(unsigned long long)arg1 generator:(CDUnknownBlockType)arg2 tearDown:(CDUnknownBlockType)arg3;
- (id)initWithGenerator:(CDUnknownBlockType)arg1 tearDown:(CDUnknownBlockType)arg2;

@end

