//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoProcessing/VCPVideoMetaAnalyzer.h>

@class NSMutableArray;

@interface VCPVideMetaOrientationAnalyzer : VCPVideoMetaAnalyzer
{
    NSMutableArray *_results;
}

- (void).cxx_destruct;
- (id)publicResults;
- (int)processMetadataGroup:(id)arg1 flags:(unsigned long long *)arg2;
- (id)convertQuickTimeVideoOrientationToUIOrientation:(long long)arg1;
- (id)init;

@end

