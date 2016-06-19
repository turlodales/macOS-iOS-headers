//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class MKImageView, NSArray, NSView, _MKUILabel;

@interface MKTableViewCell : NSTableCellView
{
    MKImageView *_mkImageView;
    NSArray *_mkConstraints;
    long long _style;
    NSView *_disclosureIndicator;
    BOOL _showDisclosureIndicator;
    _MKUILabel *textLabel;
}

+ (double)height;
@property(nonatomic) BOOL showDisclosureIndicator; // @synthesize showDisclosureIndicator=_showDisclosureIndicator;
@property(retain) _MKUILabel *textLabel; // @synthesize textLabel;
- (void).cxx_destruct;
- (void)viewDidMoveToSuperview;
@property(readonly) NSView *contentView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

