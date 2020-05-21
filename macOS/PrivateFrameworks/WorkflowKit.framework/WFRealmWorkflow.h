//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/RLMObject.h>

#import "WFRecordStorage.h"

@class NSArray, NSData, NSDate, NSNumber, NSSet, NSString, RLMArray<WFWorkflowInputClass>, RLMArray<WFWorkflowType>, RLMLinkingObjects, WFRealmWorkflowIcon, WFRealmWorkflowQuarantine, WFWorkflowIcon, WFWorkflowQuarantine, WFWorkflowTrustedResources;

@interface WFRealmWorkflow : RLMObject <WFRecordStorage>
{
    BOOL _hiddenFromLibraryAndSync;
    BOOL _hiddenInComplication;
    BOOL _deleted;
    NSString *_workflowID;
    NSDate *_createdAt;
    NSDate *_modifiedAt;
    NSString *_name;
    NSString *_legacyName;
    WFRealmWorkflowIcon *_icon;
    WFRealmWorkflowQuarantine *_quarantine;
    WFWorkflowTrustedResources *_trustedResources;
    RLMArray<WFWorkflowType> *_workflowTypeContainers;
    RLMArray<WFWorkflowInputClass> *_inputClassContainers;
    long long _sortOrdering;
    NSString *_minimumClientVersion;
    NSData *_actionsData;
    NSData *_importQuestionsData;
    NSString *_workflowSubtitle;
    NSString *_actionsDescription;
    NSString *_associatedAppBundleIdentifier;
    NSString *_galleryIdentifier;
    NSString *_source;
    WFRealmWorkflow *_conflictOf;
    RLMLinkingObjects *_conflictingWorkflows;
    NSString *_lastSavedOnDeviceName;
    long long _lastSyncedHash;
    NSString *_lastMigratedClientVersion;
    long long _remoteQuarantineStatus;
}

+ (id)linkingObjectsProperties;
+ (id)ignoredProperties;
+ (id)requiredProperties;
+ (id)defaultPropertyValues;
+ (id)primaryKey;
+ (id)className;
- (void).cxx_destruct;
@property long long remoteQuarantineStatus; // @synthesize remoteQuarantineStatus=_remoteQuarantineStatus;
@property(copy) NSString *lastMigratedClientVersion; // @synthesize lastMigratedClientVersion=_lastMigratedClientVersion;
@property BOOL deleted; // @synthesize deleted=_deleted;
@property long long lastSyncedHash; // @synthesize lastSyncedHash=_lastSyncedHash;
@property(copy) NSString *lastSavedOnDeviceName; // @synthesize lastSavedOnDeviceName=_lastSavedOnDeviceName;
@property(readonly) RLMLinkingObjects *conflictingWorkflows; // @synthesize conflictingWorkflows=_conflictingWorkflows;
@property(retain) WFRealmWorkflow *conflictOf; // @synthesize conflictOf=_conflictOf;
@property(copy) NSString *source; // @synthesize source=_source;
@property(copy) NSString *galleryIdentifier; // @synthesize galleryIdentifier=_galleryIdentifier;
@property(copy) NSString *associatedAppBundleIdentifier; // @synthesize associatedAppBundleIdentifier=_associatedAppBundleIdentifier;
@property(copy) NSString *actionsDescription; // @synthesize actionsDescription=_actionsDescription;
@property(copy) NSString *workflowSubtitle; // @synthesize workflowSubtitle=_workflowSubtitle;
@property(copy) NSData *importQuestionsData; // @synthesize importQuestionsData=_importQuestionsData;
@property(copy) NSData *actionsData; // @synthesize actionsData=_actionsData;
@property(copy) NSString *minimumClientVersion; // @synthesize minimumClientVersion=_minimumClientVersion;
@property long long sortOrdering; // @synthesize sortOrdering=_sortOrdering;
@property(getter=isHiddenInComplication) BOOL hiddenInComplication; // @synthesize hiddenInComplication=_hiddenInComplication;
@property(retain) RLMArray<WFWorkflowInputClass> *inputClassContainers; // @synthesize inputClassContainers=_inputClassContainers;
@property(retain) RLMArray<WFWorkflowType> *workflowTypeContainers; // @synthesize workflowTypeContainers=_workflowTypeContainers;
@property(retain) WFWorkflowTrustedResources *trustedResources; // @synthesize trustedResources=_trustedResources;
@property BOOL hiddenFromLibraryAndSync; // @synthesize hiddenFromLibraryAndSync=_hiddenFromLibraryAndSync;
@property(retain) WFRealmWorkflowQuarantine *quarantine; // @synthesize quarantine=_quarantine;
@property(retain) WFRealmWorkflowIcon *icon; // @synthesize icon=_icon;
@property(copy) NSString *legacyName; // @synthesize legacyName=_legacyName;
@property(copy) NSString *name; // @synthesize name=_name;
@property(retain) NSDate *modifiedAt; // @synthesize modifiedAt=_modifiedAt;
@property(retain) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(copy) NSString *workflowID; // @synthesize workflowID=_workflowID;
@property(readonly, nonatomic, getter=isConflictOfOtherWorkflow) BOOL conflictOfOtherWorkflow;
@property(readonly, nonatomic) NSNumber *location;
@property(copy, nonatomic) NSSet *accessResourcePerWorkflowStates;
@property(copy, nonatomic) NSArray *importQuestions;
@property(copy, nonatomic) NSArray *actions;
@property(copy, nonatomic) NSArray *inputClasses;
@property(copy, nonatomic) NSArray *workflowTypes;
@property(retain, nonatomic) WFWorkflowQuarantine *workflowQuarantine;
@property(retain, nonatomic) WFWorkflowIcon *workflowIcon;
@property(readonly, nonatomic) unsigned long long estimatedSize;
- (void)coordinatePropertyUpdatesForRecord:(id)arg1 duringBlock:(CDUnknownBlockType)arg2;
- (id)recordPropertyMap;
- (id)descriptor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

