//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AKInkRendererHelper : NSObject
{
}

+ (double)_calculateMaxRenderingSize;
+ (id)_sharedOfflineInkRendererFullSize;
+ (id)_sharedOfflineInkRendererSmallSize;
+ (double)maxRenderingSize;
+ (void)purgeSharedRenderer;
+ (id)renderDrawing:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 scale:(double)arg3;

@end

