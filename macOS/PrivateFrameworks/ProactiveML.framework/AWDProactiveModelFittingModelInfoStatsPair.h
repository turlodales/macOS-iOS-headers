//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveML/NSCopying-Protocol.h>

@class AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingModelInfo;

@interface AWDProactiveModelFittingModelInfoStatsPair : PBCodable <NSCopying>
{
    AWDProactiveModelFittingModelInfo *_modelInfo;
    AWDProactiveModelFittingMinibatchStats *_stats;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AWDProactiveModelFittingMinibatchStats *stats; // @synthesize stats=_stats;
@property(retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo; // @synthesize modelInfo=_modelInfo;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasStats;
@property(readonly, nonatomic) BOOL hasModelInfo;

@end

