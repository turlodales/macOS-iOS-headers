//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMediaStream/NSObject-Protocol.h>

@class MSServerSideConfigProtocol, NSDictionary, NSError;

@protocol MSServerSideConfigProtocolDelegate <NSObject>
- (void)serverSideConfigProtocol:(MSServerSideConfigProtocol *)arg1 didReceiveAuthenticationError:(NSError *)arg2;
- (void)serverSideConfigProtocol:(MSServerSideConfigProtocol *)arg1 didFinishWithConfiguration:(NSDictionary *)arg2 error:(NSError *)arg3;
@end

