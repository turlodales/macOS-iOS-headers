//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, PBDataReader;

@interface GEOStepFeedback : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    double _completionTimeStamp;
    NSData *_routeID;
    NSData *_tripID;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _routeIndex;
    unsigned int _stepID;
    BOOL _completedStep;
    BOOL _lightGuidance;
    struct {
        unsigned int has_completionTimeStamp:1;
        unsigned int has_routeIndex:1;
        unsigned int has_stepID:1;
        unsigned int has_completedStep:1;
        unsigned int has_lightGuidance:1;
        unsigned int read_routeID:1;
        unsigned int read_tripID:1;
        unsigned int wrote_completionTimeStamp:1;
        unsigned int wrote_routeID:1;
        unsigned int wrote_tripID:1;
        unsigned int wrote_routeIndex:1;
        unsigned int wrote_stepID:1;
        unsigned int wrote_completedStep:1;
        unsigned int wrote_lightGuidance:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) NSData *tripID;
@property(readonly, nonatomic) BOOL hasTripID;
- (void)_readTripID;
@property(nonatomic) BOOL hasLightGuidance;
@property(nonatomic) BOOL lightGuidance;
@property(nonatomic) BOOL hasRouteIndex;
@property(nonatomic) unsigned int routeIndex;
@property(retain, nonatomic) NSData *routeID;
@property(readonly, nonatomic) BOOL hasRouteID;
- (void)_readRouteID;
@property(nonatomic) BOOL hasCompletedStep;
@property(nonatomic) BOOL completedStep;
@property(nonatomic) BOOL hasCompletionTimeStamp;
@property(nonatomic) double completionTimeStamp;
@property(nonatomic) BOOL hasStepID;
@property(nonatomic) unsigned int stepID;
- (id)initWithData:(id)arg1;
- (id)init;

@end

