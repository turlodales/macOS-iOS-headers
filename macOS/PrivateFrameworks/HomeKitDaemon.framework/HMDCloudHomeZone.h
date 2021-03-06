//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDCloudZone.h>

@class HMDCloudShareGroup, NSMutableDictionary;

@interface HMDCloudHomeZone : HMDCloudZone
{
    BOOL _sharedHome;
    HMDCloudShareGroup *_shareGroup;
    NSMutableDictionary *_perUserShareGroups;
}

+ (void)createHomeZoneWithName:(id)arg1 owner:(id)arg2 cacheZone:(id)arg3 cloudCache:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)zoneSubscriptionName:(id)arg1;
+ (id)zoneSharedRootRecordName;
+ (id)zoneRootRecordName;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *perUserShareGroups; // @synthesize perUserShareGroups=_perUserShareGroups;
@property(retain, nonatomic) HMDCloudShareGroup *shareGroup; // @synthesize shareGroup=_shareGroup;
@property(readonly, nonatomic, getter=isSharedHome) BOOL sharedHome; // @synthesize sharedHome=_sharedHome;
- (void)setServerChangeToken:(id)arg1;
- (id)createCloudZoneChangeTemporaryCache:(BOOL)arg1;
- (void)updateCloudRecord:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateCloudRecord:(id)arg1;
- (BOOL)isRootRecord:(id)arg1;
- (void)addCloudRecord:(id)arg1 ownerID:(id)arg2;
- (void)markMigratedObjectsAsMigrated;
- (void)fetchMigratedObjects:(CDUnknownBlockType)arg1;
- (void)allDescendentsCloudRecordsForParentID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cloudRecordsForParentID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cloudRecordWithObjectID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cloudRecordWithObjectIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)description;

@end

