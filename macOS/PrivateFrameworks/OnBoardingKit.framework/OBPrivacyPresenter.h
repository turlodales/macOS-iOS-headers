//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSWindow, NSWindowController, OBPrivacyCombinedController, OBPrivacySplashController;

@interface OBPrivacyPresenter : NSObject
{
    CDUnknownBlockType _dismissHandler;
    OBPrivacySplashController *_splashController;
    OBPrivacyCombinedController *_combinedController;
    NSString *_displayLanguage;
    NSWindow *_presentingWindow;
    NSWindowController *_presentedController;
    NSArray *_presentedIdentifiers;
}

+ (id)presenterForPrivacyUnifiedAboutWithIdentifiers:(id)arg1;
+ (id)presenterForPrivacyUnifiedAbout;
+ (id)presenterForPrivacySplashWithBundleAtPath:(id)arg1;
+ (id)presenterForPrivacySplashWithIdentifer:(id)arg1;
+ (id)presenterForPrivacySplashWithIdentifier:(id)arg1;
+ (id)presenterForPrivacySplashWithBundle:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSArray *presentedIdentifiers; // @synthesize presentedIdentifiers=_presentedIdentifiers;
@property(retain) NSWindowController *presentedController; // @synthesize presentedController=_presentedController;
@property __weak NSWindow *presentingWindow; // @synthesize presentingWindow=_presentingWindow;
@property(retain, nonatomic) NSString *displayLanguage; // @synthesize displayLanguage=_displayLanguage;
@property(retain) OBPrivacyCombinedController *combinedController; // @synthesize combinedController=_combinedController;
@property(retain) OBPrivacySplashController *splashController; // @synthesize splashController=_splashController;
@property(copy) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
- (void)present;
- (void)_presenterDidDismiss;

@end

