//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol CLSQueryProtocol <NSObject>
- (void)prepareForRetry;
- (BOOL)isCancelled;
- (void)cancel;
- (void)submitWithHandler:(void (^)(id <CLSQueryProtocol>, NSError *))arg1;
@end

