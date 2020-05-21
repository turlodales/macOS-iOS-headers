//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "WFParameterEventObserver.h"
#import "WFUUIDProvider.h"
#import "WFVariableProvider.h"

@class ICApp, NSArray, NSAttributedString, NSDate, NSDictionary, NSHashTable, NSMutableDictionary, NSProgress, NSSet, NSString, WFActionParameterSummary, WFContentCollection, WFContentSourceTracker, WFDataInfo, WFImage, WFParameter, WFResourceManager, WFWorkflow;

@interface WFAction : NSObject <WFUUIDProvider, WFParameterEventObserver, NSCopying, WFVariableProvider>
{
    BOOL _running;
    BOOL _inputParameterUnlocked;
    BOOL _skipsProcessingHiddenParameters;
    NSArray *_parameters;
    WFResourceManager *_resourceManager;
    NSArray *_inputContentClasses;
    NSArray *_outputContentClasses;
    NSProgress *_progress;
    WFContentSourceTracker *_contentSourceTracker;
    NSString *_identifier;
    NSDictionary *_definition;
    WFContentCollection *_input;
    WFContentCollection *_output;
    id <WFUserInterface> _userInterface;
    id <WFVariableDataSource> _variableSource;
    NSHashTable *_eventObservers;
    NSDictionary *_initialSerializedParameters;
    NSDictionary *_parametersByKey;
    NSMutableDictionary *_userDefinedParameterStates;
    NSMutableDictionary *_supplementalSerializedParameters;
    CDUnknownBlockType _completionHandler;
    WFWorkflow *_workflow;
    NSDictionary *_processedParameters;
    id <WFActionParameterInputProvider> _parameterInputProvider;
    NSArray *_keyCommands;
}

