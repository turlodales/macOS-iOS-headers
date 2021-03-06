//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CKDPZoneRetrieveChangesRequest : PBRequest <NSCopying>
{
    unsigned int _maxChangedZones;
    NSData *_syncContinuationToken;
    struct {
        unsigned int maxChangedZones:1;
    } _has;
}

+ (id)options;
- (void).cxx_destruct;
@property(nonatomic) unsigned int maxChangedZones; // @synthesize maxChangedZones=_maxChangedZones;
@property(retain, nonatomic) NSData *syncContinuationToken; // @synthesize syncContinuationToken=_syncContinuationToken;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasMaxChangedZones;
@property(readonly, nonatomic) BOOL hasSyncContinuationToken;

@end

