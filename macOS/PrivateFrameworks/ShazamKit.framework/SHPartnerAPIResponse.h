//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SHPartnerAPIResponse : NSObject
{
    double _retrySeconds;
    NSArray *_mediaItems;
}

- (void).cxx_destruct;
@property(retain) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;
@property double retrySeconds; // @synthesize retrySeconds=_retrySeconds;

@end

