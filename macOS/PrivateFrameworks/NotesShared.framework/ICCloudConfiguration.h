//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ICCloudThrottlingPolicy, NSNumber, NSString, NSTimer;

@interface ICCloudConfiguration : NSObject
{
    BOOL _shouldSyncWhenEnteringForeground;
    ICCloudThrottlingPolicy *_throttlingPolicy;
    double _syncInterval;
    unsigned long long _maxInlineAssetSizeBytes;
    unsigned long long _maxAttachmentsPerNote;
    unsigned long long _maxSubAttachmentsPerAttachment;
    unsigned long long _resultsLimitPerSyncOperation;
    NSNumber *_maximumAttachmentSizeMB;
    NSString *_minimumClientVersion;
    NSTimer *_downloadTimer;
}

+ (id)availableConfigurationURLs;
+ (id)cachedConfigurationURL;
+ (void)setDefaultConfigurationURL:(id)arg1;
+ (id)defaultConfigurationURL;
+ (BOOL)isConfigurationValid:(id)arg1;
+ (id)sharedConfiguration;
- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *downloadTimer; // @synthesize downloadTimer=_downloadTimer;
@property(copy, nonatomic) NSString *minimumClientVersion; // @synthesize minimumClientVersion=_minimumClientVersion;
@property(retain, nonatomic) NSNumber *maximumAttachmentSizeMB; // @synthesize maximumAttachmentSizeMB=_maximumAttachmentSizeMB;
@property(nonatomic) unsigned long long resultsLimitPerSyncOperation; // @synthesize resultsLimitPerSyncOperation=_resultsLimitPerSyncOperation;
@property(nonatomic) unsigned long long maxSubAttachmentsPerAttachment; // @synthesize maxSubAttachmentsPerAttachment=_maxSubAttachmentsPerAttachment;
@property(nonatomic) unsigned long long maxAttachmentsPerNote; // @synthesize maxAttachmentsPerNote=_maxAttachmentsPerNote;
@property(nonatomic) unsigned long long maxInlineAssetSizeBytes; // @synthesize maxInlineAssetSizeBytes=_maxInlineAssetSizeBytes;
@property(nonatomic) BOOL shouldSyncWhenEnteringForeground; // @synthesize shouldSyncWhenEnteringForeground=_shouldSyncWhenEnteringForeground;
@property(nonatomic) double syncInterval; // @synthesize syncInterval=_syncInterval;
@property(retain, nonatomic) ICCloudThrottlingPolicy *throttlingPolicy; // @synthesize throttlingPolicy=_throttlingPolicy;
- (void)setConfigurationFromDictionary:(id)arg1;
- (void)loadConfigurationFromURL:(id)arg1;
- (void)downloadConfigurationFromRemoteURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)downloadRemoteConfiguration:(id)arg1;
- (void)loadLocalConfigurationFile;
- (void)dealloc;
- (id)init;

@end

