//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NEIKEv2AuthenticationProtocol, NEIKEv2DHProtocol, NEIKEv2EncryptionProtocol, NEIKEv2IntegrityProtocol, NEIKEv2PRFProtocol, NSArray;

@interface NEIKEv2IKESAProposal : NSObject <NSCopying>
{
    unsigned char _proposalNumber;
    NSArray *_encryptionProtocols;
    NSArray *_integrityProtocols;
    NSArray *_prfProtocols;
    NSArray *_dhProtocols;
    NSArray *_eapProtocols;
    unsigned long long _lifetimeSeconds;
    NEIKEv2EncryptionProtocol *_chosenEncryptionProtocol;
    NEIKEv2IntegrityProtocol *_chosenIntegrityProtocol;
    NEIKEv2PRFProtocol *_chosenPRFProtocol;
    NEIKEv2DHProtocol *_chosenDHProtocol;
    NEIKEv2AuthenticationProtocol *_authenticationProtocol;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NEIKEv2AuthenticationProtocol *authenticationProtocol; // @synthesize authenticationProtocol=_authenticationProtocol;
@property(retain) NEIKEv2DHProtocol *chosenDHProtocol; // @synthesize chosenDHProtocol=_chosenDHProtocol;
@property(retain) NEIKEv2PRFProtocol *chosenPRFProtocol; // @synthesize chosenPRFProtocol=_chosenPRFProtocol;
@property(retain) NEIKEv2IntegrityProtocol *chosenIntegrityProtocol; // @synthesize chosenIntegrityProtocol=_chosenIntegrityProtocol;
@property(retain) NEIKEv2EncryptionProtocol *chosenEncryptionProtocol; // @synthesize chosenEncryptionProtocol=_chosenEncryptionProtocol;
@property unsigned char proposalNumber; // @synthesize proposalNumber=_proposalNumber;
@property unsigned long long lifetimeSeconds; // @synthesize lifetimeSeconds=_lifetimeSeconds;
@property(retain) NSArray *eapProtocols; // @synthesize eapProtocols=_eapProtocols;
@property(retain) NSArray *dhProtocols; // @synthesize dhProtocols=_dhProtocols;
@property(retain) NSArray *prfProtocols; // @synthesize prfProtocols=_prfProtocols;
@property(retain) NSArray *integrityProtocols; // @synthesize integrityProtocols=_integrityProtocols;
@property(retain) NSArray *encryptionProtocols; // @synthesize encryptionProtocols=_encryptionProtocols;
- (BOOL)isAValidResponse;
- (unsigned long long)lifetimeSecondsBeyondSoftLifetimeForInitiator:(BOOL)arg1;
- (unsigned long long)softLifetimeSecondsForInitiator:(BOOL)arg1;
- (BOOL)matchesProposal:(id)arg1;
- (id)copyFromRemote:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) BOOL hasEAPMethods;
@property(readonly) NEIKEv2DHProtocol *dhProtocol;
@property(readonly) NEIKEv2PRFProtocol *prfProtocol;
@property(readonly) NEIKEv2IntegrityProtocol *integrityProtocol;
@property(readonly) NEIKEv2EncryptionProtocol *encryptionProtocol;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)init;

@end

