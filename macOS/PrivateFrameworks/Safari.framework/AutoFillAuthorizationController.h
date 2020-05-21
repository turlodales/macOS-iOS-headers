//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LAContext, LAUIAuthenticationSheetController, NSData, NSView;

@interface AutoFillAuthorizationController : NSObject
{
    LAUIAuthenticationSheetController *_sheetController;
    LAContext *_currentLAContext;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
- (BOOL)_isSafariAutoFillEnabledAndTouchIDOnDevice;
- (void)_didToggleTouchIDToAutoFill:(id)arg1;
- (void)dealloc;
- (void)endSheet;
@property(readonly, nonatomic) NSData *currentExternalizedContext;
@property(readonly, nonatomic) NSView *view;
- (void)setUpViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)beginSheetForWindow:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithItemName:(id)arg1 autoFillAction:(long long)arg2;

@end

