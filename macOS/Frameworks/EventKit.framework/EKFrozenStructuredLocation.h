//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKFrozenObject.h>

#import "EKProtocolStructuredLocation.h"

@class NSData, NSDictionary, NSManagedObjectID, NSNumber, NSString;

@interface EKFrozenStructuredLocation : EKFrozenObject <EKProtocolStructuredLocation>
{
    NSString *address;
    NSString *abURLString;
    NSString *geoURLString;
    NSString *title;
    NSNumber *radiusNumber;
    NSString *routeType;
    NSData *mapKitHandle;
    NSString *uuid;
}

+ (Class)alternateUniverseClass;
+ (Class)meltedClass;
- (void).cxx_destruct;
@property(readonly, retain) NSString *uuid; // @synthesize uuid;
@property(readonly, copy, nonatomic) NSData *mapKitHandle; // @synthesize mapKitHandle;
@property(readonly, copy, nonatomic) NSString *routeType; // @synthesize routeType;
@property(readonly, copy, nonatomic) NSNumber *radiusNumber; // @synthesize radiusNumber;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title;
@property(readonly, copy, nonatomic) NSString *geoURLString; // @synthesize geoURLString;
@property(readonly, copy, nonatomic) NSString *abURLString; // @synthesize abURLString;
@property(readonly, copy, nonatomic) NSString *address; // @synthesize address;
- (id)initWithObject:(id)arg1 createPartialObject:(BOOL)arg2 preFrozenRelationshipObjects:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isPartialObject;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property(readonly) Class superclass;

@end

