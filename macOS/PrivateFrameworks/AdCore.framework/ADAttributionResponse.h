//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AdCore/NSCopying-Protocol.h>

@class NSMutableArray;

@interface ADAttributionResponse : PBCodable <NSCopying>
{
    NSMutableArray *_versionedAttributionDetails;
}

+ (Class)versionedAttributionDetailsType;
+ (id)options;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *versionedAttributionDetails; // @synthesize versionedAttributionDetails=_versionedAttributionDetails;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)versionedAttributionDetailsAtIndex:(unsigned long long)arg1;
- (unsigned long long)versionedAttributionDetailsCount;
- (void)addVersionedAttributionDetails:(id)arg1;
- (void)clearVersionedAttributionDetails;

@end

