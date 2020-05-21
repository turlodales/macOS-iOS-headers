//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBShowHomeIntent.h"

@class NSArray, NSString, _INPBDateTimeRange, _INPBIntentMetadata;

@interface _INPBShowHomeIntent : PBCodable <_INPBShowHomeIntent, NSSecureCoding, NSCopying>
{
    struct _has;
    BOOL __encodeLegacyGloryData;
    NSArray *_filters;
    _INPBIntentMetadata *_intentMetadata;
    _INPBDateTimeRange *_time;
}

+ (BOOL)supportsSecureCoding;
+ (Class)filtersType;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(retain, nonatomic) _INPBDateTimeRange *time; // @synthesize time=_time;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(copy, nonatomic) NSArray *filters; // @synthesize filters=_filters;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasTime;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
- (id)filtersAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long filtersCount;
- (void)addFilters:(id)arg1;
- (void)clearFilters;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

