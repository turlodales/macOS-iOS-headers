//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PASampling/PACountedFrame.h>

@class PASampleFrame;

@interface PACountedSampleFrame : PACountedFrame
{
    PASampleFrame *_sampleFrame;
}

- (void).cxx_destruct;
@property(readonly) PASampleFrame *sampleFrame; // @synthesize sampleFrame=_sampleFrame;
- (id)debugDescription;
- (id)initWithSampleFrame:(id)arg1;

@end

