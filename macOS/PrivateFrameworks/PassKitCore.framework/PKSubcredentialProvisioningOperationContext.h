//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSObject<OS_dispatch_queue>, NSURL, PKAppletSubcredential, PKAppletSubcredentialEncryptedRequest;

@interface PKSubcredentialProvisioningOperationContext : NSObject
{
    NSObject<OS_dispatch_queue> *_operationQueue;
    NSURL *_passURL;
    PKAppletSubcredential *_addedCredential;
    PKAppletSubcredentialEncryptedRequest *_registrationData;
    NSData *_trackingAttestation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *trackingAttestation; // @synthesize trackingAttestation=_trackingAttestation;
@property(retain, nonatomic) PKAppletSubcredentialEncryptedRequest *registrationData; // @synthesize registrationData=_registrationData;
@property(retain, nonatomic) PKAppletSubcredential *addedCredential; // @synthesize addedCredential=_addedCredential;
@property(copy, nonatomic) NSURL *passURL; // @synthesize passURL=_passURL;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *operationQueue; // @synthesize operationQueue=_operationQueue;
- (id)initWithQueue:(id)arg1;

@end

