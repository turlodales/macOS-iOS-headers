//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SVXPlaybackRequestInfo : NSObject
{
    BOOL _didStart;
    BOOL _didFinish;
    double _start;
    double _finish;
}

@property(nonatomic) double finish; // @synthesize finish=_finish;
@property(nonatomic) double start; // @synthesize start=_start;
@property(nonatomic) BOOL didFinish; // @synthesize didFinish=_didFinish;
@property(nonatomic) BOOL didStart; // @synthesize didStart=_didStart;
- (double)duration;

@end

