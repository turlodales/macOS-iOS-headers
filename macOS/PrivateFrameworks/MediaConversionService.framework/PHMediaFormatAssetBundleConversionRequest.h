//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaConversionService/PHMediaFormatConversionCompositeRequest.h>

@class NSArray;

@interface PHMediaFormatAssetBundleConversionRequest : PHMediaFormatConversionCompositeRequest
{
    NSArray *_subrequests;
}

- (void).cxx_destruct;
@property(retain) NSArray *subrequests; // @synthesize subrequests=_subrequests;
- (id)outputFileType;
- (id)outputPathExtension;
- (void)postProcessSuccessfulCompositeRequest;
- (BOOL)requiresMetadataChanges;
- (BOOL)requiresFormatConversion;
- (void)enumerateSubrequests:(CDUnknownBlockType)arg1;
- (void)enqueueSubrequestsOnConversionManager:(id)arg1;
- (BOOL)prepareWithError:(id *)arg1;

@end

