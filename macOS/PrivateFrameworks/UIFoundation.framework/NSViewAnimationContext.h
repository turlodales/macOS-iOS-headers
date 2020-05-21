//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface NSViewAnimationContext : NSObject
{
    NSArray *_viewAnimations;
    long long _animationCount;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) long long animationCount; // @synthesize animationCount=_animationCount;
@property(retain, nonatomic) NSArray *viewAnimations; // @synthesize viewAnimations=_viewAnimations;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

