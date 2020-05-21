//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class NSMutableOrderedSet, NSNumber, NSObject<OS_dispatch_queue>;

@interface HAPFragmentationStream : HMFObject
{
    id <HAPFragmentationStreamDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSMutableOrderedSet *_pendingPackets;
    NSNumber *_currentPacketTransactionIdentifier;
}

+ (id)fragmentationPacketsForData:(id)arg1 maxLength:(unsigned long long)arg2 transactionIdentifier:(unsigned short)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *currentPacketTransactionIdentifier; // @synthesize currentPacketTransactionIdentifier=_currentPacketTransactionIdentifier;
@property(readonly, nonatomic) NSMutableOrderedSet *pendingPackets; // @synthesize pendingPackets=_pendingPackets;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property __weak id <HAPFragmentationStreamDelegate> delegate; // @synthesize delegate=_delegate;
- (void)__removeAllPendingPacketsWithTransactionIdentifier:(unsigned short)arg1;
- (void)__addFragmentationPacket:(id)arg1;
- (id)__filteredPacketsWithTransactionIdentifier:(unsigned short)arg1;
- (BOOL)__isTransactionCompleteWithTransactionIdentifier:(unsigned short)arg1;
- (id)__transactionDataWithTransactionIdentifier:(unsigned short)arg1;
- (void)receivedFragmentedPacket:(id)arg1;
- (void)close;
- (void)open;
- (id)init;

@end

