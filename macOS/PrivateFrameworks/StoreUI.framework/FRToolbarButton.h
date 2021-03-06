//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSArray, NSImage, NSString;

@interface FRToolbarButton : NSButton
{
    unsigned long long _badgeCount;
    NSImage *_icon;
    NSArray *_badgedIcons;
    NSString *_nonAttributedTitle;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *nonAttributedTitle; // @synthesize nonAttributedTitle=_nonAttributedTitle;
@property(readonly, nonatomic) NSArray *badgedIcons; // @synthesize badgedIcons=_badgedIcons;
@property(readonly, nonatomic) NSImage *icon; // @synthesize icon=_icon;
@property(nonatomic) unsigned long long badgeCount; // @synthesize badgeCount=_badgeCount;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithTabBarItem:(id)arg1;
- (void)setEnabled:(BOOL)arg1;

@end

