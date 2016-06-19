//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMatrix.h"

@class NSLock;

@interface IFXDiskSelectView : NSMatrix
{
    long long _actualItems;
    id _previousCell;
    int _targetViewAppearance;
    struct CGRect _lastFrame;
    NSLock *_KVODestructionLock;
    SEL _comparisonSelector;
}

- (void)setComparisonSelector:(SEL)arg1;
@property int targetViewAppearance;
- (void)removeAllItems;
- (void)removeItemWithObject:(id)arg1;
- (void)addItemWithObject:(id)arg1;
- (id)cellForTarget:(id)arg1;
- (void)scrollToFirstAvailableTarget;
- (BOOL)canBecomeKeyView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidMoveToWindow;
- (void)viewFrameDidChange:(id)arg1;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
- (void)deselectAllCells;
- (void)awakeFromNib;
- (void)dealloc;
- (void)_redoLayoutOnMainThread;
- (void)_redoLayout;
- (id)_addNewCell;

@end

