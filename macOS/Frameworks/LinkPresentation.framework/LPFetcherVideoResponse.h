//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LinkPresentation/LPFetcherResponse.h>

@class LPVideo;

__attribute__((visibility("hidden")))
@interface LPFetcherVideoResponse : LPFetcherResponse
{
    LPVideo *_video;
}

+ (id)videoPropertiesForFetcher:(id)arg1;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) LPVideo *video; // @synthesize video=_video;
- (id)initWithVideo:(id)arg1 fetcher:(id)arg2;

@end

