//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SUDeferredUpdateManager : NSObject
{
}

- (id)deferralBlacklist;
- (id)deferralWhitelist;
- (long long)managedDeferralTimespanInDays;
- (long long)autoDeferralTimespanInDays;
- (BOOL)deferralIsActive;
- (void)updateProductsWithCatalog:(id)arg1;
- (id)sharedDeferredUpdateManager;

@end

