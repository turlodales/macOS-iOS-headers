//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitCameraStreamIDSConnSetupParameters : PBCodable <NSCopying>
{
    unsigned int _connectionComplete;
    unsigned int _connectionRequested;
    struct {
        unsigned int connectionComplete:1;
        unsigned int connectionRequested:1;
    } _has;
}

@property(nonatomic) unsigned int connectionComplete; // @synthesize connectionComplete=_connectionComplete;
@property(nonatomic) unsigned int connectionRequested; // @synthesize connectionRequested=_connectionRequested;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasConnectionComplete;
@property(nonatomic) BOOL hasConnectionRequested;

@end

