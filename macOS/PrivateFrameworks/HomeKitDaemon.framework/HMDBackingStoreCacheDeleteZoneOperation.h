//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheZone;

@interface HMDBackingStoreCacheDeleteZoneOperation : HMDBackingStoreOperation
{
    CDUnknownBlockType _creationBlock;
    HMDBackingStoreCacheZone *_zone;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HMDBackingStoreCacheZone *zone; // @synthesize zone=_zone;
@property(copy, nonatomic) CDUnknownBlockType creationBlock; // @synthesize creationBlock=_creationBlock;
- (id)mainReturningError;
- (id)initWithZone:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;

@end

