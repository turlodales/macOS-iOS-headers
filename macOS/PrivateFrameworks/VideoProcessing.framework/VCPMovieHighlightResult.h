//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VCPVideoKeyFrameResult;

@interface VCPMovieHighlightResult : NSObject
{
    float _score;
    VCPVideoKeyFrameResult *_keyFrame;
    CDStruct_e83c9415 _timerange;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) VCPVideoKeyFrameResult *keyFrame; // @synthesize keyFrame=_keyFrame;
@property(readonly, nonatomic) float score; // @synthesize score=_score;
@property(readonly, nonatomic) CDStruct_e83c9415 timerange; // @synthesize timerange=_timerange;
- (id)initWithTimeRange:(CDStruct_e83c9415)arg1 score:(float)arg2 andKeyFrame:(id)arg3;

@end

