//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBNote.h"

@class NSArray, NSString, _INPBDataString, _INPBDateTime;

@interface _INPBNote : PBCodable <_INPBNote, NSSecureCoding, NSCopying>
{
    struct _has;
    BOOL __encodeLegacyGloryData;
    NSString *_accountIdentifier;
    NSArray *_contents;
    _INPBDateTime *_createdDateTime;
    _INPBDataString *_groupName;
    NSString *_identifier;
    _INPBDateTime *_modifiedDateTime;
    _INPBDataString *_title;
}

+ (BOOL)supportsSecureCoding;
+ (Class)contentType;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(retain, nonatomic) _INPBDataString *title; // @synthesize title=_title;
@property(retain, nonatomic) _INPBDateTime *modifiedDateTime; // @synthesize modifiedDateTime=_modifiedDateTime;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) _INPBDataString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) _INPBDateTime *createdDateTime; // @synthesize createdDateTime=_createdDateTime;
@property(copy, nonatomic) NSArray *contents; // @synthesize contents=_contents;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasTitle;
@property(readonly, nonatomic) BOOL hasModifiedDateTime;
@property(readonly, nonatomic) BOOL hasIdentifier;
@property(readonly, nonatomic) BOOL hasGroupName;
@property(readonly, nonatomic) BOOL hasCreatedDateTime;
- (id)contentAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long contentsCount;
- (void)addContent:(id)arg1;
- (void)clearContents;
@property(readonly, nonatomic) BOOL hasAccountIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

