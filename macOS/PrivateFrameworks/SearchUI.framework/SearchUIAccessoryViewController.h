//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SearchUIDetailedRowComponent.h"

@class NSString, NSView, SearchUIDetailedRowModel;

@interface SearchUIAccessoryViewController : NSObject <SearchUIDetailedRowComponent>
{
    SearchUIDetailedRowModel *rowModel;
    NSView *view;
    id <SearchUIFeedbackDelegate> feedbackDelegate;
    id <SearchUIAccessoryViewDelegate> _delegate;
}

+ (BOOL)supportsRowModel:(id)arg1;
+ (Class)accessoryViewClassForRowModel:(id)arg1;
- (void).cxx_destruct;
@property __weak id <SearchUIAccessoryViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SearchUIFeedbackDelegate> feedbackDelegate; // @synthesize feedbackDelegate;
@property(retain, nonatomic) NSView *view; // @synthesize view;
@property(retain, nonatomic) SearchUIDetailedRowModel *rowModel; // @synthesize rowModel;
- (void)updateWithContacts:(id)arg1;
@property(readonly) unsigned long long type;
- (BOOL)shouldTopAlignForAccessibilityContentSizes;
- (void)buttonPressed;
- (void)hide;
- (void)updateWithRowModel:(id)arg1;
- (void)didEngageAction:(unsigned long long)arg1 destination:(unsigned long long)arg2;
- (id)setupView;
- (id)controlInView:(id)arg1;
- (id)init;
- (BOOL)shouldVerticallyCenter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

