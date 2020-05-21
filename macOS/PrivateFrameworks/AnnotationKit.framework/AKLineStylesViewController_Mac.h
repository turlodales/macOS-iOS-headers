//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class AKController, NSMutableArray, NSStackView;

@interface AKLineStylesViewController_Mac : NSViewController
{
    AKController *_controller;
    CDUnknownBlockType _actionBlock;
    NSStackView *_stackView;
    NSMutableArray *_viewItems;
}

+ (id)generateLineImageForTag:(long long)arg1 isVariableWidth:(BOOL)arg2;
- (void).cxx_destruct;
@property(retain) NSMutableArray *viewItems; // @synthesize viewItems=_viewItems;
@property(retain) NSStackView *stackView; // @synthesize stackView=_stackView;
@property(copy) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property __weak AKController *controller; // @synthesize controller=_controller;
- (id)_lineStyleToolTipForTag:(long long)arg1;
- (id)_imageForTag:(long long)arg1;
- (id)_separatorView;
- (id)_lineStyleItemForTag:(long long)arg1;
- (void)_setupLineStyles;
- (void)_selectOption:(id)arg1;
- (BOOL)validateUserInterfaceItems;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithController:(id)arg1;

@end

