//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SFSiriWordTimingInfo;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFSiriWordTimingPlayer : NSObject
{
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _wordIndex;
    SFSiriWordTimingInfo *_wordInfo;
    unsigned int _flags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _startTime;
    NSString *_text;
    CDUnknownBlockType _wordHandler;
    NSArray *_wordTimings;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *wordTimings; // @synthesize wordTimings=_wordTimings;
@property(copy, nonatomic) CDUnknownBlockType wordHandler; // @synthesize wordHandler=_wordHandler;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_processWord;
- (void)_processNextWord;
- (void)invalidate;
- (void)activate;
- (id)init;

@end

