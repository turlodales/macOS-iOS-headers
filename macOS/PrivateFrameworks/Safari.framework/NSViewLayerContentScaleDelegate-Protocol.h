//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, NSWindow;

@protocol NSViewLayerContentScaleDelegate <NSObject>

@optional
- (BOOL)layer:(CALayer *)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(NSWindow *)arg3;
@end

