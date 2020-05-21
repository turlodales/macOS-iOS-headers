//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSAttributeDescription.h>

@class NSExpression, NSPredicate;

@interface NSDerivedAttributeDescription : NSAttributeDescription
{
    NSExpression *_derivationExpression;
    NSPredicate *_filteringPredicate;
}

+ (BOOL)supportsSecureCoding;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7;
- (void)_validateKeypaths:(id)arg1;
- (void)_versionHash:(char *)arg1 inStyle:(unsigned long long)arg2;
- (void)_createCachesAndOptimizeState;
- (void)setRenamingIdentifier:(id)arg1;
- (void)setDefaultValue:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)_isSchemaEqual:(id)arg1;
- (void)setFilteringPredicate:(id)arg1;
- (id)filteringPredicate;
@property(retain) NSExpression *derivationExpression;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setReadOnly:(BOOL)arg1;
- (BOOL)isReadOnly;
- (void)setTransient:(BOOL)arg1;
- (BOOL)isTransient;
- (id)description;
- (unsigned long long)_propertyType;
- (void)dealloc;

@end

