//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface MRCryptoPairingIdentity : NSObject
{
    NSString *_identifier;
    NSData *_publicKey;
    NSData *_privateKey;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *privateKey; // @synthesize privateKey=_privateKey;
@property(readonly, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 privateKey:(id)arg3;

@end

