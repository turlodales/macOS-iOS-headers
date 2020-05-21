//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface CLPLocationConsumptionScoreInfo : PBCodable <NSCopying>
{
    double _startTime;
    double _stopTime;
    NSString *_clientKey;
    int _score;
    struct {
        unsigned int startTime:1;
        unsigned int stopTime:1;
        unsigned int score:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) int score; // @synthesize score=_score;
@property(retain, nonatomic) NSString *clientKey; // @synthesize clientKey=_clientKey;
@property(nonatomic) double stopTime; // @synthesize stopTime=_stopTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasScore;
@property(readonly, nonatomic) BOOL hasClientKey;
@property(nonatomic) BOOL hasStopTime;
@property(nonatomic) BOOL hasStartTime;

@end

