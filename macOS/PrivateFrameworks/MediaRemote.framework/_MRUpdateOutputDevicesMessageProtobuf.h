//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSMutableArray;

@interface _MRUpdateOutputDevicesMessageProtobuf : PBCodable <NSCopying>
{
    NSMutableArray *_outputDevices;
}

+ (Class)outputDevicesType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *outputDevices; // @synthesize outputDevices=_outputDevices;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)outputDevicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)outputDevicesCount;
- (void)addOutputDevices:(id)arg1;
- (void)clearOutputDevices;

@end

