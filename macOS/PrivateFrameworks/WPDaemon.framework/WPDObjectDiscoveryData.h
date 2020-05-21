//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData;

@interface WPDObjectDiscoveryData : NSObject
{
    long long _length;
    NSMutableData *_address;
    NSMutableData *_payload;
}

+ (id)addressesFromNearbyTokens:(id)arg1;
+ (id)addressFromNearbyToken:(id)arg1;
+ (unsigned char)applyMaskToAddress:(id)arg1;
+ (id)objectDiscoveryReportFromAdvReport:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableData *payload; // @synthesize payload=_payload;
@property(retain, nonatomic) NSMutableData *address; // @synthesize address=_address;
@property(nonatomic) long long length; // @synthesize length=_length;
- (id)updateWithKey:(id)arg1 Status:(unsigned char)arg2 Reserved:(id)arg3;
- (void)wipeout;
- (id)description;
- (id)init;

@end

