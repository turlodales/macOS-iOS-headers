//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ProcessContextConfiguration : NSObject
{
    BOOL _usePerTabWebProcesses;
    BOOL _useAutomaticWebProcessPrewarming;
    BOOL _useWebProcessCache;
    BOOL _passwordAutoFillAvailable;
    BOOL _addressBookAutoFillEnabled;
    BOOL _shouldPerformAutomatedPageLoadTest;
    BOOL _pageLoadTestShouldTakeScreenshots;
    BOOL _creditCardAutoFillEnabled;
    int _storageBlockingPolicy;
    NSString *_injectedBundlePath;
    long long _pageLoadTestVersion;
    double _pageLoadTestResourceDelay;
    struct ContextClient *_client;
    struct ContextInjectedBundleClient *_injectedBundleClient;
    struct ContextHistoryClient *_historyClient;
    struct GeolocationProvider *_geolocationProvider;
    struct UserNotificationProvider *_notificationProvider;
    NSArray *_additionalReadAccessAllowedPaths;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *additionalReadAccessAllowedPaths; // @synthesize additionalReadAccessAllowedPaths=_additionalReadAccessAllowedPaths;
@property(nonatomic, getter=isCreditCardAutoFillEnabled) BOOL creditCardAutoFillEnabled; // @synthesize creditCardAutoFillEnabled=_creditCardAutoFillEnabled;
@property(nonatomic) struct UserNotificationProvider *notificationProvider; // @synthesize notificationProvider=_notificationProvider;
@property(nonatomic) struct GeolocationProvider *geolocationProvider; // @synthesize geolocationProvider=_geolocationProvider;
@property(nonatomic) struct ContextHistoryClient *historyClient; // @synthesize historyClient=_historyClient;
@property(nonatomic) struct ContextInjectedBundleClient *injectedBundleClient; // @synthesize injectedBundleClient=_injectedBundleClient;
@property(nonatomic) struct ContextClient *client; // @synthesize client=_client;
@property(nonatomic) int storageBlockingPolicy; // @synthesize storageBlockingPolicy=_storageBlockingPolicy;
@property(nonatomic) BOOL pageLoadTestShouldTakeScreenshots; // @synthesize pageLoadTestShouldTakeScreenshots=_pageLoadTestShouldTakeScreenshots;
@property(nonatomic) double pageLoadTestResourceDelay; // @synthesize pageLoadTestResourceDelay=_pageLoadTestResourceDelay;
@property(nonatomic) long long pageLoadTestVersion; // @synthesize pageLoadTestVersion=_pageLoadTestVersion;
@property(nonatomic) BOOL shouldPerformAutomatedPageLoadTest; // @synthesize shouldPerformAutomatedPageLoadTest=_shouldPerformAutomatedPageLoadTest;
@property(nonatomic, getter=isAddressBookAutoFillEnabled) BOOL addressBookAutoFillEnabled; // @synthesize addressBookAutoFillEnabled=_addressBookAutoFillEnabled;
@property(nonatomic, getter=isPasswordAutoFillAvailable) BOOL passwordAutoFillAvailable; // @synthesize passwordAutoFillAvailable=_passwordAutoFillAvailable;
@property(nonatomic) BOOL useWebProcessCache; // @synthesize useWebProcessCache=_useWebProcessCache;
@property(nonatomic) BOOL useAutomaticWebProcessPrewarming; // @synthesize useAutomaticWebProcessPrewarming=_useAutomaticWebProcessPrewarming;
@property(nonatomic) BOOL usePerTabWebProcesses; // @synthesize usePerTabWebProcesses=_usePerTabWebProcesses;
@property(copy, nonatomic) NSString *injectedBundlePath; // @synthesize injectedBundlePath=_injectedBundlePath;
- (id)initWithInjectedBundlePath:(id)arg1 client:(struct ContextClient *)arg2 injectedBundleClient:(struct ContextInjectedBundleClient *)arg3;

@end

