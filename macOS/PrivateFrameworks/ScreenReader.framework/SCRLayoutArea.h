//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRMapElement.h>

@class NSArray, NSString, SCRCTargetSelectorTimer;

__attribute__((visibility("hidden")))
@interface SCRLayoutArea : SCRMapElement
{
    struct {
        unsigned int registeredSelectedChildrenMovedNotification:1;
    } _srlFlags;
    SCRCTargetSelectorTimer *_echoDelayTimer;
    struct CGRect _selectedChildrenBounds;
    struct CGPoint _lastEchoedSelectedChildrenOrigin;
    NSArray *_previousSelectionUIElements;
    NSString *_lastPositionDescription;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lastPositionDescription; // @synthesize lastPositionDescription=_lastPositionDescription;
- (BOOL)canStopInteracting;
- (BOOL)canFocusOutInto;
- (BOOL)isContainerElement;
- (BOOL)isSectionView;
- (void)handleSelectionChange:(id)arg1;
- (BOOL)allowFocusThroughSingleChild;
- (BOOL)addPositionDescriptionForElement:(id)arg1 toRequest:(id)arg2;
- (id)descriptionForSizeOffset:(double)arg1 forWidth:(BOOL)arg2;
- (long long)measurementUnit;
- (id)descriptionForSize:(struct CGSize)arg1 orientation:(long long)arg2;
- (id)_offsetDescriptionForOrigin:(struct CGPoint)arg1 lastOrigin:(struct CGPoint)arg2;
- (id)_offsetDescriptionForOrigin:(struct CGPoint)arg1 lastOrigin:(struct CGPoint)arg2 verticalUnitDescription:(id)arg3 horizontalUnitDescription:(id)arg4;
- (void)_echoDescriptionForPositionChange:(id)arg1;
- (id)descriptionForScreenPoint:(struct CGPoint)arg1;
- (id)_valueDescriptionForPoint:(struct CGPoint)arg1;
- (BOOL)containsMultipleFormatUnit;
- (id)verticalUnitDescription;
- (id)horizontalUnitDescription;
- (struct CGSize)transformedSizeForSize:(struct CGSize)arg1;
- (BOOL)supportsTransformedSizeForSize;
- (struct CGPoint)transformedPointForPoint:(struct CGPoint)arg1;
- (BOOL)supportsTransformedPointForPoint;
- (void)setPreviousSelectionUIElements:(id)arg1;
- (id)previousSelectionUIElements;
- (void)setIsEventHandler:(BOOL)arg1 isKeyboardHandler:(BOOL)arg2;
- (void)setSelectedChildrenBounds:(struct CGRect)arg1;
- (void)_echoSelectedChildrenPositionChangeSummary;
- (void)dispatchLayoutUpdate;
- (id)_echoDelayTimer;
- (void)echoCurrentSelectionWithQueueID:(id)arg1 interruptsRequests:(BOOL)arg2 excludingIdentifiers:(id)arg3;
- (void)_selectedChildrenMoved:(id)arg1;
- (id)_selectedLayoutItems;
- (void)dealloc;
- (id)initWithUIElement:(id)arg1 parent:(id)arg2;

@end

