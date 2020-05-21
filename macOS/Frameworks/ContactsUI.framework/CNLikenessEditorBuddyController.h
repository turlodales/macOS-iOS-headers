//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ContactsUI/CNAvatarEditorViewController.h>

@class NSDictionary, NSView, PRLikeness;

@interface CNLikenessEditorBuddyController : CNAvatarEditorViewController
{
    id <MBSecondPartyHost> _host;
    NSView *_editorAreaView;
    PRLikeness *_finalizedLikeness;
    NSDictionary *_userInfo;
}

+ (void)shouldDisplayLikenessEditorForPrimaryiCloudAccountWithCompletion:(CDUnknownBlockType)arg1;
+ (BOOL)shouldDisplayLikenessEditorForAppleID:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain) PRLikeness *finalizedLikeness; // @synthesize finalizedLikeness=_finalizedLikeness;
@property(retain) NSView *editorAreaView; // @synthesize editorAreaView=_editorAreaView;
@property __weak id <MBSecondPartyHost> host; // @synthesize host=_host;
- (BOOL)isBuddy;
- (BOOL)isBackwardsNavigationEnabled;
- (void)setNextButtonTitle:(id)arg1;
- (void)setNextButtonAction:(CDUnknownBlockType)arg1;
- (void)setNextButtonEnabled:(BOOL)arg1;
- (void)setPreviousButtonAction:(CDUnknownBlockType)arg1;
- (void)setPreviousButtonEnabled:(BOOL)arg1;
- (void)setWindowTitle:(id)arg1;
- (void)viewDidLoad;
- (id)initWithHost:(id)arg1 userInfo:(id)arg2;

@end

