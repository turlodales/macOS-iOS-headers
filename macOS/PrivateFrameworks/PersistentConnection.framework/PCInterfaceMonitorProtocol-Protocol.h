//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PersistentConnection/NSObject-Protocol.h>

@class NSString;

@protocol PCInterfaceMonitorProtocol <NSObject>
@property(readonly, nonatomic) BOOL isNetworkingPowerExpensiveToUse;
@property(readonly, nonatomic) BOOL isRadioHot;
@property(readonly, nonatomic) BOOL isBadLinkQuality;
@property(readonly, nonatomic) BOOL isPoorLinkQuality;
@property(readonly, retain, nonatomic) NSString *linkQualityString;
@property(readonly, nonatomic) BOOL isInternetReachable;
@property(readonly, nonatomic) BOOL isInterfaceHistoricallyUsable;
@property(readonly, nonatomic) BOOL isInterfaceUsable;
@property(readonly, nonatomic) int linkQuality;
@property(readonly, nonatomic) long long interfaceIdentifier;

@optional
@property(readonly, nonatomic) NSString *networkCode;
@property(readonly, nonatomic) struct __CFString *wwanInterfaceName;
@property(readonly, nonatomic) BOOL isLTEWithCDRX;
@property(readonly, nonatomic) int currentRAT;
@end

