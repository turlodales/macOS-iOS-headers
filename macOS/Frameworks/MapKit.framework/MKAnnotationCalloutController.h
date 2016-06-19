//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MKAnnotationView;

@interface MKAnnotationCalloutController : NSObject
{
    id <MKAnnotationCalloutControllerDelegate> _delegate;
    MKAnnotationView *_annotationView;
    CDStruct_51745937 _mapDisplayStyle;
    BOOL _needsCalloutUpdate;
}

@property(nonatomic) CDStruct_51745937 mapDisplayStyle; // @synthesize mapDisplayStyle=_mapDisplayStyle;
@property(nonatomic) __weak id <MKAnnotationCalloutControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MKAnnotationView *annotationView; // @synthesize annotationView=_annotationView;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_setNeedsCalloutUpdate;
- (void)hideCalloutAnimated:(BOOL)arg1;
- (void)showCalloutForAnnotationView:(id)arg1 animated:(BOOL)arg2 scrollToFit:(BOOL)arg3 avoid:(struct CGRect)arg4;
- (struct CGRect)_visibleCenteringRectInView:(id)arg1;
- (void)_updateCalloutAnimated:(BOOL)arg1;
- (void)_removeAccessoryTargets;
- (void)_removeAccessoryTargetForView:(id)arg1;
- (void)_addAccessoryTargetForView:(id)arg1;
- (void)_setDetailAccessoryView:(id)arg1 animated:(BOOL)arg2;
- (void)_setRightAccessoryView:(id)arg1 animated:(BOOL)arg2;
- (void)_setLeftAccessoryView:(id)arg1 backgroundColor:(id)arg2 animated:(BOOL)arg3;
- (void)_setLeftAccessoryView:(id)arg1 animated:(BOOL)arg2;
- (void)_setSubtitle:(id)arg1 animated:(BOOL)arg2;
- (id)_subtitle;
- (void)_setTitle:(id)arg1;
- (BOOL)_isShowingCallout;
- (void)_updateCallout;
- (double)defaultCalloutHeight;
- (id)calloutView;
- (BOOL)isCalloutLeftAnchored;
- (BOOL)isCalloutExpanded;
- (BOOL)calloutContainsPoint:(struct CGPoint)arg1;
- (void)dealloc;

@end

