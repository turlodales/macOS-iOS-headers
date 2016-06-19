//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKObject.h>

@class NSDate, NSString;

@interface EKSuggestedEventInfo : EKObject
{
    NSString *_opaqueKey;
    NSString *_uniqueKey;
}

+ (id)knownSingleValueKeys;
+ (id)knownIdentityKeys;
+ (BOOL)isDerivedRelationship;
+ (Class)frozenClass;
+ (id)uniqueIdentifierForObject:(id)arg1;
@property(readonly, copy, nonatomic) NSString *uniqueKey; // @synthesize uniqueKey=_uniqueKey;
@property(readonly, copy, nonatomic) NSString *opaqueKey; // @synthesize opaqueKey=_opaqueKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *timestampAsDate;
@property(nonatomic) unsigned long long changedFields;
@property(nonatomic) double timestamp;
- (id)initWithOpaqueKey:(id)arg1 uniqueKey:(id)arg2;
- (id)initWithObject:(id)arg1 createPartialBackingObject:(BOOL)arg2 keepBackingObject:(BOOL)arg3 preFrozenRelationshipObjects:(id)arg4 additionalFrozenProperties:(id)arg5;

@end

