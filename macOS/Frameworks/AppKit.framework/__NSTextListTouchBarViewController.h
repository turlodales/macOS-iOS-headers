//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSTextList;

__attribute__((visibility("hidden")))
@interface __NSTextListTouchBarViewController : NSViewController
{
    NSTextList *_textList;
    id _target;
}

+ (id)textListFormats;
- (void).cxx_destruct;
@property __weak id target; // @synthesize target=_target;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(retain) NSTextList *textList; // @dynamic textList;
- (void)_selectList:(id)arg1;
- (void)_updateSelections;
- (BOOL)_viewControllerSupports10_10Features;

@end

