//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConsoleKit/CSKMessageHeaderView.h>

@class NSTextField;

@interface CSKMessageExtendedHeaderView : CSKMessageHeaderView
{
    NSTextField *_activityIDTextField;
    NSTextField *_threadIDTextField;
    NSTextField *_PIDTextField;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSTextField *PIDTextField; // @synthesize PIDTextField=_PIDTextField;
@property(nonatomic) __weak NSTextField *threadIDTextField; // @synthesize threadIDTextField=_threadIDTextField;
@property(nonatomic) __weak NSTextField *activityIDTextField; // @synthesize activityIDTextField=_activityIDTextField;
- (void)updateViewWithMessage:(id)arg1;

@end

