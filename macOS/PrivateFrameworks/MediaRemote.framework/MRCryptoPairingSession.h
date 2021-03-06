//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, _MRDeviceInfoMessageProtobuf;
@protocol MRCryptoPairingSessionDelegate;

@interface MRCryptoPairingSession : NSObject
{
    _MRDeviceInfoMessageProtobuf *_device;
    unsigned long long _role;
    id <MRCryptoPairingSessionDelegate> _delegate;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MRCryptoPairingSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long role; // @synthesize role=_role;
@property(readonly, nonatomic) _MRDeviceInfoMessageProtobuf *device; // @synthesize device=_device;
- (BOOL)deleteIdentityWithError:(id *)arg1;
- (id)decryptData:(id)arg1 withError:(id *)arg2;
- (id)encryptData:(id)arg1 withError:(id *)arg2;
- (void)handlePairingFailureWithStatus:(int)arg1;
- (void)handlePairingExchangeData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)updatePeer;
- (id)removePeer;
- (void)close;
- (void)open;
@property(readonly, nonatomic) NSArray *pairedDevices;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
@property(readonly, nonatomic, getter=isPaired) BOOL paired;
- (id)init;
- (id)initWithRole:(unsigned long long)arg1 device:(id)arg2;

@end

