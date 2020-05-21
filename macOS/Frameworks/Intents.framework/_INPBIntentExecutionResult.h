//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBIntentExecutionResult.h"

@class NSString;

@interface _INPBIntentExecutionResult : PBCodable <_INPBIntentExecutionResult, NSSecureCoding, NSCopying>
{
    CDStruct_a8e956ad _has;
    BOOL __encodeLegacyGloryData;
    int _encodingFormat;
    NSString *_encodedIntent;
    NSString *_encodedIntentResponse;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(nonatomic) int encodingFormat; // @synthesize encodingFormat=_encodingFormat;
@property(copy, nonatomic) NSString *encodedIntentResponse; // @synthesize encodedIntentResponse=_encodedIntentResponse;
@property(copy, nonatomic) NSString *encodedIntent; // @synthesize encodedIntent=_encodedIntent;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)StringAsEncodingFormat:(id)arg1;
- (id)encodingFormatAsString:(int)arg1;
@property(nonatomic) BOOL hasEncodingFormat;
@property(readonly, nonatomic) BOOL hasEncodedIntentResponse;
@property(readonly, nonatomic) BOOL hasEncodedIntent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

