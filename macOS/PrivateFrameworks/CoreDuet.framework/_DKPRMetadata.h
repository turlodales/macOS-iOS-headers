//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreDuet/NSCopying-Protocol.h>

@class NSMutableArray;

@interface _DKPRMetadata : PBCodable <NSCopying>
{
    NSMutableArray *_entrys;
}

+ (Class)entryType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *entrys; // @synthesize entrys=_entrys;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)entryAtIndex:(unsigned long long)arg1;
- (unsigned long long)entrysCount;
- (void)addEntry:(id)arg1;
- (void)clearEntrys;

@end

