//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CNCDPersistenceStack : NSObject
{
    CDUnknownBlockType _backendProvider;
    id _notificationSource;
}

+ (void)_createContactsDirectoryIfNeededAtURL:(id)arg1;
+ (id)defaultContactsStoreDirectoryURL;
+ (id)persistenceStackWithPersistentStoreCoordinator:(id)arg1 accountCollection:(id)arg2;
+ (id)persistenceStackWithInMemoryBackend;
+ (id)accountIdentifierFromPersistentStoreURL:(id)arg1;
+ (id)accountIdentifierForManagedObject:(id)arg1;
+ (id)defaultAccountCollection;
+ (id)persistenceStackWithAccountCollection:(id)arg1;
+ (id)os_log_t;
- (void).cxx_destruct;
@property id notificationSource; // @synthesize notificationSource=_notificationSource;
- (id)makePersistenceContext;
- (id)initWithBackendProvider:(CDUnknownBlockType)arg1;

@end

