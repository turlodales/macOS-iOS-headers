//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CUPairedPeer, NSImage, NSString, RPDevice;

__attribute__((visibility("hidden")))
@interface RPDeviceUIEntry : NSObject
{
    BOOL _connected;
    BOOL _paired;
    NSString *_bestName;
    NSImage *_deviceImage;
    RPDevice *_discoveredDevice;
    NSString *_model;
    CUPairedPeer *_pairedPeer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CUPairedPeer *pairedPeer; // @synthesize pairedPeer=_pairedPeer;
@property(nonatomic) BOOL paired; // @synthesize paired=_paired;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(retain, nonatomic) RPDevice *discoveredDevice; // @synthesize discoveredDevice=_discoveredDevice;
@property(retain, nonatomic) NSImage *deviceImage; // @synthesize deviceImage=_deviceImage;
@property(nonatomic) BOOL connected; // @synthesize connected=_connected;
@property(copy, nonatomic) NSString *bestName; // @synthesize bestName=_bestName;

@end

