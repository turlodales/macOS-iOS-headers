//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPersistentStoreCoordinator.h"

@interface NSPersistentStoreCoordinator (CoreDataSync)
+ (void)syncservices_removeIVarsForCoordinator:(id)arg1;
+ (id)syncservices_valueForKey:(id)arg1 inCoordinator:(id)arg2;
+ (void)syncservices_setValue:(id)arg1 forKey:(id)arg2 inCoordinator:(id)arg3;
- (void)syncservices_storeWasRemoved:(id)arg1;
- (void)setStoresFastSyncDetailsAtURL:(id)arg1 forPersistentStore:(id)arg2;
- (BOOL)syncWithClient:(id)arg1 inBackground:(BOOL)arg2 handler:(id)arg3 error:(id *)arg4;
@end

