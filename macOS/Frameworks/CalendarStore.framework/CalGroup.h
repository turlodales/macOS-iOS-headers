//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class CalStoreRemoteManagedObject, NSString, NSURL;

@interface CalGroup : NSObject <NSCopying>
{
    NSString *_managedObjectIDString;
    void *_reserved;
    NSString *_title;
    NSString *_type;
    NSString *_uid;
    NSURL *_serverURL;
    NSURL *_externalServerURL;
    NSString *_emailAddress;
    NSString *_fullName;
}

+ (id)groupWithType:(id)arg1;
+ (id)group;
+ (id)groupFromRemoteManagedObject:(id)arg1;
+ (id)_loginFromURL:(id)arg1;
+ (id)_convertURLFromManagedServerURL:(id)arg1 withLogin:(id)arg2;
@property(copy) NSString *fullName; // @synthesize fullName=_fullName;
@property(copy) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(copy) NSURL *externalServerURL; // @synthesize externalServerURL=_externalServerURL;
@property(copy) NSURL *serverURL; // @synthesize serverURL=_serverURL;
@property(readonly) NSString *uid; // @synthesize uid=_uid;
@property(readonly) NSString *type; // @synthesize type=_type;
@property(copy) NSString *title; // @synthesize title=_title;
- (BOOL)localMigrationIsInProgress;
- (void)_setIsMarkedForDeletion:(BOOL)arg1;
- (BOOL)_isMarkedForDeletion;
- (void)setManagedObjectIDString:(id)arg1;
- (id)managedObjectIDString;
- (BOOL)isValidIAGroup;
- (void)setPassword:(id)arg1;
- (void)_setPassword:(id)arg1;
- (id)password;
- (void)_setPrincipalURL:(id)arg1;
- (id)principalURL;
- (void)setExchangeAutodiscoverURL:(id)arg1;
- (id)exchangeAutodiscoverURL;
- (void)setExchangeRootFolderID:(id)arg1;
- (id)exchangeRootFolderID;
- (void)setIsDelegate:(BOOL)arg1;
- (BOOL)isDelegate;
- (void)setIsManuallyConfigured:(BOOL)arg1;
- (BOOL)isManuallyConfigured;
- (void)setUseKerberos:(BOOL)arg1;
- (BOOL)useKerberos;
- (void)setAcAccountID:(id)arg1;
- (id)acAccountID;
- (void)setIsEnabledForReminders:(BOOL)arg1;
- (BOOL)isEnabledForReminders;
- (void)setIsEnabledForCalendar:(BOOL)arg1;
- (BOOL)isEnabledForCalendar;
- (void)finalize;
- (id)initWithUID:(id)arg1 type:(id)arg2;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)init;
@property(readonly) CalStoreRemoteManagedObject *managedObject;
- (id)remoteManagedGroupFromGroup;

@end

