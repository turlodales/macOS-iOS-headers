//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBCustomObject.h"

@class NSArray, NSString;

@interface _INPBCustomObject : PBCodable <_INPBCustomObject, NSSecureCoding, NSCopying>
{
    struct _has;
    BOOL __encodeLegacyGloryData;
    NSArray *_alternatives;
    NSString *_displayString;
    NSString *_identifier;
    NSString *_pronunciationHint;
}

+ (BOOL)supportsSecureCoding;
+ (Class)alternativeType;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(copy, nonatomic) NSString *pronunciationHint; // @synthesize pronunciationHint=_pronunciationHint;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *displayString; // @synthesize displayString=_displayString;
@property(copy, nonatomic) NSArray *alternatives; // @synthesize alternatives=_alternatives;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasPronunciationHint;
@property(readonly, nonatomic) BOOL hasIdentifier;
@property(readonly, nonatomic) BOOL hasDisplayString;
- (id)alternativeAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long alternativesCount;
- (void)addAlternative:(id)arg1;
- (void)clearAlternatives;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

