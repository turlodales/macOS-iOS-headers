//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarPersistence/CalOperation.h>

#import <CalendarPersistence/NSSecureCoding-Protocol.h>

@class NSManagedObjectID;

@interface CalPersistentOperation : CalOperation <NSSecureCoding>
{
    NSManagedObjectID *_managedObjectID;
    long long _sequenceNumber;
}

+ (id)managedObjectIDsForURIRepresentations:(id)arg1;
+ (id)managedObjectIDForURIRepresentation:(id)arg1;
+ (id)dearchive:(id)arg1;
+ (id)archive:(id)arg1 inContext:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain) NSManagedObjectID *managedObjectID; // @synthesize managedObjectID=_managedObjectID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

