//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class CPKMatrixView, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPKMatrixSectionView : NSView
{
    CPKMatrixView *_matrixView;
    long long _section;
    long long _selectedIndex;
    long long _destinationIndex;
    long long _popupTargetIndex;
    NSMutableArray *_cachedEntities;
    BOOL _highlightedByMouse;
    BOOL _emojiSection;
    BOOL _hasLastMouseDown;
    const struct CVSectionMatrixGeometry *_sectionGeometry;
}

- (id)_characterDescriptionAtIndex:(long long)arg1;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (void)_invalidateCharacterAtIndex:(long long)arg1 withEntity:(id)arg2;
- (BOOL)isFlipped;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)_delayedConfirmWithEntity:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)_delayedShowVariationPopup;
- (void)mouseDown:(id)arg1;
- (void)_drawEmojiGlyphsFromIndex:(long long)arg1 to:(long long)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (void)_closeDiversityAlertWithConfirm:(BOOL)arg1;
- (void)_showDiversityAlertAfterSelectedString:(id)arg1;
- (void)_confirmSelectedDiversityCharacter:(id)arg1;
- (void)showVariationPopupAtIndex:(long long)arg1 byMouse:(BOOL)arg2;
- (void)startDraggingDetachedWindow;
- (id)characterDataAtIndex:(long long)arg1;
- (struct CGRect)glyphRectAtIndex:(long long)arg1;
- (struct CGRect)frameRectAtIndex:(long long)arg1;
- (void)highlightIndex:(long long)arg1 byMouse:(BOOL)arg2;
- (BOOL)index:(long long *)arg1 atPoint:(struct CGPoint)arg2;
- (id)initWithFrame:(struct CGRect)arg1 forSection:(long long)arg2 inMatrixView:(id)arg3;
- (long long)_columnCount;
- (long long)_rowCount;
- (long long)_dataCount;
- (BOOL)_visibleFirstIndex:(long long *)arg1 lastIndex:(long long *)arg2;
- (id)_axChildrenInRange:(struct _NSRange)arg1;
- (id)_matrixView;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (unsigned long long)accessibilityArrayAttributeCount:(id)arg1;
- (unsigned long long)accessibilityIndexOfChild:(id)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;

@end

