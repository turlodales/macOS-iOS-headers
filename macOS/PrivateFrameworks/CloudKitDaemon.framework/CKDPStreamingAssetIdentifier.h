//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDPStreamingAssetIdentifier : PBCodable <NSCopying>
{
    NSData *_fileSignature;
    NSString *_owner;
    NSData *_referenceSignature;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *referenceSignature; // @synthesize referenceSignature=_referenceSignature;
@property(retain, nonatomic) NSData *fileSignature; // @synthesize fileSignature=_fileSignature;
@property(retain, nonatomic) NSString *owner; // @synthesize owner=_owner;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasReferenceSignature;
@property(readonly, nonatomic) BOOL hasFileSignature;
@property(readonly, nonatomic) BOOL hasOwner;

@end

