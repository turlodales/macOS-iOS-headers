//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APCPlayerEmbedInfo, AUAudioUnitOfflineProcessor, AUPasscodeEncoder;

@interface APCEncoderProcessor : NSObject
{
    AUPasscodeEncoder *_encoderAU;
    AUAudioUnitOfflineProcessor *_processor;
    APCPlayerEmbedInfo *_passcodeEmbedInfo;
}

- (void).cxx_destruct;
- (BOOL)getEmbeddingInfo:(id *)arg1;
- (void)run;
- (float)evaluateAsset:(id)arg1;
- (id)initWithAssetURL:(id)arg1 codecConfig:(id)arg2 payload:(id)arg3 outputURL:(id)arg4 error:(id *)arg5;

@end

