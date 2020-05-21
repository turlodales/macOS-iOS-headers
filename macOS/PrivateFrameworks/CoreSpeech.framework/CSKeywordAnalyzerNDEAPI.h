//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData;

@interface CSKeywordAnalyzerNDEAPI : NSObject
{
    void **_ndeObject;
    NSMutableData *_currentBlob;
    unsigned long long _activeChannel;
    id <CSKeywordAnalyzerNDEAPIScoreDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CSKeywordAnalyzerNDEAPIScoreDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long activeChannel; // @synthesize activeChannel=_activeChannel;
- (void)reset;
- (void)processAudioChunk:(id)arg1;
- (void)processAudioBytes:(void *)arg1 withNumberOfSamples:(long long)arg2;
- (void)checkForTriggerWithBytes:(const short *)arg1 withNumberOfSamples:(long long)arg2;
- (void)dealloc;
- (id)initWithBlob:(id)arg1;

@end

