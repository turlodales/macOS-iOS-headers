//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/NSObject-Protocol.h>

@class NSString;

@protocol NFRemoteAdminEventListener <NSObject>

@optional
- (void)didReceiveFatalCommunicationError;
- (void)readerModeCardIngestionStatus:(unsigned long long)arg1;
- (void)readerModeCardSessionToken:(NSString *)arg1;
- (void)remoteAdminCleanupProgress:(double)arg1;
@end

