//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MessageProtection/NSCopying-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface NGMPBP256Key : PBCodable <NSCopying>
{
    NSData *_keyData;
    NSString *_keychainTag;
    int _keystore;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *keyData; // @synthesize keyData=_keyData;
@property(nonatomic) int keystore; // @synthesize keystore=_keystore;
@property(retain, nonatomic) NSString *keychainTag; // @synthesize keychainTag=_keychainTag;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasKeyData;
- (int)StringAsKeystore:(id)arg1;
- (id)keystoreAsString:(int)arg1;
@property(readonly, nonatomic) BOOL hasKeychainTag;

@end

