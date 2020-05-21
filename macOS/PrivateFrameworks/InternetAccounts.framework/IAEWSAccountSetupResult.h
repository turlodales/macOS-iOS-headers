//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InternetAccounts/IAAccountSetupResult.h>

@class NSString, NSURL;

@interface IAEWSAccountSetupResult : IAAccountSetupResult
{
    NSString *_fullName;
    NSString *_email;
    NSString *_internalHost;
    NSString *_internalPath;
    BOOL _internalUseSSL;
    long long _internalPort;
    NSString *_externalHost;
    NSString *_externalPath;
    BOOL _externalUseSSL;
    long long _externalPort;
    NSURL *_internalURL;
    NSURL *_externalURL;
    NSString *_rootFolderID;
    NSURL *_autodiscoverURL;
}

- (void).cxx_destruct;
@property(retain) NSURL *autodiscoverURL; // @synthesize autodiscoverURL=_autodiscoverURL;
@property(retain) NSString *rootFolderID; // @synthesize rootFolderID=_rootFolderID;
@property(retain) NSURL *externalURL; // @synthesize externalURL=_externalURL;
@property(retain) NSURL *internalURL; // @synthesize internalURL=_internalURL;
@property long long externalPort; // @synthesize externalPort=_externalPort;
@property BOOL externalUseSSL; // @synthesize externalUseSSL=_externalUseSSL;
@property(retain) NSString *externalPath; // @synthesize externalPath=_externalPath;
@property(retain) NSString *externalHost; // @synthesize externalHost=_externalHost;
@property long long internalPort; // @synthesize internalPort=_internalPort;
@property BOOL internalUseSSL; // @synthesize internalUseSSL=_internalUseSSL;
@property(retain) NSString *internalPath; // @synthesize internalPath=_internalPath;
@property(retain) NSString *internalHost; // @synthesize internalHost=_internalHost;
@property(retain) NSString *email; // @synthesize email=_email;
@property(retain) NSString *fullName; // @synthesize fullName=_fullName;

@end

