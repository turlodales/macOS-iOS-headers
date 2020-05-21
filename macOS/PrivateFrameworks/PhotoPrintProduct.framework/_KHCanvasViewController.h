//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UXViewController.h"

#import "KHCanvasLayoutDelegate.h"
#import "KHLayoutViewControllerDelegate.h"

@class KHCanvasLayout, KHLayout, KHSelectionManager, KHSelectionViewController, KHThemeConfiguration, NSArray, NSMutableArray, NSMutableSet, NSString, UXView;

@interface _KHCanvasViewController : UXViewController <KHCanvasLayoutDelegate, KHLayoutViewControllerDelegate>
{
    BOOL _keyController;
    KHSelectionManager *_selectionManager;
    KHCanvasLayout *_canvasLayout;
    KHSelectionViewController *_selectionViewController;
    NSMutableArray *_internalLayoutViewControllers;
    NSMutableSet *_addedConstraints;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *addedConstraints; // @synthesize addedConstraints=_addedConstraints;
@property(retain, nonatomic) NSMutableArray *internalLayoutViewControllers; // @synthesize internalLayoutViewControllers=_internalLayoutViewControllers;
@property(retain, nonatomic) KHSelectionViewController *selectionViewController; // @synthesize selectionViewController=_selectionViewController;
@property(retain, nonatomic) KHCanvasLayout *canvasLayout; // @synthesize canvasLayout=_canvasLayout;
@property(retain, nonatomic) KHSelectionManager *selectionManager; // @synthesize selectionManager=_selectionManager;
- (id)layoutViewForLayout:(id)arg1;
- (id)spacingViewForCanvasLayout:(id)arg1;
- (id)selectionManagerForLayoutViewController:(id)arg1;
- (id)currentThemeForLayoutViewController:(id)arg1;
- (void)updateViewConstraints;
- (void)_setupSelection;
- (void)removeFromParentViewController;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)didEndAnimation;
- (void)willStartAnimation;
@property(readonly, nonatomic) UXView *selectionView;
@property(readonly, nonatomic) NSArray *layoutViewControllers;
- (id)viewControllerForLayout:(id)arg1;
@property(readonly, nonatomic) KHThemeConfiguration *themeConfiguration;
@property(readonly, nonatomic) KHLayout *currentLayout;
@property(nonatomic, getter=isKeyController) BOOL keyController;
- (id)layoutViewControllerForSelection:(id)arg1;
- (BOOL)selectionViewController:(id)arg1 shouldAddSelection:(id)arg2;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)initWithCanvasLayout:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

