//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNTCC.h"

@interface _CNTCC : NSObject <CNTCC>
{
}

+ (id)stringForCNTCCAccessPreflight:(long long)arg1;
+ (id)stringForCNTCCService:(long long)arg1;
+ (long long)CNTCCAccessPreflightForTCCAccessPreflightResult:(int)arg1;
+ (const struct __CFString *)TCCServiceForCNTCCService:(long long)arg1;
- (BOOL)accessCheckAuditToken:(CDStruct_4c969caf)arg1 forService:(long long)arg2;
- (BOOL)isAccessRestrictedForService:(long long)arg1;
- (long long)accessPreflightForService:(long long)arg1;
- (void)requestAccessForService:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

