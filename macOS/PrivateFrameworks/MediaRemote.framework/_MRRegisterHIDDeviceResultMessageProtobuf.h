//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@interface _MRRegisterHIDDeviceResultMessageProtobuf : PBCodable <NSCopying>
{
    unsigned int _deviceIdentifier;
    unsigned int _errorCode;
    struct {
        unsigned int deviceIdentifier:1;
        unsigned int errorCode:1;
    } _has;
}

@property(nonatomic) unsigned int deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasDeviceIdentifier;
@property(nonatomic) BOOL hasErrorCode;

@end

