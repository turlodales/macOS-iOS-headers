//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

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

