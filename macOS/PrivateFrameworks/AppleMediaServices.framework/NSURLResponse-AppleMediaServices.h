//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURLResponse.h>

@class NSDictionary;

@interface NSURLResponse (AppleMediaServices)
- (BOOL)_getCacheControlMaxAge:(double *)arg1;
- (id)ams_valueForHTTPHeader:(id)arg1;
@property(readonly) unsigned long long ams_statusCode;
@property(readonly) NSDictionary *ams_headers;
@property(readonly) double ams_expirationInterval;
@end

