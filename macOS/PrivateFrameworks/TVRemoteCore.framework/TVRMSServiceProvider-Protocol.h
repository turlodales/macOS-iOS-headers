//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVRemoteCore/NSObject-Protocol.h>

@protocol TVRMSServiceProviderDelegate;

@protocol TVRMSServiceProvider <NSObject>
@property(nonatomic) __weak id <TVRMSServiceProviderDelegate> delegate;
- (void)endDiscovery;
- (void)beginDiscovery;
@end