+ (void)showImplicitChooseFromListWithInput:(id)arg1 userInterface:(id)arg2 cancelHandler:(CDUnknownBlockType)arg3 selectionHandler:(CDUnknownBlockType)arg4;
+ (BOOL)outputIsExemptFromTaintTrackingInheritance;
+ (id)indentationLevelsForActions:(id)arg1;
+ (id)iconCache;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *keyCommands; // @synthesize keyCommands=_keyCommands;
@property(readonly, nonatomic) id <WFActionParameterInputProvider> parameterInputProvider; // @synthesize parameterInputProvider=_parameterInputProvider;
@property(readonly, nonatomic) BOOL skipsProcessingHiddenParameters; // @synthesize skipsProcessingHiddenParameters=_skipsProcessingHiddenParameters;
@property(copy, nonatomic) NSDictionary *processedParameters; // @synthesize processedParameters=_processedParameters;
@property(readonly, nonatomic) __weak WFWorkflow *workflow; // @synthesize workflow=_workflow;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) BOOL inputParameterUnlocked; // @synthesize inputParameterUnlocked=_inputParameterUnlocked;
@property(retain, nonatomic) NSMutableDictionary *supplementalSerializedParameters; // @synthesize supplementalSerializedParameters=_supplementalSerializedParameters;
@property(retain, nonatomic) NSMutableDictionary *userDefinedParameterStates; // @synthesize userDefinedParameterStates=_userDefinedParameterStates;
@property(copy, nonatomic) NSDictionary *parametersByKey; // @synthesize parametersByKey=_parametersByKey;
@property(retain, nonatomic) NSDictionary *initialSerializedParameters; // @synthesize initialSerializedParameters=_initialSerializedParameters;
@property(readonly, nonatomic) NSHashTable *eventObservers; // @synthesize eventObservers=_eventObservers;
@property(retain, nonatomic) id <WFVariableDataSource> variableSource; // @synthesize variableSource=_variableSource;
@property(retain, nonatomic) id <WFUserInterface> userInterface; // @synthesize userInterface=_userInterface;
@property(retain, nonatomic) WFContentCollection *output; // @synthesize output=_output;
@property(readonly, nonatomic) WFContentCollection *input; // @synthesize input=_input;
@property(nonatomic, getter=isRunning) BOOL running; // @synthesize running=_running;
@property(readonly, copy, nonatomic) NSDictionary *definition; // @synthesize definition=_definition;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) WFContentSourceTracker *contentSourceTracker; // @synthesize contentSourceTracker=_contentSourceTracker;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
- (void)setDefaultCoercionOptionsOnInputs;
- (void)setDefaultCoercionOptionsOnContentCollection:(id)arg1;
- (void)configureRuntimeResourcesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)minimumSupportedClientVersion;
@property(readonly, nonatomic) BOOL isRelevantToUser;
- (BOOL)requiresUserInteractionWhenRunWithInput:(id)arg1;
- (BOOL)showsImplicitChooseFromListWhenRunWithInput:(id)arg1;
@property(readonly, nonatomic) NSArray *supportedAppIdentifiers;
@property(readonly, nonatomic) WFDataInfo *targetDataInfo;
- (id)actionForAppIdentifier:(id)arg1;
- (void)snapInputParameterIfNecessary;
- (void)lockInputParameter;
- (void)unlockInputParameter;
@property(readonly, nonatomic, getter=isLastAction) BOOL lastAction;
- (BOOL)isUnsupportedWhenRunWithEnvironment:(id)arg1;
- (BOOL)requiresHandoffWhenRunWithUserInterfaceType:(id)arg1;
- (BOOL)supportsUserInterfaceType:(id)arg1;
- (BOOL)shouldBeSuggestedAfterAction:(id)arg1 inWorkflow:(id)arg2;
- (id)inheritedOutputContentClassesInWorkflow:(id)arg1 context:(id)arg2;
- (id)inheritedOutputContentClassesInWorkflow:(id)arg1;
- (id)inheritedInputVariableInWorkflow:(id)arg1;
- (id)inputSourceInWorkflow:(id)arg1;
- (id)outputVariableWithVariableProvider:(id)arg1 UUIDProvider:(id)arg2;
- (BOOL)canHandleInputOfContentClasses:(id)arg1 withSupportedClasses:(id)arg2 includingCoercedTypes:(BOOL)arg3;
- (BOOL)canHandleInputOfContentClasses:(id)arg1 withSupportedClasses:(id)arg2;
- (BOOL)shouldBeConnectedToPreviousActionInWorkflow:(id)arg1 withOutputsConsumedByFollowingActions:(id)arg2;
- (BOOL)legacyBehaviorIgnoresOutputFromAction:(id)arg1 inWorkflow:(id)arg2;
- (BOOL)ignoresOutputFromAction:(id)arg1 inWorkflow:(id)arg2;
@property(readonly, nonatomic) NSArray *outputContentClasses; // @synthesize outputContentClasses=_outputContentClasses;
@property(readonly, nonatomic) NSArray *inputContentClasses; // @synthesize inputContentClasses=_inputContentClasses;
@property(readonly, nonatomic) NSArray *specifiedOutputContentClasses;
@property(readonly, nonatomic) NSArray *specifiedInputContentClasses;
- (id)classesForTypeArray:(id)arg1 includeAllOutputTypes:(BOOL)arg2;
- (void)wasRemovedFromWorkflow:(id)arg1;
- (void)wasAddedToWorkflow:(id)arg1;
- (void)wasAddedToWorkflowByUser:(id)arg1;
@property(readonly, nonatomic) WFParameter *inputParameter;
@property(readonly, nonatomic) NSArray *parameters; // @synthesize parameters=_parameters;
- (void)initializeParameters;
@property(copy, nonatomic) NSString *groupingIdentifier;
@property(copy, nonatomic) NSString *outputName;
- (id)generateUUIDIfNecessaryWithUUIDProvider:(id)arg1;
@property(copy, nonatomic) NSString *UUID;
- (void)didChangeVariableName:(id)arg1 to:(id)arg2;
- (id)providedVariableNames;
- (void)removeVariableObserver:(id)arg1;
- (void)addVariableObserver:(id)arg1;
@property(readonly, nonatomic) NSArray *workflowInputClasses;
- (id)possibleContentClassesForVariableNamed:(id)arg1 context:(id)arg2;
- (id)actionsProvidingVariableName:(id)arg1;
- (id)actionProvidingVariableWithOutputUUID:(id)arg1;
- (BOOL)isVariableWithOutputUUIDAvailable:(id)arg1;
- (BOOL)isVariableWithNameAvailable:(id)arg1;
- (BOOL)hasAvailableActionOutputVariables;
- (BOOL)hasAvailableVariables;
@property(readonly, nonatomic) NSArray *availableOutputActions;
@property(readonly, nonatomic) NSArray *availableVariableNames;
- (id)generateOutputUUIDForAction:(id)arg1;
- (id)createAccompanyingActions;
- (void)removeEventObserver:(id)arg1;
- (void)addEventObserver:(id)arg1;
- (void)outputDetailsUpdated;
- (void)nameUpdated;
- (void)setOutput:(id)arg1 onVariableSource:(id)arg2;
- (void)resetOutput;
- (void)cancel;
- (void)finishRunningWithError:(id)arg1;
- (id)parameterValueForKey:(id)arg1 ofClass:(Class)arg2;
- (BOOL)hasChildren;
@property(readonly, nonatomic) BOOL isDeletable;
- (void)runWithAppKitUserInterface:(id)arg1 input:(id)arg2;
- (void)runWithSiriUserInterface:(id)arg1 input:(id)arg2;
- (void)checkUserInterfaceAndRunWithInput:(id)arg1;
- (void)makeAccessResourcesAvailableAtWorkflowLevelAndRun;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (BOOL)runAsynchronouslyWithInput:(id)arg1 userInterfaceType:(id)arg2 userInterface:(id)arg3;
- (void)runWithInput:(id)arg1 error:(id *)arg2;
- (void)setParameterInputProvider:(id)arg1;
- (id)parametersRequiringUserInputAlongsideParameter:(id)arg1;
- (void)askForValuesOfParameters:(id)arg1 withDefaultStates:(id)arg2 input:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_processParameterStates:(id)arg1 withInput:(id)arg2 skippingHiddenParameters:(BOOL)arg3 askForValuesIfNecessary:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)processParametersWithoutAskingForValuesWithInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)processParameterStates:(id)arg1 withInput:(id)arg2 skippingHiddenParameters:(BOOL)arg3 askForValuesIfNecessary:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)copyParameterStates;
- (id)populatedInputWithProcessedParameterValues:(id)arg1;
@property(readonly, nonatomic) BOOL populatesInputFromInputParameter;
- (BOOL)getInputContentFromVariablesInParameterState:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)previousAction;
- (void)runWithInput:(id)arg1 userInterface:(id)arg2 parameterInputProvider:(id)arg3 variableSource:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)createResourceManager;
@property(readonly, nonatomic) WFResourceManager *resourceManager; // @synthesize resourceManager=_resourceManager;
- (void)parameterDefaultSerializedRepresentationDidChange:(id)arg1;
- (void)parameterStateValidityCriteriaDidChange:(id)arg1;
- (id)accessResourcesToBeAuthorizedImplicitlyForUpdatedParameterState:(id)arg1 forParameter:(id)arg2;
- (id)supplementalParameterValueForKey:(id)arg1 ofClass:(Class)arg2;
- (void)setSupplementalParameterValue:(id)arg1 forKey:(id)arg2;
- (id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(BOOL)arg2;
- (id)serializedParameters;
- (id)parameterKeysIgnoredForParameterSummary;
- (id)createStateForParameter:(id)arg1 fromSerializedRepresentation:(id)arg2;
- (BOOL)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)parameterStateForKey:(id)arg1 fallingBackToDefaultValue:(BOOL)arg2;
- (id)parameterStateForKey:(id)arg1;
- (id)defaultParameterStateForKey:(id)arg1;
- (id)parameterForKey:(id)arg1;
- (id)copyForProcessing;
- (id)copyWithDefinition:(id)arg1 serializedParameters:(id)arg2;
- (id)copyWithSerializedParameters:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *localizedKeyParameterDisplayName;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;
- (BOOL)containsVariableOfType:(id)arg1;
- (id)containedVariablesOfClass:(Class)arg1;
- (id)containedVariables;
- (id)visibleParametersWithProcessing:(BOOL)arg1;
@property(readonly, nonatomic) unsigned long long parameterCollapsingBehavior;
@property(readonly, nonatomic) BOOL displaysParameterSummary;
@property(readonly, nonatomic) WFActionParameterSummary *parameterSummary;
@property(readonly, nonatomic) NSArray *parameterDefinitions;
@property(readonly, nonatomic) long long rateLimitDelay;
@property(readonly, nonatomic) long long rateLimitTimeout;
@property(readonly, nonatomic) long long rateLimitThreshold;
@property(readonly, nonatomic) long long initialSuggestionBehavior;
@property(readonly, nonatomic) BOOL neverSuggested;
@property(readonly, nonatomic) unsigned long long outputDisclosureLevel;
@property(readonly, nonatomic) BOOL outputsMultipleItems;
@property(readonly, nonatomic) BOOL inputsMultipleItems;
@property(readonly, nonatomic) NSString *outputMeasurementUnitType;
@property(readonly, nonatomic) NSArray *outputTypes;
@property(readonly, nonatomic) NSArray *inputTypes;
@property(readonly, nonatomic) NSString *inputParameterKey;
@property(readonly, nonatomic) BOOL inputTypePassthrough;
@property(readonly, nonatomic) BOOL snappingPassthrough;
@property(readonly, nonatomic) BOOL blocksSnapping;
@property(readonly, nonatomic) BOOL inputPassthrough;
@property(readonly, nonatomic) BOOL inputRequired;
@property(readonly, nonatomic) BOOL shouldBeIncludedInAppsList;
- (id)localizedSubcategoryForCategory:(id)arg1;
- (id)subcategoryForCategory:(id)arg1;
@property(readonly, nonatomic) NSString *appSection;
@property(readonly, nonatomic) ICApp *app;
@property(readonly, nonatomic) NSString *appIdentifier;
@property(readonly, nonatomic) Class runningViewClass;
@property(readonly, nonatomic) Class configurationViewClass;
@property(readonly, nonatomic) BOOL showsSettingsWhenResourcesUnavailable;
@property(readonly, nonatomic) Class settingsViewControllerClass;
@property(readonly, nonatomic) NSDictionary *settingsUIDefinition;
@property(readonly, nonatomic) NSArray *requiredResources;
@property(readonly, nonatomic) NSArray *userInterfaceTypes;
@property(readonly, nonatomic, getter=isConstructorAction) BOOL constructorAction;
@property(readonly, nonatomic, getter=isWatchCompatible) BOOL watchCompatible;
@property(readonly, nonatomic, getter=isResidentCompatible) BOOL residentCompatible;
@property(readonly, nonatomic, getter=isDiscoverable) BOOL discoverable;
@property(readonly, nonatomic, getter=isDiscoverableInSearch) BOOL discoverableInSearch;
@property(readonly, nonatomic, getter=isMissing) BOOL missing;
@property(readonly, nonatomic, getter=isDiscontinued) BOOL discontinued;
@property(readonly, nonatomic, getter=isDebugAction) BOOL debugAction;
@property(readonly, nonatomic) NSArray *unsupportedEnvironments;
@property(readonly, nonatomic) NSDate *lastModifiedDate;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) NSArray *localizedKeywords;
@property(readonly, nonatomic) NSArray *keywords;
@property(readonly, nonatomic) NSString *descriptionOfAccessResources;
@property(readonly, nonatomic) NSAttributedString *localizedDescriptionAttribution;
@property(readonly, nonatomic) NSString *localizedDescriptionRequires;
@property(readonly, nonatomic) NSString *descriptionRequires;
@property(readonly, nonatomic) NSSet *allPossibleDescriptionRequires;
@property(readonly, nonatomic) NSString *localizedDescriptionNote;
@property(readonly, nonatomic) NSString *descriptionNote;
@property(readonly, nonatomic) NSString *localizedDescriptionResult;
@property(readonly, nonatomic) NSString *descriptionResult;
@property(readonly, nonatomic) NSArray *allPossibleDescriptionResults;
@property(readonly, nonatomic) NSString *localizedDescriptionInput;
@property(readonly, nonatomic) NSString *descriptionInput;
- (id)typeDescriptionWithTypes:(id)arg1 explanationText:(id)arg2 multiple:(BOOL)arg3 optional:(BOOL)arg4;
- (BOOL)descriptionInputIncludesSupportingItemClasses;
@property(readonly, nonatomic) NSString *localizedDescriptionSummary;
@property(readonly, nonatomic) NSString *descriptionSummary;
- (id)outputDictionary;
@property(readonly, nonatomic) NSDictionary *descriptionDictionary;
@property(readonly, nonatomic) WFImage *keyImage;
@property(readonly, nonatomic) WFImage *outputIcon;
- (void)loadIconWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) WFImage *icon;
@property(readonly, nonatomic) NSString *iconName;
@property(readonly, nonatomic) NSArray *localizedCategories;
@property(readonly, nonatomic) NSArray *categories;
@property(readonly, nonatomic) NSAttributedString *localizedFooter;
@property(readonly, nonatomic) NSString *localizedAttribution;
@property(readonly, nonatomic) NSString *attribution;
@property(readonly, nonatomic) NSString *accessibilityName;
@property(readonly, nonatomic) NSString *localizedDefaultOutputName;
@property(readonly, nonatomic) NSString *defaultOutputName;
@property(readonly, nonatomic) NSString *localizedShortName;
@property(readonly, nonatomic) NSString *shortName;
@property(readonly, nonatomic) NSString *localizedSubtitle;
@property(readonly, nonatomic) NSAttributedString *attributedLocalizedName;
@property(readonly, nonatomic) NSString *localizedName;
@property(readonly, nonatomic) NSString *name;
@property(nonatomic, getter=isFavorite) BOOL favorite;
@property(readonly, copy, nonatomic) NSString *appBundleIdentifier;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

