//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBNoteContent.h"

@class NSString, _INPBImageNoteContent, _INPBTextNoteContent;

@interface _INPBNoteContent : PBCodable <_INPBNoteContent, NSSecureCoding, NSCopying>
{
    CDStruct_f953fb60 _has;
    BOOL __encodeLegacyGloryData;
    int _type;
    _INPBImageNoteContent *_image;
    _INPBTextNoteContent *_text;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) _INPBTextNoteContent *text; // @synthesize text=_text;
@property(retain, nonatomic) _INPBImageNoteContent *image; // @synthesize image=_image;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(readonly, nonatomic) BOOL hasText;
@property(readonly, nonatomic) BOOL hasImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

