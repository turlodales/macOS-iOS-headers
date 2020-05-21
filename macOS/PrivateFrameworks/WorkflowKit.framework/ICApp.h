//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSObject<OS_dispatch_queue>, NSString, WFImage;

@interface ICApp : NSObject
{
    BOOL _installed;
    BOOL _checkedInstallStatus;
    NSArray *_schemes;
    NSArray *_shareExtensions;
    NSString *_localizedName;
    WFImage *_icon;
    NSString *_identifier;
    NSDictionary *_definition;
    NSObject<OS_dispatch_queue> *_stateAccessQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateAccessQueue; // @synthesize stateAccessQueue=_stateAccessQueue;
@property(nonatomic) BOOL checkedInstallStatus; // @synthesize checkedInstallStatus=_checkedInstallStatus;
@property(readonly, nonatomic) NSDictionary *definition; // @synthesize definition=_definition;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)identifierFromDictionaryForCurrentIdiom:(id)arg1;
- (void)openFile:(id)arg1 withAnnotation:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)openFile:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=isInstalled) BOOL installed; // @synthesize installed=_installed;
- (void)updateInstalledStatus;
- (void)resetInstalledStatus;
- (BOOL)isCurrentlyInstalled;
- (BOOL)determinesInstallStatusViaURLScheme;
@property(readonly, nonatomic) long long state;
- (void)loadIconWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *iconName;
@property(readonly, nonatomic) NSArray *metadata;
@property(readonly, nonatomic) NSArray *shareExtensions; // @synthesize shareExtensions=_shareExtensions;
@property(readonly, nonatomic) NSArray *documentActions;
@property(readonly, nonatomic) NSArray *documentTypes;
@property(readonly, nonatomic) NSArray *exportedFileTypes;
- (id)schemeNamed:(id)arg1;
@property(readonly, nonatomic) NSArray *schemes; // @synthesize schemes=_schemes;
@property(retain, nonatomic) WFImage *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) NSString *iTunesIdentifier;
- (id)localizedString:(id)arg1 identifier:(id)arg2;
@property(readonly, nonatomic) NSString *localizedShortName;
@property(readonly, nonatomic) NSString *shortName;
@property(readonly, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *bundleIdentifier;
@property(readonly, nonatomic) NSArray *allBundleIdentifiers;
- (id)bundleIdentifiersByIdiom;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2;

@end

