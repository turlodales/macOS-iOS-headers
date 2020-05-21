//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface TVRMSAvailableServicesDidUpdateMessage : PBCodable <NSCopying>
{
    NSMutableArray *_services;
    int _sessionIdentifier;
    CDStruct_07a29e00 _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *services; // @synthesize services=_services;
@property(nonatomic) int sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)servicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)servicesCount;
- (void)addServices:(id)arg1;
- (void)clearServices;
@property(nonatomic) BOOL hasSessionIdentifier;

@end

