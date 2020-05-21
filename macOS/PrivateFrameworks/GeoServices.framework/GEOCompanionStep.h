//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOCompanionDriveStep, GEOCompanionFerryStep, GEOCompanionGenericStep, GEOCompanionWalkStep, NSData, NSMutableArray, NSString, PBDataReader;

@interface GEOCompanionStep : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    GEOCompanionDriveStep *_driveStep;
    GEOCompanionFerryStep *_ferryStep;
    GEOCompanionGenericStep *_genericStep;
    NSMutableArray *_guidanceEvents;
    NSMutableArray *_instructionWithAlternatives;
    NSString *_listInstruction;
    NSString *_roadName;
    NSData *_updateID;
    GEOCompanionWalkStep *_walkStep;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _distance;
    unsigned int _endCoordinateIndex;
    unsigned int _maneuverStartCoordinateIndex;
    unsigned int _startCoordinateIndex;
    unsigned int _stepID;
    unsigned int _time;
    struct {
        unsigned int has_distance:1;
        unsigned int has_endCoordinateIndex:1;
        unsigned int has_maneuverStartCoordinateIndex:1;
        unsigned int has_startCoordinateIndex:1;
        unsigned int has_stepID:1;
        unsigned int has_time:1;
        unsigned int read_driveStep:1;
        unsigned int read_ferryStep:1;
        unsigned int read_genericStep:1;
        unsigned int read_guidanceEvents:1;
        unsigned int read_instructionWithAlternatives:1;
        unsigned int read_listInstruction:1;
        unsigned int read_roadName:1;
        unsigned int read_updateID:1;
        unsigned int read_walkStep:1;
        unsigned int wrote_driveStep:1;
        unsigned int wrote_ferryStep:1;
        unsigned int wrote_genericStep:1;
        unsigned int wrote_guidanceEvents:1;
        unsigned int wrote_instructionWithAlternatives:1;
        unsigned int wrote_listInstruction:1;
        unsigned int wrote_roadName:1;
        unsigned int wrote_updateID:1;
        unsigned int wrote_walkStep:1;
        unsigned int wrote_distance:1;
        unsigned int wrote_endCoordinateIndex:1;
        unsigned int wrote_maneuverStartCoordinateIndex:1;
        unsigned int wrote_startCoordinateIndex:1;
        unsigned int wrote_stepID:1;
        unsigned int wrote_time:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)guidanceEventType;
+ (Class)instructionWithAlternativesType;
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
@property(retain, nonatomic) GEOCompanionGenericStep *genericStep;
@property(readonly, nonatomic) BOOL hasGenericStep;
- (void)_readGenericStep;
@property(retain, nonatomic) NSData *updateID;
@property(readonly, nonatomic) BOOL hasUpdateID;
- (void)_readUpdateID;
- (id)guidanceEventAtIndex:(unsigned long long)arg1;
- (unsigned long long)guidanceEventsCount;
- (void)_addNoFlagsGuidanceEvent:(id)arg1;
- (void)addGuidanceEvent:(id)arg1;
- (void)clearGuidanceEvents;
@property(retain, nonatomic) NSMutableArray *guidanceEvents;
- (void)_readGuidanceEvents;
@property(retain, nonatomic) NSString *listInstruction;
@property(readonly, nonatomic) BOOL hasListInstruction;
- (void)_readListInstruction;
- (id)instructionWithAlternativesAtIndex:(unsigned long long)arg1;
- (unsigned long long)instructionWithAlternativesCount;
- (void)_addNoFlagsInstructionWithAlternatives:(id)arg1;
- (void)addInstructionWithAlternatives:(id)arg1;
- (void)clearInstructionWithAlternatives;
@property(retain, nonatomic) NSMutableArray *instructionWithAlternatives;
- (void)_readInstructionWithAlternatives;
@property(nonatomic) BOOL hasEndCoordinateIndex;
@property(nonatomic) unsigned int endCoordinateIndex;
@property(nonatomic) BOOL hasManeuverStartCoordinateIndex;
@property(nonatomic) unsigned int maneuverStartCoordinateIndex;
@property(nonatomic) BOOL hasStartCoordinateIndex;
@property(nonatomic) unsigned int startCoordinateIndex;
@property(retain, nonatomic) GEOCompanionFerryStep *ferryStep;
@property(readonly, nonatomic) BOOL hasFerryStep;
- (void)_readFerryStep;
@property(retain, nonatomic) GEOCompanionWalkStep *walkStep;
@property(readonly, nonatomic) BOOL hasWalkStep;
- (void)_readWalkStep;
@property(retain, nonatomic) GEOCompanionDriveStep *driveStep;
@property(readonly, nonatomic) BOOL hasDriveStep;
- (void)_readDriveStep;
@property(retain, nonatomic) NSString *roadName;
@property(readonly, nonatomic) BOOL hasRoadName;
- (void)_readRoadName;
@property(nonatomic) BOOL hasTime;
@property(nonatomic) unsigned int time;
@property(nonatomic) BOOL hasDistance;
@property(nonatomic) unsigned int distance;
@property(nonatomic) BOOL hasStepID;
@property(nonatomic) unsigned int stepID;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)geoStep;
- (id)maneuverStep;
- (id)initWithStep:(id)arg1 route:(id)arg2 stringFormatter:(id)arg3;

@end

