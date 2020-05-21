//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBSPasswordImportedCredential.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface ImportedFirefoxCredential : WBSPasswordImportedCredential
{
    NSString *_base64EncodedEncryptedUsername;
    NSString *_base64EncodedEncryptedPassword;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *base64EncodedEncryptedPassword; // @synthesize base64EncodedEncryptedPassword=_base64EncodedEncryptedPassword;
@property(readonly, copy, nonatomic) NSString *base64EncodedEncryptedUsername; // @synthesize base64EncodedEncryptedUsername=_base64EncodedEncryptedUsername;
@property(readonly, copy, nonatomic) NSData *encryptedPassword;
@property(readonly, copy, nonatomic) NSData *encryptedUsername;
- (id)debugDescription;
- (id)encryptedURLCredentialWithPersistence:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBase64EncodedEncryptedUsername:(id)arg1 base64EncodedEncryptedPassword:(id)arg2 url:(id)arg3;

@end

