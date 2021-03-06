/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDRecentRouteInfo : PBCodable <NSCopying> {
    NSData * _etaFilter;
    NSData * _evChargingMetadata;
    struct { 
        unsigned int has_preferredTransportType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_etaFilter : 1; 
        unsigned int read_evChargingMetadata : 1; 
        unsigned int read_originalWaypointRoute : 1; 
        unsigned int read_routeId : 1; 
        unsigned int read_sessionState : 1; 
        unsigned int read_zilchPointSegments : 1; 
        unsigned int read_zilchPoints : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSData * _originalWaypointRoute;
    int  _preferredTransportType;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSData * _routeId;
    NSData * _sessionState;
    PBUnknownFields * _unknownFields;
    NSMutableArray * _zilchPointSegments;
    NSData * _zilchPoints;
}

@property (nonatomic, retain) NSData *etaFilter;
@property (nonatomic, retain) NSData *evChargingMetadata;
@property (nonatomic, readonly) bool hasEtaFilter;
@property (nonatomic, readonly) bool hasEvChargingMetadata;
@property (nonatomic, readonly) bool hasOriginalWaypointRoute;
@property (nonatomic) bool hasPreferredTransportType;
@property (nonatomic, readonly) bool hasRouteId;
@property (nonatomic, readonly) bool hasSessionState;
@property (nonatomic, readonly) bool hasZilchPoints;
@property (nonatomic, retain) NSData *originalWaypointRoute;
@property (nonatomic) int preferredTransportType;
@property (nonatomic, retain) NSData *routeId;
@property (nonatomic, retain) NSData *sessionState;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSMutableArray *zilchPointSegments;
@property (nonatomic, retain) NSData *zilchPoints;

+ (bool)isValid:(id)arg1;
+ (Class)zilchPointSegmentType;

- (void).cxx_destruct;
- (int)StringAsPreferredTransportType:(id)arg1;
- (void)addZilchPointSegment:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)clearZilchPointSegments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etaFilter;
- (id)evChargingMetadata;
- (bool)hasEtaFilter;
- (bool)hasEvChargingMetadata;
- (bool)hasOriginalWaypointRoute;
- (bool)hasPreferredTransportType;
- (bool)hasRouteId;
- (bool)hasSessionState;
- (bool)hasZilchPoints;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)originalWaypointRoute;
- (int)preferredTransportType;
- (id)preferredTransportTypeAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)routeId;
- (id)sessionState;
- (void)setEtaFilter:(id)arg1;
- (void)setEvChargingMetadata:(id)arg1;
- (void)setHasPreferredTransportType:(bool)arg1;
- (void)setOriginalWaypointRoute:(id)arg1;
- (void)setPreferredTransportType:(int)arg1;
- (void)setRouteId:(id)arg1;
- (void)setSessionState:(id)arg1;
- (void)setZilchPointSegments:(id)arg1;
- (void)setZilchPoints:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;
- (id)zilchPointSegmentAtIndex:(unsigned long long)arg1;
- (id)zilchPointSegments;
- (unsigned long long)zilchPointSegmentsCount;
- (id)zilchPoints;

@end
