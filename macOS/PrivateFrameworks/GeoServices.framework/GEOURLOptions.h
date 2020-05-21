//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "GEOURLSerializable.h"
#import "NSCopying.h"

@class GEOURLCamera, GEOURLCenterSpan, GEOURLRouteHandle, GEOURLTimePoint, NSString, PBDataReader;

@interface GEOURLOptions : PBCodable <GEOURLSerializable, NSCopying>
{
    PBDataReader *_reader;
    GEOURLCamera *_camera;
    GEOURLCenterSpan *_centerSpan;
    NSString *_referralIdentifier;
    GEOURLRouteHandle *_routeHandle;
    GEOURLTimePoint *_timePoint;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _mapType;
    int _transportType;
    int _userTrackingMode;
    BOOL _connectedToCar;
    BOOL _enableTraffic;
    struct {
        unsigned int has_mapType:1;
        unsigned int has_transportType:1;
        unsigned int has_userTrackingMode:1;
        unsigned int has_connectedToCar:1;
        unsigned int has_enableTraffic:1;
        unsigned int read_camera:1;
        unsigned int read_centerSpan:1;
        unsigned int read_referralIdentifier:1;
        unsigned int read_routeHandle:1;
        unsigned int read_timePoint:1;
        unsigned int wrote_camera:1;
        unsigned int wrote_centerSpan:1;
        unsigned int wrote_referralIdentifier:1;
        unsigned int wrote_routeHandle:1;
        unsigned int wrote_timePoint:1;
        unsigned int wrote_mapType:1;
        unsigned int wrote_transportType:1;
        unsigned int wrote_userTrackingMode:1;
        unsigned int wrote_connectedToCar:1;
        unsigned int wrote_enableTraffic:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL hasConnectedToCar;
@property(nonatomic) BOOL connectedToCar;
@property(retain, nonatomic) GEOURLTimePoint *timePoint;
@property(readonly, nonatomic) BOOL hasTimePoint;
- (void)_readTimePoint;
@property(retain, nonatomic) GEOURLRouteHandle *routeHandle;
@property(readonly, nonatomic) BOOL hasRouteHandle;
- (void)_readRouteHandle;
- (int)StringAsUserTrackingMode:(id)arg1;
- (id)userTrackingModeAsString:(int)arg1;
@property(nonatomic) BOOL hasUserTrackingMode;
@property(nonatomic) int userTrackingMode;
@property(retain, nonatomic) NSString *referralIdentifier;
@property(readonly, nonatomic) BOOL hasReferralIdentifier;
- (void)_readReferralIdentifier;
@property(retain, nonatomic) GEOURLCamera *camera;
@property(readonly, nonatomic) BOOL hasCamera;
- (void)_readCamera;
@property(retain, nonatomic) GEOURLCenterSpan *centerSpan;
@property(readonly, nonatomic) BOOL hasCenterSpan;
- (void)_readCenterSpan;
- (int)StringAsTransportType:(id)arg1;
- (id)transportTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasTransportType;
@property(nonatomic) int transportType;
- (int)StringAsMapType:(id)arg1;
- (id)mapTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasMapType;
@property(nonatomic) int mapType;
@property(nonatomic) BOOL hasEnableTraffic;
@property(nonatomic) BOOL enableTraffic;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)urlRepresentation;
- (id)initWithUrlRepresentation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

