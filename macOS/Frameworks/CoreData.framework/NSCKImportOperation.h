//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSSet, NSUUID;

__attribute__((visibility("hidden")))
@interface NSCKImportOperation : NSManagedObject
{
}

+ (id)entityPath;
+ (BOOL)purgeFinishedImportOperationsInStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)fetchOperationWithIdentifier:(id)arg1 fromStore:(id)arg2 inManagedObjectContext:(id)arg3 error:(id *)arg4;
+ (id)fetchUnfinishedImportOperationsInStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(retain, nonatomic) NSData *changeTokenBytes; // @dynamic changeTokenBytes;
@property(retain, nonatomic) NSDate *importDate; // @dynamic importDate;
@property(retain, nonatomic) NSUUID *operationUUID; // @dynamic operationUUID;
@property(retain, nonatomic) NSSet *pendingRelationships; // @dynamic pendingRelationships;

@end

