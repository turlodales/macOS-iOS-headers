//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface CURangingSample : NSObject
{
    int _channel;
    int _rawRSSI;
    NSData *_deviceAddress;
    NSString *_deviceModel;
}

- (void).cxx_destruct;
@property(nonatomic) int rawRSSI; // @synthesize rawRSSI=_rawRSSI;
@property(copy, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(copy, nonatomic) NSData *deviceAddress; // @synthesize deviceAddress=_deviceAddress;
@property(nonatomic) int channel; // @synthesize channel=_channel;
- (id)description;

@end

