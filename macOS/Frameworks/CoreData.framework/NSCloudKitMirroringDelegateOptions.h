//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKContainerOptions, CKNotificationListener, CKScheduler, NSNumber, NSString, PFCloudKitContainerProvider, PFCloudKitMetadataPurger, PFCloudKitMetricsClient, PFCloudKitStoreMonitorProvider;

@interface NSCloudKitMirroringDelegateOptions : NSObject
{
    NSString *_containerIdentifier;
    NSNumber *_ckAssetThresholdBytes;
    BOOL _initializeSchema;
    BOOL _automaticallyDownloadFileBackedFutures;
    BOOL _automaticallyScheduleImportAndExportOperations;
    NSNumber *_operationMemoryThresholdBytes;
    CKContainerOptions *_containerOptions;
    CKScheduler *_scheduler;
    CKNotificationListener *_notificationListener;
    BOOL _skipCloudKitSetup;
    PFCloudKitContainerProvider *_containerProvider;
    PFCloudKitStoreMonitorProvider *_storeMonitorProvider;
    PFCloudKitMetricsClient *_metricsClient;
    PFCloudKitMetadataPurger *_metadataPurger;
    NSString *_apsConnectionMachServiceName;
    BOOL _useDeviceToDeviceEncryption;
    BOOL _useDaemon;
    BOOL _useTestDaemon;
    BOOL _preserveLegacyRecordMetadataBehavior;
}

@property(retain, nonatomic) NSString *apsConnectionMachServiceName; // @synthesize apsConnectionMachServiceName=_apsConnectionMachServiceName;
@property(nonatomic) BOOL preserveLegacyRecordMetadataBehavior; // @synthesize preserveLegacyRecordMetadataBehavior=_preserveLegacyRecordMetadataBehavior;
@property(nonatomic) BOOL useTestDaemon; // @synthesize useTestDaemon=_useTestDaemon;
@property(nonatomic) BOOL useDaemon; // @synthesize useDaemon=_useDaemon;
@property(retain, nonatomic) PFCloudKitMetadataPurger *metadataPurger; // @synthesize metadataPurger=_metadataPurger;
@property(retain, nonatomic) PFCloudKitStoreMonitorProvider *storeMonitorProvider; // @synthesize storeMonitorProvider=_storeMonitorProvider;
@property(retain, nonatomic) PFCloudKitContainerProvider *containerProvider; // @synthesize containerProvider=_containerProvider;
@property(nonatomic) BOOL skipCloudKitSetup; // @synthesize skipCloudKitSetup=_skipCloudKitSetup;
@property(retain, nonatomic) PFCloudKitMetricsClient *metricsClient; // @synthesize metricsClient=_metricsClient;
@property(retain, nonatomic) CKNotificationListener *notificationListener; // @synthesize notificationListener=_notificationListener;
@property(retain, nonatomic) CKScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(nonatomic) BOOL automaticallyScheduleImportAndExportOperations; // @synthesize automaticallyScheduleImportAndExportOperations=_automaticallyScheduleImportAndExportOperations;
@property(nonatomic) BOOL automaticallyDownloadFileBackedFutures; // @synthesize automaticallyDownloadFileBackedFutures=_automaticallyDownloadFileBackedFutures;
@property(retain, nonatomic) CKContainerOptions *containerOptions; // @synthesize containerOptions=_containerOptions;
@property(retain, nonatomic) NSNumber *operationMemoryThresholdBytes; // @synthesize operationMemoryThresholdBytes=_operationMemoryThresholdBytes;
@property(retain, nonatomic) NSNumber *ckAssetThresholdBytes; // @synthesize ckAssetThresholdBytes=_ckAssetThresholdBytes;
@property(nonatomic) BOOL useDeviceToDeviceEncryption; // @synthesize useDeviceToDeviceEncryption=_useDeviceToDeviceEncryption;
@property(nonatomic) BOOL initializeSchema; // @synthesize initializeSchema=_initializeSchema;
@property(retain, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(nonatomic) BOOL useEncryptedStorage;
- (id)description;
- (void)dealloc;
- (id)copy;
- (id)initWithCloudKitContainerOptions:(id)arg1;
- (id)initWithContainerIdentifier:(id)arg1;
- (id)init;

@end

