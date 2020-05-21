//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSPersistentStore, NSPersistentStoreCoordinator;

@interface ABAddPersistentStoreResults : NSObject
{
    NSPersistentStoreCoordinator *_coordinator;
    NSPersistentStore *_store;
    BOOL _pristineDatabase;
    BOOL _shouldCache;
    BOOL _didMigrate;
}

@property(readonly) BOOL didMigrate; // @synthesize didMigrate=_didMigrate;
@property(readonly) BOOL shouldCache; // @synthesize shouldCache=_shouldCache;
@property(readonly, getter=isPristineDatabase) BOOL pristineDatabase; // @synthesize pristineDatabase=_pristineDatabase;
@property(readonly) NSPersistentStore *store; // @synthesize store=_store;
@property(readonly) NSPersistentStoreCoordinator *coordinator; // @synthesize coordinator=_coordinator;
- (id)description;
- (void)dealloc;
- (id)initWithCoordinator:(id)arg1 store:(id)arg2 pristineDatabase:(BOOL)arg3 shouldCache:(BOOL)arg4 didMigrate:(BOOL)arg5;

@end

