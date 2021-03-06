//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <ContactsUI/CNContactCardWidget-Protocol.h>
#import <ContactsUI/CNUIUserActionListConsumerDelegate-Protocol.h>

@class CNContactActionsView, CNUIUserActionListDataSource, NSString;
@protocol CNUIUserActionContext;

@interface CNContactActionsViewController : NSViewController <CNUIUserActionListConsumerDelegate, CNContactCardWidget>
{
    CNUIUserActionListDataSource *_userActionListDataSource;
    CNContactActionsView *_contactActionsView;
    id <CNUIUserActionContext> _actionContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <CNUIUserActionContext> actionContext; // @synthesize actionContext=_actionContext;
@property(retain, nonatomic) CNContactActionsView *contactActionsView; // @synthesize contactActionsView=_contactActionsView;
@property(retain, nonatomic) CNUIUserActionListDataSource *userActionListDataSource; // @synthesize userActionListDataSource=_userActionListDataSource;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)commitEditingAndReturnError:(id *)arg1;
- (void)cardCommitEditing;
- (BOOL)shouldBeIncludedInKeyViewLoop;
- (double)customSpacingAfterWidget;
- (double)desiredHeight;
- (void)consumer:(id)arg1 didSelectAction:(id)arg2;
- (void)mouseUp:(id)arg1;
- (void)setContact:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

