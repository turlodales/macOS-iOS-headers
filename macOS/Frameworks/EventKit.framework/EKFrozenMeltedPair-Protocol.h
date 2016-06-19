//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKChangeSet, EKEventStore, EKFrozenObject, EKObject, NSSet, NSString;

@protocol EKFrozenMeltedPair <NSObject>
+ (Class)meltedClass;
+ (Class)frozenClass;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
@property(readonly, nonatomic) BOOL isPartialObject;
@property(readonly, nonatomic) BOOL isFrozen;
- (BOOL)isEqual:(id <EKFrozenMeltedPair>)arg1 ignoringProperties:(NSSet *)arg2;
- (BOOL)isCompletelyEqual:(id <EKFrozenMeltedPair>)arg1;
- (id)valueForKey:(NSString *)arg1;
- (void)setValue:(id)arg1 forKey:(NSString *)arg2;
- (EKObject *)meltedObjectInStore:(EKEventStore *)arg1;
- (BOOL)isPropertyUnavailable:(NSString *)arg1;
- (EKFrozenObject *)frozenObject;
- (EKObject *)existingMeltedObject;
- (EKChangeSet *)changeSet;
- (id)initWithObject:(id <EKProtocolObject>)arg1;
@end

