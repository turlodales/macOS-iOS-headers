//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSWindowDelegate.h"

@class IMKClipView, NSAppearance, NSString;

@interface IMKWindowController : NSWindowController <NSWindowDelegate>
{
    IMKClipView *_clipView;
}

@property(retain, nonatomic) IMKClipView *clipView; // @synthesize clipView=_clipView;
@property(nonatomic) long long windowLevel;
@property(retain, nonatomic) NSAppearance *appearance;
- (id)_createWindow;
- (void)setWindowFrame:(struct CGRect)arg1 animation:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

