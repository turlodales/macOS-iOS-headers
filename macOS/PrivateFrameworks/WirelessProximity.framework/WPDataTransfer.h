//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData, NSUUID;

@interface WPDataTransfer : NSObject
{
    BOOL _receivedFirstPacket;
    unsigned short _currentDataSize;
    NSMutableData *_currentReceivedData;
    NSUUID *_peerUUID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSUUID *peerUUID; // @synthesize peerUUID=_peerUUID;
@property(nonatomic) BOOL receivedFirstPacket; // @synthesize receivedFirstPacket=_receivedFirstPacket;
@property(nonatomic) unsigned short currentDataSize; // @synthesize currentDataSize=_currentDataSize;
@property(retain, nonatomic) NSMutableData *currentReceivedData; // @synthesize currentReceivedData=_currentReceivedData;
- (BOOL)addNewData:(id)arg1;
- (void)resetTransfer;
- (id)initDataTransferForPeer:(id)arg1;

@end

