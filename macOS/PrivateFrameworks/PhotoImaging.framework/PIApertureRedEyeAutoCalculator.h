//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUAutoCalculator.h>

@class NUFaceDetectionRequest;

@interface PIApertureRedEyeAutoCalculator : NUAutoCalculator
{
    NUFaceDetectionRequest *_faceRequest;
}

- (void).cxx_destruct;
- (id)apertureRedEyeResultFromFaceObservations:(id)arg1 imageSize:(CDStruct_912cb5d2)arg2;
- (void)submit:(CDUnknownBlockType)arg1;
- (void)cancel;

@end

