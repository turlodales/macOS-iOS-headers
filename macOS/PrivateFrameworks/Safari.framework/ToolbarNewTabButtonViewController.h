//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTitlebarAccessoryViewController.h"

@class NewTabButton;

__attribute__((visibility("hidden")))
@interface ToolbarNewTabButtonViewController : NSTitlebarAccessoryViewController
{
    NewTabButton *_createTabButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NewTabButton *createTabButton; // @synthesize createTabButton=_createTabButton;
- (id)initWithButtonTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

