//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSView;

@protocol SiriSuggestionsStartPageItemHostedViewControllerProtocol <NSObject>
@property(readonly, nonatomic) BOOL supportsCollapsing;
@property(readonly, nonatomic) BOOL isPerformingSizingAnimation;
@property(readonly, nonatomic) double collapsedHeight;
@property(readonly, nonatomic) double expandedHeight;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *title;
- (void)reloadData;

@optional
@property(nonatomic) BOOL hasContentToDisplay;
@property(retain, nonatomic) NSView *leadingAccessoryView;
@end

