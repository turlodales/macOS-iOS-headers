//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSView;

__attribute__((visibility("hidden")))
@interface ABCardViewSnapshot : NSObject
{
    NSView *_view;
    NSView *_hidingView;
}

+ (id)snapshotWithView:(id)arg1;
- (void)revealView;
- (id)snapshotImage;
- (id)newSnapshotImageView;
- (void)hideView;
- (void)dealloc;
- (id)initWithView:(id)arg1;

@end

