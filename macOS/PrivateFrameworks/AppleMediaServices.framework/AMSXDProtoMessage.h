//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface AMSXDProtoMessage : PBCodable <NSCopying>
{
    NSString *_logKey;
    NSData *_messageData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain, nonatomic) NSData *messageData; // @synthesize messageData=_messageData;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasLogKey;

@end

