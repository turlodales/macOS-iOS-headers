//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBConflictingParameter.h"

@class NSArray, NSString;

@interface _INPBConflictingParameter : PBCodable <_INPBConflictingParameter, NSSecureCoding, NSCopying>
{
    struct _has;
    BOOL __encodeLegacyGloryData;
    NSArray *_alternateItems;
    NSString *_keyPath;
}

+ (BOOL)supportsSecureCoding;
+ (Class)alternateItemsType;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(copy, nonatomic) NSArray *alternateItems; // @synthesize alternateItems=_alternateItems;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasKeyPath;
- (id)alternateItemsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long alternateItemsCount;
- (void)addAlternateItems:(id)arg1;
- (void)clearAlternateItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

