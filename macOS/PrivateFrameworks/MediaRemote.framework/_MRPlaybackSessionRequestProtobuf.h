//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSString;

@interface _MRPlaybackSessionRequestProtobuf : PBCodable <NSCopying>
{
    NSString *_identifier;
    int _length;
    int _location;
    NSString *_requestID;
    NSString *_type;
    struct {
        unsigned int length:1;
        unsigned int location:1;
    } _has;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) int length; // @synthesize length=_length;
@property(nonatomic) int location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasType;
@property(nonatomic) BOOL hasLength;
@property(nonatomic) BOOL hasLocation;
@property(readonly, nonatomic) BOOL hasIdentifier;
@property(readonly, nonatomic) BOOL hasRequestID;
- (id)customDescription;

@end

