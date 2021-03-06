//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSObject;
@protocol BUStarfieldTimelineDataSource, BUStarfieldTimelineDelegate, BUStarfieldTimelineItem;

__attribute__((visibility("hidden")))
@interface BUStarfieldTimelineLayer : CALayer
{
    void *_reserved[3];
}

- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
@property(retain, nonatomic) NSObject<BUStarfieldTimelineDelegate> *timelineDelegate;
@property(nonatomic) NSObject<BUStarfieldTimelineDataSource> *timelineDataSource;
- (void)reloadData;
- (void)handleReloadData;
- (void)scrollWheel:(id)arg1 atLocation:(struct CGPoint)arg2 byDelta:(struct CGSize)arg3;
- (BOOL)mouseDragged:(id)arg1 toLocation:(struct CGPoint)arg2;
- (void)mouseMoved:(id)arg1 toLocation:(struct CGPoint)arg2;
- (BOOL)mouseUp:(id)arg1 atLocation:(struct CGPoint)arg2;
- (BOOL)mouseDown:(id)arg1 atLocation:(struct CGPoint)arg2;
- (void)notifyItemWasSelected:(id)arg1;
@property(retain, nonatomic) NSObject<BUStarfieldTimelineItem> *selectedItem;
- (struct TTimelineControl *)timelineControl;
- (void)dealloc;
- (void)aboutToTearDown;
- (void)setPosition:(struct CGPoint)arg1;
- (void)setAnchorPoint:(struct CGPoint)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)init;
- (void)tearDownPrivateData;
- (struct BUTimelinePrivate *)privateData;

@end

