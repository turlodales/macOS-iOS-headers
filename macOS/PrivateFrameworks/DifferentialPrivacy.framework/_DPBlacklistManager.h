//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DifferentialPrivacy/_DPMaintenance-Protocol.h>

@interface _DPBlacklistManager : NSObject <_DPMaintenance>
{
}

+ (void)processRuntimeBlacklist;
+ (BOOL)createRuntimeBlacklistDirectory:(id)arg1;
+ (BOOL)removeBlacklistFileWithKey:(id)arg1 fromDirectory:(id)arg2;
+ (BOOL)saveBlacklist:(id)arg1 forKey:(id)arg2 runtimeDirectory:(id)arg3;
+ (BOOL)saveBlacklist:(id)arg1 knownVersionByKey:(id)arg2 systemDirectory:(id)arg3 runtimeDirectory:(id)arg4;
+ (unsigned long long)memorySizeWithDirectory:(id)arg1;
+ (unsigned long long)memoryRequiredBySystemBlacklistInDirectory:(id)arg1 runtimeBlacklistInDirectory:(id)arg2 blacklist:(id)arg3;
+ (BOOL)saveBlacklist:(id)arg1 systemDirectory:(id)arg2 runtimeDirectory:(id)arg3 memoryLimit:(unsigned long long)arg4;
+ (BOOL)validateBlacklist:(id)arg1;
+ (BOOL)removeAllFilesFromDirectory:(id)arg1;
+ (id)keepLatestRuntimeBlacklistInDirectory:(id)arg1 compareToSystemBlacklistInDirectory:(id)arg2;
+ (void)processRuntimeBlacklist:(id)arg1 systemDirectory:(id)arg2 runtimeDirectory:(id)arg3 blacklistLengthLimit:(unsigned long long)arg4;
- (void)scheduleMaintenanceWithName:(id)arg1 database:(id)arg2;

@end

