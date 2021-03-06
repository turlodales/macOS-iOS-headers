//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (RCAdditions)
+ (id)rc_endpointErrorWithUnderlyingEndpointErrors:(id)arg1;
+ (id)rc_parsingError;
+ (id)rc_missingConfigErrorWithUnderlyingError:(id)arg1;
+ (id)rc_offlineErrorWithReason:(long long)arg1;
+ (id)rc_notAvailableError;
+ (id)rc_notCachedError;
+ (id)rc_errorWithCode:(long long)arg1 description:(id)arg2;
+ (id)rc_errorWithCode:(long long)arg1 description:(id)arg2 additionalUserInfo:(id)arg3;
- (BOOL)rc_isOfflineErrorOfflineReason:(long long *)arg1;
- (BOOL)rc_isOfflineError;
- (BOOL)rc_isOperationThrottledError;
- (BOOL)rc_isServiceUnavailableError;
- (BOOL)rc_isCancellationError;
- (BOOL)rc_isNetworkUnavailableError;
- (BOOL)rc_shouldRetry;
@end

