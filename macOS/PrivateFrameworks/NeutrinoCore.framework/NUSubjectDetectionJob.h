//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NURenderJob.h>

@class NSArray, NUSubjectDetectionRequest;

@interface NUSubjectDetectionJob : NURenderJob
{
    NSArray *_observations;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *observations; // @synthesize observations=_observations;
- (void)cleanUp;
- (id)result;
- (BOOL)render:(out id *)arg1;
- (id)subjectsInImage:(id)arg1 error:(out id *)arg2;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (id)scalePolicy;
@property(readonly, nonatomic) NUSubjectDetectionRequest *subjectDetectionRequest;
- (id)initWithRequest:(id)arg1;
- (id)initWithSubjectDetectionRequest:(id)arg1;

@end

