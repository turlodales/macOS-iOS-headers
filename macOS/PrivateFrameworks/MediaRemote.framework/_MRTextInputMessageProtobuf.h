//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface _MRTextInputMessageProtobuf : PBCodable <NSCopying>
{
    double _timestamp;
    int _actionType;
    NSString *_text;
    struct {
        unsigned int timestamp:1;
        unsigned int actionType:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsActionType:(id)arg1;
- (id)actionTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasActionType;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(readonly, nonatomic) BOOL hasText;
@property(nonatomic) BOOL hasTimestamp;

@end

