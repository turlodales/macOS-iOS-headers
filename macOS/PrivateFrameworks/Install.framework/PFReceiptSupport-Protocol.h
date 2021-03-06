//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class IFInstallPlan, NSArray, NSDictionary, NSString, NSTask, PFModule;

@protocol PFReceiptSupport
+ (BOOL)receiptExistsForIdentifier:(NSString *)arg1 withObject:(id)arg2 onVolumeOrHomeDir:(NSString *)arg3;
+ (PFModule *)receiptModuleForIdentifier:(NSString *)arg1 withObject:(id)arg2 onVolumeOrHomeDir:(NSString *)arg3 error:(id *)arg4;
+ (NSArray *)receiptIdentifiersForVolume:(NSString *)arg1;
- (NSDictionary *)createReceipt:(NSString *)arg1 withPlan:(IFInstallPlan *)arg2;
- (NSTask *)taskToCreateReceipt:(NSString *)arg1 withPlan:(IFInstallPlan *)arg2;
@end

