//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LoginUIKit/LUIController.h>

@interface LUIScreenSharingStatusController : LUIController
{
    BOOL _registered;
}

+ (id)controllerWithStyle:(int)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1;
- (void)tearDownController;
- (void)resumeController;
- (void)pauseController;
- (void)_updateContentView;
- (void)_setupContentView;
- (id)_colorForStyle;

@end

