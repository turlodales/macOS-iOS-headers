//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriCore/NSObject-Protocol.h>

@class NSError;
@protocol SiriCoreConnectionProvider;

@protocol SiriCoreConnectionProviderDelegate <NSObject>
- (void)connectionProvider:(id <SiriCoreConnectionProvider>)arg1 receivedError:(NSError *)arg2;

@optional
- (void)connectionProviderReceivedBetterRouteNotification:(id <SiriCoreConnectionProvider>)arg1;
- (void)connectionProvider:(id <SiriCoreConnectionProvider>)arg1 receivedViabilityChangeNotification:(BOOL)arg2;
@end

