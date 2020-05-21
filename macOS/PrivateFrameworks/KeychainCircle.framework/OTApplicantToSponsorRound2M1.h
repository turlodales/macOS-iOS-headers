//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface OTApplicantToSponsorRound2M1 : PBCodable <NSCopying>
{
    NSString *_peerID;
    NSData *_permanentInfo;
    NSData *_permanentInfoSig;
    NSData *_stableInfo;
    NSData *_stableInfoSig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *stableInfoSig; // @synthesize stableInfoSig=_stableInfoSig;
@property(retain, nonatomic) NSData *stableInfo; // @synthesize stableInfo=_stableInfo;
@property(retain, nonatomic) NSData *permanentInfoSig; // @synthesize permanentInfoSig=_permanentInfoSig;
@property(retain, nonatomic) NSData *permanentInfo; // @synthesize permanentInfo=_permanentInfo;
@property(retain, nonatomic) NSString *peerID; // @synthesize peerID=_peerID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasStableInfoSig;
@property(readonly, nonatomic) BOOL hasStableInfo;
@property(readonly, nonatomic) BOOL hasPermanentInfoSig;
@property(readonly, nonatomic) BOOL hasPermanentInfo;
@property(readonly, nonatomic) BOOL hasPeerID;

@end

