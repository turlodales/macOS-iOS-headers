//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LoginUIKit/LUI2ViewController.h>

@class LUI2TextField;

@interface LUI2SafeBootViewController : LUI2ViewController
{
    LUI2TextField *_safeBootTextField;
}

@property(retain) LUI2TextField *safeBootTextField; // @synthesize safeBootTextField=_safeBootTextField;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)_isSafeBoot;

@end

