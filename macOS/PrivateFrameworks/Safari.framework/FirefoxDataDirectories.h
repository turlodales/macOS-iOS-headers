//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/BrowserDataDirectories.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface FirefoxDataDirectories : BrowserDataDirectories
{
    NSURL *_profileURL;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (Class)historyImporterClass;
- (Class)credentialImporterClass;
- (Class)bookmarkImportEngineClass;
@property(readonly, nonatomic) NSURL *legacyKeyDatabaseURL;
@property(readonly, nonatomic) NSURL *legacyCredentialDatabaseURL;
@property(readonly, nonatomic) NSURL *credentialJSONURL;
@property(readonly, nonatomic) NSURL *keyDatabaseURL;
@property(readonly, nonatomic) NSURL *placesDatabaseURL;
- (id)_activeProfileDirectoryURL;
- (id)_activeProfileAttributesDictionary;

@end

