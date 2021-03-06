//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSProgress, NSString;

__attribute__((visibility("hidden")))
@interface MCResourceProgressObserver : NSObject
{
    BOOL _progressObserversSet;
    NSString *_name;
    NSProgress *_progress;
    CDUnknownBlockType _cancelHandler;
}

@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)invalidate;
- (id)initWithName:(id)arg1 progress:(id)arg2 cancelHandler:(CDUnknownBlockType)arg3;

@end

