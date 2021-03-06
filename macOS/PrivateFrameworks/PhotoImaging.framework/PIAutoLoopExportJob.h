//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUVideoExportJob.h>

@interface PIAutoLoopExportJob : NUVideoExportJob
{
}

+ (id)metalRenderer;
+ (BOOL)shouldUseMetalRenderer;
- (BOOL)writeVideoFrom:(id)arg1 toWriter:(id)arg2 stillImageTime:(CDStruct_1b6d18a9)arg3 createCustomMetadata:(BOOL)arg4 geometryTransform:(id)arg5 inputSize:(struct CGSize)arg6 outputSize:(struct CGSize)arg7 error:(out id *)arg8;
- (id)renderer:(out id *)arg1;
- (id)autoLoopExportRequest;
- (id)initWithVideoExportRequest:(id)arg1;
- (id)initWithAutoLoopExportRequest:(id)arg1;

@end

