//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData;

@interface SISchemaClientAnyEvent : PBCodable <NSCopying>
{
    NSData *_eventData;
    int _eventType;
    struct {
        unsigned int eventType:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *eventData; // @synthesize eventData=_eventData;
@property(nonatomic) int eventType; // @synthesize eventType=_eventType;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasEventData;
@property(nonatomic) BOOL hasEventType;
- (id)si_dictionaryRepresentation;

@end

