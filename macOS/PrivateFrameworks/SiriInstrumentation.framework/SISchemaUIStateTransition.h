//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

@class NSData;

@interface SISchemaUIStateTransition : PBCodable
{
    int _currentState;
    int _previousState;
    int _siriPresentationType;
    int _dismissalReason;
}

@property(nonatomic) int dismissalReason; // @synthesize dismissalReason=_dismissalReason;
@property(nonatomic) int siriPresentationType; // @synthesize siriPresentationType=_siriPresentationType;
@property(nonatomic) int previousState; // @synthesize previousState=_previousState;
@property(nonatomic) int currentState; // @synthesize currentState=_currentState;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;

@end

