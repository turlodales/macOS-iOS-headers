//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface AVAssetResourceLoadingContentInformationRequestInternal : NSObject
{
    NSString *contentType;
    NSArray *allowedContentTypes;
    long long contentLength;
    BOOL byteRangeAccessSupported;
    NSDate *renewalDate;
    BOOL diskCachingPermitted;
}

@end

