//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@class NSBox;

__attribute__((visibility("hidden")))
@interface DownloadTableRowView : NSTableRowView
{
    NSBox *_separatorView;
    BOOL _shouldHideSeparator;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL shouldHideSeparator; // @synthesize shouldHideSeparator=_shouldHideSeparator;
- (void)_updateSeparatorForSelectedOrEmphasizedChange;
- (void)_removeSeparator;
- (void)_addSeparator;
- (void)setEmphasized:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)drawSeparatorInRect:(struct CGRect)arg1;
- (BOOL)allowsVibrancy;

@end

