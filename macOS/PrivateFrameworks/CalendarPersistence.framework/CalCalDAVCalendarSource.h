//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalRemoteCalendarSource.h>

@class CALAddress, NSError, NSManagedObjectID, NSString, NSTimeZone;

@interface CalCalDAVCalendarSource : CalRemoteCalendarSource
{
    NSString *_principalUID;
    NSManagedObjectID *_principalID;
    NSString *_cacheControllerPath;
    NSError *_lastOperationError;
    NSTimeZone *_timeZone;
    CALAddress *_ownerAddress;
    BOOL _isOwnerMe;
}

- (void).cxx_destruct;
@property BOOL isOwnerMe; // @synthesize isOwnerMe=_isOwnerMe;
@property(retain) CALAddress *ownerAddress; // @synthesize ownerAddress=_ownerAddress;
@property(retain) NSManagedObjectID *principalID; // @synthesize principalID=_principalID;
- (BOOL)allowsSchedulingByMe;
- (BOOL)isSourceInSameAccount:(id)arg1 ignoringOwner:(BOOL)arg2;
- (BOOL)isSourceInSameAccount:(id)arg1;
- (void)setCacheControllerPath:(id)arg1;
- (BOOL)removeEntities:(id)arg1 inManagedObjectContext:(id)arg2;
- (BOOL)removeEntity:(id)arg1 inManagedObjectContext:(id)arg2;
- (BOOL)modifyEntities:(id)arg1 inManagedObjectContext:(id)arg2;
- (BOOL)modifyEntity:(id)arg1 inManagedObjectContext:(id)arg2;
- (BOOL)addEntity:(id)arg1 inManagedObjectContext:(id)arg2;
- (BOOL)addEntities:(id)arg1 inManagedObjectContext:(id)arg2;
- (void)queueScanDropBoxContentsForEntity:(id)arg1;
- (id)ownerForSource;
- (id)meForSource;
- (BOOL)hasCapability:(int)arg1;
- (BOOL)hasNoPrincipal;
- (id)backingPrincipalInContext:(id)arg1;
- (id)backingPrincipal;
- (void)setPrincipalUID:(id)arg1;
- (id)principalUID;
- (BOOL)isDelegate;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;
- (BOOL)isCalDAV;
- (id)freeBusyCache;
- (id)initWithKey:(id)arg1;
- (BOOL)removeEntities:(id)arg1 fromServer:(BOOL)arg2 inManagedObjectContext:(id)arg3;
- (BOOL)removeEntity:(id)arg1 fromServer:(BOOL)arg2 inManagedObjectContext:(id)arg3;
- (BOOL)modifyEntities:(id)arg1 fromServer:(BOOL)arg2 inManagedObjectContext:(id)arg3;
- (BOOL)modifyEntity:(id)arg1 fromServer:(BOOL)arg2 inManagedObjectContext:(id)arg3;
- (BOOL)addEntity:(id)arg1 fromServer:(BOOL)arg2 inManagedObjectContext:(id)arg3;
- (BOOL)addEntities:(id)arg1 fromServer:(BOOL)arg2 inManagedObjectContext:(id)arg3;
- (id)debugDescription;

@end

