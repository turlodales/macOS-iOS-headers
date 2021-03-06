//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CSKStreamSourceDelegate;

@interface CSKStreamSource : NSObject
{
    BOOL _isStreaming;
    id <CSKStreamSourceDelegate> _delegate;
    unsigned long long _total;
    unsigned long long _failures;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isStreaming; // @synthesize isStreaming=_isStreaming;
@property(nonatomic) unsigned long long failures; // @synthesize failures=_failures;
@property(nonatomic) unsigned long long total; // @synthesize total=_total;
@property(nonatomic) __weak id <CSKStreamSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleActivityEvents:(id)arg1 usingTimeZone:(id)arg2 fromBackward:(BOOL)arg3;
- (void)fetchForward;
- (void)fetchBackward;
- (void)loadMoreWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fail;
- (void)finish;
- (void)stop;
- (void)resume;
- (id)init;

@end

