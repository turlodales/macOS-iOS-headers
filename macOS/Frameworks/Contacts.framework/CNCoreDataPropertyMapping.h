//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNRecordCoreDataPredicateMapping.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CNCoreDataPropertyMapping : NSObject <CNRecordCoreDataPredicateMapping>
{
    NSString *_coreDataPredicateKeyPath;
    NSDictionary *_subCoreDataPredicatePropertiesByKey;
    Class _valueClass;
    NSDictionary *_coreDataBitMaskedValuesMap;
    long long _coreDataBitMask;
}

+ (id)mappingWithCoreDataKeyPath:(id)arg1 valueClass:(Class)arg2 subProperties:(id)arg3;
+ (id)mappingWithCoreDataKeyPath:(id)arg1 valueClass:(Class)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *coreDataBitMaskedValuesMap; // @synthesize coreDataBitMaskedValuesMap=_coreDataBitMaskedValuesMap;
@property(readonly, nonatomic) long long coreDataBitMask; // @synthesize coreDataBitMask=_coreDataBitMask;
@property(readonly, nonatomic) Class valueClass; // @synthesize valueClass=_valueClass;
@property(readonly, nonatomic) NSDictionary *subCoreDataPredicatePropertiesByKey; // @synthesize subCoreDataPredicatePropertiesByKey=_subCoreDataPredicatePropertiesByKey;
@property(readonly, copy, nonatomic) NSString *coreDataPredicateKeyPath; // @synthesize coreDataPredicateKeyPath=_coreDataPredicateKeyPath;
- (id)coreDataRelationshipKeyPathsToFetch;
@property(readonly, nonatomic) BOOL isRelationship;
@property(readonly, nonatomic) BOOL isMultiValue;
- (id)initWithCoreDataKeyPath:(id)arg1 valueClass:(Class)arg2 subProperties:(id)arg3;
- (id)initWithCoreDataKeyPath:(id)arg1 valueClass:(Class)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

