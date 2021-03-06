//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoProcessing/VCPImageAnalyzer.h>

@class NSArray, NSMutableArray, NSString, VCPCNNModelEspresso;

@interface VCPImageMotionFlowAnalyzer : VCPImageAnalyzer
{
    VCPCNNModelEspresso *_modelEspresso;
    NSArray *_inputNames;
    vector_f351fd4e _inputsData;
    NSString *_resConfig;
    NSMutableArray *_results;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)analyzeImages:(struct __CVBuffer *)arg1 secondImage:(struct __CVBuffer *)arg2 moflow:(float *)arg3 cancel:(CDUnknownBlockType)arg4;
- (int)createInput:(float *)arg1 withBuffer:(struct __CVBuffer *)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4;
- (int)createModel;
- (int)copyImage:(struct __CVBuffer *)arg1 toData:(float *)arg2 withChannels:(int)arg3;
- (void)dealloc;
- (id)init;

@end

