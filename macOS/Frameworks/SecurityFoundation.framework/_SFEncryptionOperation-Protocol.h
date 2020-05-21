//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCopying.h"
#import "NSObject.h"
#import "NSSecureCoding.h"

@class NSData, _SFCiphertext, _SFKey, _SFKeySpecifier;

@protocol _SFEncryptionOperation <NSObject, NSCopying, NSSecureCoding>
@property(readonly, copy, nonatomic) _SFKeySpecifier *encryptionKeySpecifier;
- (NSData *)decrypt:(_SFCiphertext *)arg1 withKey:(_SFKey *)arg2 error:(id *)arg3;
- (_SFCiphertext *)encrypt:(NSData *)arg1 withKey:(_SFKey *)arg2 error:(id *)arg3;
@end

