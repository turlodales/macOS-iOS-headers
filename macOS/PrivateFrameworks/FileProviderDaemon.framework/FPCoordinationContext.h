//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSProgress;

__attribute__((visibility("hidden")))
@interface FPCoordinationContext : NSObject
{
    NSProgress *_progress;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
- (id)initWithProgress:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

