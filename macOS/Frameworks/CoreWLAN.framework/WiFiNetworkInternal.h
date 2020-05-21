//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CWMutableNetworkProfile, CWNetwork, NSData, NSString;

__attribute__((visibility("hidden")))
@interface WiFiNetworkInternal : NSObject
{
    CWNetwork *_scanResult;
    CWMutableNetworkProfile *_profile;
    NSString *_ssidStr;
    NSData *_ssidData;
    BOOL _wasAutoJoined;
}

@property BOOL wasAutoJoined; // @synthesize wasAutoJoined=_wasAutoJoined;
@property(readonly) CWMutableNetworkProfile *profile; // @synthesize profile=_profile;
@property(readonly) CWNetwork *scanResult; // @synthesize scanResult=_scanResult;
- (void)dealloc;
- (id)initWithScanResult:(id)arg1 profile:(id)arg2;

@end

