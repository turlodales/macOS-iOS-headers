//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Memories/PHAssetWriter.h>

@class AVAssetExportSession;

__attribute__((visibility("hidden")))
@interface PHVideoAssetWriter : PHAssetWriter
{
    AVAssetExportSession *_exportSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVAssetExportSession *exportSession; // @synthesize exportSession=_exportSession;
- (id)requestWithNetworkAccess:(BOOL)arg1;
- (id)request;
- (unsigned long long)_estimatedOutputSizeWithError:(id *)arg1;
- (unsigned long long)estimatedOutputSizeWithError:(id *)arg1;
- (id)transfer;

@end

