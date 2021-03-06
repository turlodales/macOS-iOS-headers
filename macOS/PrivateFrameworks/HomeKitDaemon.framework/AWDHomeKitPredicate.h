//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

@interface AWDHomeKitPredicate : PBCodable <NSCopying>
{
    NSMutableArray *_presenceEvents;
    BOOL _containsCalendarTime;
    BOOL _containsCharacteristicValue;
    BOOL _containsSignificantTime;
    BOOL _containsSignificantTimeOffset;
    struct {
        unsigned int containsCalendarTime:1;
        unsigned int containsCharacteristicValue:1;
        unsigned int containsSignificantTime:1;
        unsigned int containsSignificantTimeOffset:1;
    } _has;
}

+ (Class)presenceEventsType;
- (void).cxx_destruct;
@property(nonatomic) BOOL containsCalendarTime; // @synthesize containsCalendarTime=_containsCalendarTime;
@property(nonatomic) BOOL containsSignificantTimeOffset; // @synthesize containsSignificantTimeOffset=_containsSignificantTimeOffset;
@property(nonatomic) BOOL containsSignificantTime; // @synthesize containsSignificantTime=_containsSignificantTime;
@property(nonatomic) BOOL containsCharacteristicValue; // @synthesize containsCharacteristicValue=_containsCharacteristicValue;
@property(retain, nonatomic) NSMutableArray *presenceEvents; // @synthesize presenceEvents=_presenceEvents;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasContainsCalendarTime;
@property(nonatomic) BOOL hasContainsSignificantTimeOffset;
@property(nonatomic) BOOL hasContainsSignificantTime;
@property(nonatomic) BOOL hasContainsCharacteristicValue;
- (id)presenceEventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)presenceEventsCount;
- (void)addPresenceEvents:(id)arg1;
- (void)clearPresenceEvents;

@end

