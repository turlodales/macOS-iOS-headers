//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LoginUIKit/LUI2ViewController.h>

@interface LUI2ScreenSharingViewController : LUI2ViewController
{
    BOOL _registered;
}

@property BOOL registered; // @synthesize registered=_registered;
- (void)dealloc;
- (void)viewWillDisappear;
- (void)viewDidLoad;
- (void)resume;
- (void)pause;
- (void)_updateContentView;
- (void)_setupContentView;

@end

