//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NEPrettyDescription.h"

@class NEConfiguration, NEConfigurationManager, NEDNSProxyProviderProtocol, NSString;

@interface NEDNSProxyManager : NSObject <NEPrettyDescription>
{
    BOOL _hasLoaded;
    NEConfiguration *_configuration;
    NEConfigurationManager *_configurationManager;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(readonly) NEConfigurationManager *configurationManager; // @synthesize configurationManager=_configurationManager;
@property(retain) NEConfiguration *configuration; // @synthesize configuration=_configuration;
@property BOOL hasLoaded; // @synthesize hasLoaded=_hasLoaded;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
@property(copy) NSString *localizedDescription;
@property(getter=isEnabled) BOOL enabled;
@property(retain) NEDNSProxyProviderProtocol *providerProtocol;
- (void)saveToPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeFromPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadFromPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initDNSProxyManagerWithPluginType:(id)arg1;
- (void)createEmptyConfiguration;
- (id)init;

@end

