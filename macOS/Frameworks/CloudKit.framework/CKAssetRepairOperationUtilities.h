//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CKAssetRepairOperationUtilities : NSObject
{
}

+ (BOOL)errorShouldTriggerNetworkReachabilityEvent:(id)arg1;
+ (BOOL)errorIsRetriableInNearFuture:(id)arg1;
+ (BOOL)repairErrorShouldBeMarkedAsBroken:(id)arg1;
+ (id)uploadRequestMetadataFromRepairRecord:(id)arg1;
+ (id)repairRecordFromRecord:(id)arg1 field:(id)arg2 listIndex:(long long)arg3 repairZoneID:(id)arg4;
+ (void)clearRepairZoneForDatabase:(id)arg1 withRepairContainerOverrides:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)createRepairContainerFromContainer:(id)arg1 withOverrides:(id)arg2;
+ (id)createRepairContainerFromContainer:(id)arg1;
+ (id)createRepairOperationGroupWithName:(id)arg1;

@end

