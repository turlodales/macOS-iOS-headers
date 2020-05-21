//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NetworkExtension/NEIKEv2Packet.h>

@class NEIKEv2IKESAPayload, NEIKEv2KeyExchangePayload, NEIKEv2NoncePayload, NEIKEv2NotifyPayload, NSArray;

@interface NEIKEv2IKESAInitPacket : NEIKEv2Packet
{
    NEIKEv2NotifyPayload *_cookie;
    NEIKEv2IKESAPayload *_sa;
    NEIKEv2KeyExchangePayload *_ke;
    NEIKEv2NoncePayload *_nonce;
    NSArray *_vendorIDs;
}

+ (BOOL)encryptPayloads;
+ (unsigned long long)exchangeType;
+ (id)copyTypeDescription;
+ (id)createIKESAInitResponse:(id)arg1 errorCode:(unsigned long long)arg2 errorData:(id)arg3;
+ (id)createIKESAInitResponse:(id)arg1 ikeSA:(id)arg2;
+ (id)createIKESAInitForInitiatorIKESA:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSArray *vendorIDs; // @synthesize vendorIDs=_vendorIDs;
@property(retain) NEIKEv2NoncePayload *nonce; // @synthesize nonce=_nonce;
@property(retain) NEIKEv2KeyExchangePayload *ke; // @synthesize ke=_ke;
@property(retain) NEIKEv2IKESAPayload *sa; // @synthesize sa=_sa;
@property(retain) NEIKEv2NotifyPayload *cookie; // @synthesize cookie=_cookie;
- (void)filloutPayloads;
- (void)gatherPayloads;
- (BOOL)validateSAInitAsResponder:(id)arg1 sendInvalidKE:(char *)arg2;
- (BOOL)validateSAInitAsInitiator:(id)arg1;

@end

