//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSString;

@interface VCPBChange : PBCodable <NSCopying>
{
    int _changeType;
    NSData *_message;
    int _messageType;
    NSString *_uniqueID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(nonatomic) int changeType; // @synthesize changeType=_changeType;
@property(nonatomic) int messageType; // @synthesize messageType=_messageType;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsChangeType:(id)arg1;
- (id)changeTypeAsString:(int)arg1;
- (int)StringAsMessageType:(id)arg1;
- (id)messageTypeAsString:(int)arg1;

@end

