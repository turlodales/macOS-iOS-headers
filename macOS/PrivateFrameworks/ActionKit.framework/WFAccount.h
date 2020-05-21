//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTLModel.h"

#import "NSSecureCoding.h"

@class NSDate, NSString;

@interface WFAccount : MTLModel <NSSecureCoding>
{
    NSString *_accountID;
    NSDate *_createdAt;
    NSDate *_updatedAt;
}

+ (BOOL)allowsMultipleAccounts;
+ (Class)loginViewControllerClass;
+ (id)localizedServiceName;
+ (id)serviceID;
+ (BOOL)supportsSecureCoding;
+ (void)removeAccountObserver:(id)arg1;
+ (id)addAccountObserver:(CDUnknownBlockType)arg1;
+ (void)notifyAccountsChanged;
+ (BOOL)deleteAccount:(id)arg1;
+ (BOOL)saveAccount:(id)arg1;
+ (id)_accounts;
+ (unsigned long long)_numberOfAccounts;
+ (id)accounts;
+ (unsigned long long)numberOfAccounts;
+ (void)handleChangeForService:(id)arg1;
+ (void)addAccountObserver:(CDUnknownBlockType)arg1 forService:(id)arg2;
+ (void)setShouldIgnoreNotificationForService:(id)arg1;
+ (BOOL)shouldIgnoreNotificationForService:(id)arg1;
+ (void)useAccountObservers:(CDUnknownBlockType)arg1;
+ (id)pendingIgnoredNotifications;
+ (id)accountCache;
+ (id)migrate:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDate *updatedAt; // @synthesize updatedAt=_updatedAt;
@property(readonly, copy, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(readonly, copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void)invalidateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)refreshWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
@property(readonly, copy, nonatomic) NSString *localizedName;
- (id)init;

@end

