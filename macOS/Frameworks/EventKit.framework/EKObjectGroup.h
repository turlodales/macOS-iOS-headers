//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CalDefaultDictionary, NSDictionary, NSMutableDictionary;

@interface EKObjectGroup : NSObject
{
    NSDictionary *_originalObjectMap;
    NSMutableDictionary *_objectMap;
    CalDefaultDictionary *_spawnedObjectIdentifiers;
}

+ (id)_identifierForObject:(id)arg1;
+ (id)_objectMapForObjects:(id)arg1;
@property(retain) CalDefaultDictionary *spawnedObjectIdentifiers; // @synthesize spawnedObjectIdentifiers=_spawnedObjectIdentifiers;
@property(retain) NSMutableDictionary *objectMap; // @synthesize objectMap=_objectMap;
@property(retain) NSDictionary *originalObjectMap; // @synthesize originalObjectMap=_originalObjectMap;
- (void).cxx_destruct;
- (id)description;
- (id)originalObjects;
- (id)objects;
- (id)objectIdentifiers;
- (id)shiftedOccurrencePreviouslySpawnedByIdentifier:(id)arg1;
- (void)newObject:(id)arg1 spawnedFromObject:(id)arg2;
- (BOOL)objectsBelongInGroup:(id)arg1;
- (BOOL)_newSeriesSpawnedWithObject:(id)arg1;
- (id)initWithObjects:(id)arg1;

@end

