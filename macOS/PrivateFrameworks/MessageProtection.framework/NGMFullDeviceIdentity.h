//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, SigningKey;

@interface NGMFullDeviceIdentity : NSObject
{
    SigningKey *_deviceSigningKey;
    NSMutableArray *_devicePrekeys;
}

+ (id)identityWithDataRepresentation:(id)arg1 error:(id *)arg2;
+ (id)identityWithAccess:(id)arg1 error:(id *)arg2;
+ (id)identityWithAccess:(id)arg1 usageIdentifier:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *devicePrekeys; // @synthesize devicePrekeys=_devicePrekeys;
@property(retain, nonatomic) SigningKey *deviceSigningKey; // @synthesize deviceSigningKey=_deviceSigningKey;
- (id)description;
- (BOOL)updateWithRegisteredTicket:(id)arg1 error:(id *)arg2;
- (id)keyRollingTicketWithError:(id *)arg1;
- (BOOL)eraseFromKeyChain:(id *)arg1;
- (BOOL)shouldRollEncryptionIdentity;
- (id)signDataWithFormatter:(id)arg1 error:(id *)arg2;
- (void)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 decryptionBlock:(CDUnknownBlockType)arg3;
- (id)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 error:(id *)arg3;
- (id)publicDeviceIdentityWithError:(id *)arg1;
- (id)dataRepresentationWithError:(id *)arg1;
- (id)initWithSigningKey:(id)arg1 devicePrekeys:(id)arg2;
- (void)postMigrationKeychainCleanup;
- (BOOL)deleteKeyWithTag:(id)arg1;
- (BOOL)requiresMigration;

@end

