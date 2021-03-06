//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSPersistentStoreCoordinator;

@interface MSExternalUpdatesManager : NSObject
{
    NSObject *_notificationsLock;
    BOOL _registeredForNotifications;
    BOOL _isMail;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSOperationQueue *_operationQueue;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isMail; // @synthesize isMail=_isMail;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
- (id)_managedObjectContext;
- (void)_processLocalAppendAction:(id)arg1;
- (void)processLocalActions;
- (void)_localActionAdded:(id)arg1;
- (BOOL)migrateAccountsWithIdentifierMapping:(id)arg1 error:(id *)arg2;
- (long long)nextSequenceNumber;
- (void)addAction:(id)arg1;
- (void)dealloc;
- (id)init;

@end

