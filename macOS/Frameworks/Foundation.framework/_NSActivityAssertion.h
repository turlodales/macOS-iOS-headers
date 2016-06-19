//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_voucher>, NSString;

__attribute__((visibility("hidden")))
@interface _NSActivityAssertion : NSObject
{
    long long _ended;
    unsigned long long _options;
    NSString *_reason;
    unsigned int _displaySleepAssertionID;
    unsigned int _systemSleepAssertionID;
    NSObject<OS_voucher> *_voucher;
    NSObject<OS_voucher> *_previousVoucher;
    unsigned char _adoptPreviousVoucher;
    id <NSObject> _xpcBoost;
}

+ (void)_performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (void)_dumpExpiringActivitives;
+ (id)_expiringActivities;
+ (id)_expirationHandlerExecutionQueue;
+ (id)_expiringTaskExecutionQueue;
+ (id)_expiringAssertionManagementQueue;
- (void)_reactivate;
- (void)_end;
- (id)debugDescription;
- (void)dealloc;
- (id)_initWithActivityOptions:(unsigned long long)arg1 reason:(id)arg2 expirationHandler:(CDUnknownBlockType)arg3;

@end

