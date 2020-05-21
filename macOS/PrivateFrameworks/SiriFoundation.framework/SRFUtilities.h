//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SRFUtilities : NSObject
{
}

+ (BOOL)canLookupMachService:(id)arg1;
+ (BOOL)canWriteHomeRelativePath:(id)arg1;
+ (BOOL)canReadHomeRelativePath:(id)arg1;
+ (BOOL)canWritePreferenceDomain:(id)arg1;
+ (BOOL)canReadPreferenceDomain:(id)arg1;
+ (BOOL)hasEntitlement:(id)arg1;
+ (BOOL)_taskHasMachLookup:(struct __SecTask *)arg1 forGlobalName:(id)arg2;
+ (BOOL)_taskHasHomeRelativePathReadOnly:(struct __SecTask *)arg1 forPath:(id)arg2;
+ (BOOL)_taskHasHomeRelativePathReadWrite:(struct __SecTask *)arg1 forPath:(id)arg2;
+ (BOOL)_taskHasSharedPreferenceReadOnly:(struct __SecTask *)arg1 forDomain:(id)arg2;
+ (BOOL)_taskHasSharedPreferenceReadWrite:(struct __SecTask *)arg1 forDomain:(id)arg2;
+ (BOOL)_taskHasAppSandbox:(struct __SecTask *)arg1;
+ (BOOL)isShieldWindowShowing;
+ (BOOL)isFastUserSwitching;

@end

