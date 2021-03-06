//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WiFiPeerToPeer/NSSecureCoding-Protocol.h>

@class NSArray;

@interface WiFiAwarePublishDatapathSecurityConfiguration : NSObject <NSSecureCoding>
{
    NSArray *_pmkList;
    NSArray *_passphraseList;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *passphraseList; // @synthesize passphraseList=_passphraseList;
@property(readonly, nonatomic) NSArray *pmkList; // @synthesize pmkList=_pmkList;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)initWithPMKList:(id)arg1 passphraseList:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

