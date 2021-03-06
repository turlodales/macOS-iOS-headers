//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPMetadataProviderSpecialization.h>

@class AVAssetImageGenerator, LPLinkMetadata, LPMediaAssetFetcher;

__attribute__((visibility("hidden")))
@interface LPStreamingMediaMetadataProviderSpecialization : LPMetadataProviderSpecialization
{
    BOOL _cancelled;
    LPMediaAssetFetcher *_fetcher;
    AVAssetImageGenerator *_videoImageGenerator;
    LPLinkMetadata *_metadata;
}

+ (id)specializedMetadataProviderForResourceWithContext:(id)arg1;
+ (unsigned long long)specialization;
- (void).cxx_destruct;
- (void)done;
- (void)fail;
- (void)cancel;
- (void)start;

@end

