//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitCameraSnapshotIDSTransfer : PBCodable <NSCopying>
{
    unsigned int _receivedImage;
    unsigned int _sentImage;
    struct {
        unsigned int receivedImage:1;
        unsigned int sentImage:1;
    } _has;
}

@property(nonatomic) unsigned int receivedImage; // @synthesize receivedImage=_receivedImage;
@property(nonatomic) unsigned int sentImage; // @synthesize sentImage=_sentImage;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasReceivedImage;
@property(nonatomic) BOOL hasSentImage;

@end

