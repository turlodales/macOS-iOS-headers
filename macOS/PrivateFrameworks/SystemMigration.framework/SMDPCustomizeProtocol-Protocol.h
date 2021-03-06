//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SystemMigration/SystemMigrationDaemonProtocol-Protocol.h>

@class NSArray, NSNumber, NSString;

@protocol SMDPCustomizeProtocol <SystemMigrationDaemonProtocol>
- (void)cancelSizingForSystemID:(id)arg1;
- (void)hasCustomPathsForSourceSystem:(id)arg1 andDestinationSystem:(id)arg2 reply:(void (^)(BOOL))arg3;
- (void)informationForBundlesAtPaths:(NSArray *)arg1 onSourceSystem:(id)arg2 andDestinationSystem:(id)arg3 reply:(void (^)(NSDictionary *, NSDictionary *))arg4;
- (void)sizeForCustomPathType:(unsigned long long)arg1 user:(NSString *)arg2 onSourceSystem:(id)arg3 andDestinationSystem:(id)arg4 reply:(void (^)(NSNumber *))arg5;
- (void)sizeForComponent:(NSNumber *)arg1 onSourceSystem:(id)arg2 andDestinationSystem:(id)arg3 reply:(void (^)(NSNumber *))arg4;
- (void)sizeForPathGroup:(unsigned long long)arg1 onSourceSystem:(id)arg2 andDestinationSystem:(id)arg3 reply:(void (^)(NSNumber *))arg4;
- (void)sizeAllUsersForSystem:(id)arg1 includingVaultUsers:(BOOL)arg2;
- (void)initiateCustomizationOfSystem:(id)arg1;
@end

