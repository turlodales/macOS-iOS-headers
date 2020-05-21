//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class ABCPbSigConfigWhitelist, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface ABCPbSigGrantResponse : PBCodable <NSCopying>
{
    int _globalDecision;
    ABCPbSigConfigWhitelist *_sigConfigWhitelist;
    NSMutableArray *_sigResponses;
    NSString *_status;
    CDStruct_121d7f17 _has;
}

+ (Class)sigResponseType;
- (void).cxx_destruct;
@property(retain, nonatomic) ABCPbSigConfigWhitelist *sigConfigWhitelist; // @synthesize sigConfigWhitelist=_sigConfigWhitelist;
@property(retain, nonatomic) NSMutableArray *sigResponses; // @synthesize sigResponses=_sigResponses;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasSigConfigWhitelist;
- (id)sigResponseAtIndex:(unsigned long long)arg1;
- (unsigned long long)sigResponsesCount;
- (void)addSigResponse:(id)arg1;
- (void)clearSigResponses;
@property(readonly, nonatomic) BOOL hasStatus;
- (int)StringAsGlobalDecision:(id)arg1;
- (id)globalDecisionAsString:(int)arg1;
@property(nonatomic) BOOL hasGlobalDecision;
@property(nonatomic) int globalDecision; // @synthesize globalDecision=_globalDecision;

@end

