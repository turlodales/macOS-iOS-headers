//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/NSCopying-Protocol.h>
#import <VideoProcessing/VCPProtoResultLegacyConversionProtocol-Protocol.h>

@class VCPProtoBounds;

@interface VCPProtoImageFaceResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    VCPProtoBounds *_bounds;
    int _eyeExpression;
    float _faceQuality;
    int _mouthExpression;
    int _position;
    int _yaw;
    BOOL _isCloseup;
    struct {
        unsigned int faceQuality:1;
    } _has;
}

+ (id)resultFromLegacyDictionary:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) float faceQuality; // @synthesize faceQuality=_faceQuality;
@property(nonatomic) BOOL isCloseup; // @synthesize isCloseup=_isCloseup;
@property(retain, nonatomic) VCPProtoBounds *bounds; // @synthesize bounds=_bounds;
@property(nonatomic) int position; // @synthesize position=_position;
@property(nonatomic) int yaw; // @synthesize yaw=_yaw;
@property(nonatomic) int mouthExpression; // @synthesize mouthExpression=_mouthExpression;
@property(nonatomic) int eyeExpression; // @synthesize eyeExpression=_eyeExpression;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasFaceQuality;
- (id)exportToLegacyDictionary;

@end

