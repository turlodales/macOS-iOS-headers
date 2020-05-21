//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDZoneGatekeeper : NSObject
{
    NSMutableDictionary *_zoneIDsToGateHolders;
    NSMutableArray *_waiterWrappers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *waiterWrappers; // @synthesize waiterWrappers=_waiterWrappers;
@property(retain, nonatomic) NSMutableDictionary *zoneIDsToGateHolders; // @synthesize zoneIDsToGateHolders=_zoneIDsToGateHolders;
- (id)CKStatusReportArray;
- (BOOL)hasStatusToReport;
- (void)relinquishLocksForWaiter:(id)arg1;
- (void)registerWaiter:(id)arg1 forZoneIDs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;

@end

