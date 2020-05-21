//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConsoleKit/CSKHeaderView.h>

@class CSKBadgeLabel, CSKExtendedTextField, NSTextField;

@interface CSKActivityHeaderView : CSKHeaderView
{
    CSKExtendedTextField *_processTextField;
    NSTextField *_activityIDTextField;
    NSTextField *_parentActivityIDTextField;
    NSTextField *_timeTextField;
    NSTextField *_volatileBadgeLabel;
    CSKBadgeLabel *_detachedBadgeLabel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak CSKBadgeLabel *detachedBadgeLabel; // @synthesize detachedBadgeLabel=_detachedBadgeLabel;
@property(nonatomic) __weak NSTextField *volatileBadgeLabel; // @synthesize volatileBadgeLabel=_volatileBadgeLabel;
@property(nonatomic) __weak NSTextField *timeTextField; // @synthesize timeTextField=_timeTextField;
@property(nonatomic) __weak NSTextField *parentActivityIDTextField; // @synthesize parentActivityIDTextField=_parentActivityIDTextField;
@property(nonatomic) __weak NSTextField *activityIDTextField; // @synthesize activityIDTextField=_activityIDTextField;
@property(nonatomic) __weak CSKExtendedTextField *processTextField; // @synthesize processTextField=_processTextField;
- (void)updateViewWithActivity:(id)arg1;
- (void)awakeFromNib;

@end

