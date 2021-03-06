//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VCPCNNData, VCPCNNModel;

@interface VCPContentAnalysis : NSObject
{
    VCPCNNModel *_model;
    VCPCNNData *_input;
    unsigned long long _previousContentType;
    struct __CVBuffer *_argbPixelBuffer;
    struct OpaqueVTPixelTransferSession *_argbTransferSession;
}

+ (id)contentAnalysis;
- (void).cxx_destruct;
- (int)detectPixelBuffer:(struct __CVBuffer *)arg1 contentType:(unsigned long long *)arg2;
- (int)blockContentDetection:(unsigned long long *)arg1;
- (void)copyBlock:(char *)arg1 withStride:(unsigned long long)arg2 toBlock:(float *)arg3;
- (void)dealloc;
- (id)init;

@end

