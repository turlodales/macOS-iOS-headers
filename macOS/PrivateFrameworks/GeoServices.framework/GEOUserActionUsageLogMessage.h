//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOMapLaunchDetails, GEOMapsServerMetadata, GEOPlaceActionDetails, GEORouteDetails, NSString;

@interface GEOUserActionUsageLogMessage : PBCodable <NSCopying>
{
    int _locationBucket;
    GEOMapLaunchDetails *_mapLaunchDetails;
    GEOPlaceActionDetails *_placeActionDetails;
    NSString *_providerId;
    GEORouteDetails *_routeDetails;
    GEOMapsServerMetadata *_serverMetadata;
    int _uiTarget;
    NSString *_usageEventKey;
    NSString *_usageEventValue;
    struct {
        unsigned int locationBucket:1;
        unsigned int uiTarget:1;
    } _has;
}

@property(retain, nonatomic) GEOMapsServerMetadata *serverMetadata; // @synthesize serverMetadata=_serverMetadata;
@property(retain, nonatomic) GEOMapLaunchDetails *mapLaunchDetails; // @synthesize mapLaunchDetails=_mapLaunchDetails;
@property(retain, nonatomic) GEORouteDetails *routeDetails; // @synthesize routeDetails=_routeDetails;
@property(retain, nonatomic) GEOPlaceActionDetails *placeActionDetails; // @synthesize placeActionDetails=_placeActionDetails;
@property(retain, nonatomic) NSString *providerId; // @synthesize providerId=_providerId;
@property(retain, nonatomic) NSString *usageEventValue; // @synthesize usageEventValue=_usageEventValue;
@property(retain, nonatomic) NSString *usageEventKey; // @synthesize usageEventKey=_usageEventKey;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsUiTarget:(id)arg1;
- (id)uiTargetAsString:(int)arg1;
@property(nonatomic) BOOL hasUiTarget;
@property(nonatomic) int uiTarget; // @synthesize uiTarget=_uiTarget;
- (int)StringAsLocationBucket:(id)arg1;
- (id)locationBucketAsString:(int)arg1;
@property(nonatomic) BOOL hasLocationBucket;
@property(nonatomic) int locationBucket; // @synthesize locationBucket=_locationBucket;
@property(readonly, nonatomic) BOOL hasServerMetadata;
@property(readonly, nonatomic) BOOL hasMapLaunchDetails;
@property(readonly, nonatomic) BOOL hasRouteDetails;
@property(readonly, nonatomic) BOOL hasPlaceActionDetails;
@property(readonly, nonatomic) BOOL hasProviderId;
@property(readonly, nonatomic) BOOL hasUsageEventValue;
@property(readonly, nonatomic) BOOL hasUsageEventKey;
- (void)dealloc;

@end

