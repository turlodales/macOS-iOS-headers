//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class HMFBlockOperation, NSData, NSMutableSet, NSSet;

@interface HAPRelayRequestMessage : HMFObject
{
    NSMutableSet *_requestIdentifiers;
    unsigned short _transactionIdentifier;
    NSData *_body;
    unsigned long long _type;
    double _timeout;
    HMFBlockOperation *_operation;
}

- (void).cxx_destruct;
@property(nonatomic) __weak HMFBlockOperation *operation; // @synthesize operation=_operation;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSData *body; // @synthesize body=_body;
@property(nonatomic) unsigned short transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(readonly, nonatomic) NSSet *requestIdentifiers; // @synthesize requestIdentifiers=_requestIdentifiers;
- (void)addRequestIdentifier:(id)arg1;
@property(readonly, nonatomic, getter=isFinished) BOOL finished;
@property(readonly, nonatomic) BOOL sent;
@property(readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
- (id)description;
- (id)debugDescription;
- (id)shortDescription;
- (id)initWithRequestData:(id)arg1 messageType:(unsigned long long)arg2 timeout:(double)arg3;

@end

