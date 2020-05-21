//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "AMSBagConsumer.h"

@class ACAccount, AMSProcessInfo, NSDictionary, NSString;

@interface AMSUIDynamicViewController : NSViewController <AMSBagConsumer>
{
    AMSUIDynamicViewController *_dynamicViewController;
}

+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
- (void).cxx_destruct;
@property(readonly) AMSUIDynamicViewController *dynamicViewController; // @synthesize dynamicViewController=_dynamicViewController;
- (void)_setupChildViewController:(id)arg1;
- (void)_setup;
- (void)viewWillLayout;
- (void)viewDidLoad;
- (void)setTitle:(id)arg1;
- (id)title;
@property(retain) NSDictionary *metricsOverlay;
@property(retain) AMSProcessInfo *clientInfo;
@property(retain) id <AMSBagProtocol> bag;
@property(retain) ACAccount *account;
- (id)initWithBag:(id)arg1 javaScriptURL:(id)arg2;
- (id)initWithBag:(id)arg1 javaScriptBagValue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

