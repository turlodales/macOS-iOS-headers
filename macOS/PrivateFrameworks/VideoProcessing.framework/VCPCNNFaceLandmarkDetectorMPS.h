//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoProcessing/VCPCNNFaceLandmarkDetector.h>

@class VCPCNNData, VCPCNNModel;

@interface VCPCNNFaceLandmarkDetectorMPS : VCPCNNFaceLandmarkDetector
{
    VCPCNNModel *_modelLandmarks;
    VCPCNNData *_faceInput;
}

- (void).cxx_destruct;
- (int)computeLandmarks:(float *)arg1;
- (float *)getInputBuffer;
- (id)init;

@end

