//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class AWDHomeKitCameraStreamIDSConnSetupParameters;

@interface AWDHomeKitCameraStreamIDSConnSetup : PBCodable <NSCopying>
{
    AWDHomeKitCameraStreamIDSConnSetupParameters *_audioConnection;
    AWDHomeKitCameraStreamIDSConnSetupParameters *_keepaliveConnection;
    AWDHomeKitCameraStreamIDSConnSetupParameters *_videoConnection;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AWDHomeKitCameraStreamIDSConnSetupParameters *keepaliveConnection; // @synthesize keepaliveConnection=_keepaliveConnection;
@property(retain, nonatomic) AWDHomeKitCameraStreamIDSConnSetupParameters *audioConnection; // @synthesize audioConnection=_audioConnection;
@property(retain, nonatomic) AWDHomeKitCameraStreamIDSConnSetupParameters *videoConnection; // @synthesize videoConnection=_videoConnection;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasKeepaliveConnection;
@property(readonly, nonatomic) BOOL hasAudioConnection;
@property(readonly, nonatomic) BOOL hasVideoConnection;

@end

