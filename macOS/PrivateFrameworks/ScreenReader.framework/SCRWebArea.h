//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRTextArea.h>

#import "SCRElementHistoryVendor.h"
#import "SCRGuideHighlightDelegateProtocol.h"

@class NSArray, NSDictionary, NSLock, NSMutableArray, NSMutableDictionary, NSString, SCRCTargetSelectorTimer, SCRCWeakReferenceContainer, SCRElement, SCRTextMarkerRange, SCRUIElement, SCRWebElementHistory;

__attribute__((visibility("hidden")))
@interface SCRWebArea : SCRTextArea <SCRGuideHighlightDelegateProtocol, SCRElementHistoryVendor>
{
    NSDictionary *_previousWebPageLayout;
    NSMutableDictionary *_domainBucketLayout;
    NSLock *_liveRegionLock;
    NSMutableDictionary *_liveRegions;
    SCRCTargetSelectorTimer *_liveRegionProcessTimer;
    NSMutableArray *_webSpots;
    SCRUIElement *_sweetSpot;
    struct {
        unsigned int coalescingLayouts:1;
        unsigned int completedLoadingWebspots:1;
        unsigned int didPerformGroupNavigationForCurrentEventChain:1;
        unsigned int didPerformLineNavigation:1;
        unsigned int hasBeenFocusedInto:1;
        unsigned int isTopLevelWebArea:1;
        unsigned int lastNavigationUsedInvertedT:1;
        unsigned int needToRebuildChildren:1;
        unsigned int performedInitializationTasks:1;
        unsigned int registeredForExpandedNotification:1;
        unsigned int registeredForLiveRegionCreatedNotification:1;
        unsigned int registeredForNavChange:1;
        unsigned int registeredForSelectionChangeNotification:1;
        unsigned int registeredLayoutCompleteNotification:1;
        unsigned int retainedParentChainForLoadingCoalescerTimer:1;
        unsigned int storedPreviousWebLayoutData:1;
        unsigned int unregisterNotification:1;
    } _srwFlags;
    unsigned long long _previousURLCount;
    long long _frameIndex;
    long long _childIndex;
    SCRElement *_readContentsElement;
    NSMutableArray *_frames;
    NSString *_selectedString;
    SCRTextMarkerRange *_lastMarkerRange;
    long long _navigationType;
    SCRElement *_readFromBeginningStopElement;
    SCRElement *_currentLandmark;
    long long _loadingBehavior;
    SCRCTargetSelectorTimer *_loadingCoalescerTimer;
    SCRCTargetSelectorTimer *_checkFocusedChildIndexCoalescerTimer;
    struct __AXTextMarker *_lineTextMarker;
    NSArray *_lineArray;
    long long _lineArrayPosition;
    struct CGRect _lineBounds;
    SCRWebElementHistory *_webElementHistory;
    // Error parsing type: AB, name: hasFinishedBuildingLiveRegions
    SCRCWeakReferenceContainer *__topLevelWebArea;
    SCRUIElement *__lastInterestingElement;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setLastInterestingElement:) SCRUIElement *_lastInterestingElement; // @synthesize _lastInterestingElement=__lastInterestingElement;
@property(retain, nonatomic, setter=_setTopLevelWebArea:) SCRCWeakReferenceContainer *_topLevelWebArea; // @synthesize _topLevelWebArea=__topLevelWebArea;
- (void)handleTextNavigationWithUIElement:(id)arg1 command:(CDStruct_97f7034d)arg2 lastSelectedTextMarkerRange:(id)arg3 selectedTextMarkerRange:(id)arg4 outputRequest:(id)arg5;
- (CDStruct_d7010776)shouldMoveFocusFromElement:(id)arg1 toElement:(id)arg2;
- (id)navigationTextMarkerRangeForDiscontiguousNavigationWithUIElement:(id)arg1 lastSelectedTextMarkerRange:(id)arg2 selectedTextMarkerRange:(id)arg3;
- (id)validatedTextMarkerRangeForUIElement:(id)arg1;
- (id)textMarkerRangeForLine:(unsigned long long)arg1 withUIElement:(id)arg2;
- (void)setSelectedTextMarkerRange:(id)arg1 withUIElement:(id)arg2;
- (id)selectedTextMarkerRangeWithUIElement:(id)arg1;
- (id)markerRangeWithUIElement:(id)arg1;
- (BOOL)shouldHandleTextSelection;
- (BOOL)shouldHandleTextNavigation;
- (void)_updateInterestingElementWithUIElement:(id)arg1 command:(CDStruct_97f7034d)arg2 outputRequest:(id)arg3;
- (id)_interestingAncestorForUIElement:(id)arg1;
- (void)_prepareForKeyboardSyncWithTextMarkerRange:(id)arg1 targetUIElement:(id)arg2;
- (id)parentVendor;
- (id)removeLastUIElementFromHistory;
- (id)lastNavigatedValidUIElement;
- (void)flushElementHistory;
- (void)addElementToHistory:(id)arg1;
- (id)_webElementHistory;
- (BOOL)isWebArea;
- (BOOL)trackElementWithGestureEvent:(id)arg1 request:(id)arg2;
- (BOOL)_performSearchWithKey:(long long)arg1 direction:(long long)arg2 uiElement:(id)arg3 outputRequest:(id)arg4;
- (id)_advanceToNonWhiteSpaceLineIfNeeded:(id)arg1 direction:(long long)arg2 uiElement:(id)arg3;
- (long long)_blockQuoteLevelForTextMarkerRange:(id)arg1 uiElement:(id)arg2;
- (BOOL)_textMarkerRangeIsWhiteSpaceAndLineBreaks:(id)arg1 uiElement:(id)arg2;
- (BOOL)performSearchWithEvent:(id)arg1 outputRequest:(id)arg2;
- (id)rotorIdentifiers;
- (BOOL)handleRotorTextMovement:(long long)arg1 withEvent:(id)arg2 direction:(long long)arg3 request:(id)arg4;
- (BOOL)handleIncrementRotorWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)handleDecrementRotorWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)handleNextRotorWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)handlePreviousRotorWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)lastNavigationUsedInvertedT;
- (BOOL)handleInvertedTRightUpWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)handleInvertedTLeftUpWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)handleInvertedTUpWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)handleInvertedTDownWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)_moveWebRotorInDirection:(long long)arg1 withRequest:(id)arg2 isGestureEvent:(BOOL)arg3;
- (BOOL)_handleVerticalMovementWithDirection:(long long)arg1 event:(id)arg2 request:(id)arg3;
- (id)_verticalNavigationHandlerAncestor:(id)arg1;
- (long long)_searchKeyForWebRotor:(id)arg1;
- (BOOL)interactRightCommandShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactRightWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactLeftCommandShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactLeftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)hasBeenFocusedInto;
- (void)speakWebPageSummary:(id)arg1;
- (void)_speakWebPageSummary:(id)arg1;
- (void)_startSpeakingWebpage;
- (void)handleAutomaticLoadOption:(unsigned long long)arg1 request:(id)arg2;
- (void)waitForHashToLoadElementIndex:(unsigned long long)arg1 withWaitMessage:(id)arg2;
- (BOOL)isContainerElement;
- (id)childAtIndex:(unsigned long long)arg1 visibleOnly:(BOOL)arg2;
- (unsigned long long)indexOfElement:(id)arg1 visibleOnly:(BOOL)arg2;
- (unsigned long long)numberOfChildren:(BOOL)arg1;
- (id)children:(BOOL)arg1;
- (id)elementHash:(BOOL)arg1;
- (void)scrollToTop;
- (void)_makeElementHash:(BOOL)arg1;
- (id)_deepFocusedChild;
- (id)elementFromUIElement:(id)arg1 useStitchedText:(BOOL)arg2;
- (id)elementFromUIElement:(id)arg1;
- (BOOL)containsElementHashMarkersForAllChildren;
- (void)_handleUserDefaultsResetNotification:(id)arg1;
- (id)uiElementForHashMarkerIndex:(unsigned long long)arg1 waitForIndex:(BOOL)arg2;
- (id)titleForCommand:(id)arg1;
- (BOOL)helperForGuide:(id)arg1 highlightElement:(id)arg2;
- (BOOL)guide:(id)arg1 highlightElement:(id)arg2;
- (id)_startMarkerForWebGroupAtStartingIndex:(long long)arg1;
- (BOOL)_handleGroupNavigation:(id)arg1 forward:(BOOL)arg2;
- (BOOL)allowFocusThroughSingleChild;
- (BOOL)shouldMapElement:(id)arg1;
- (BOOL)allowMappingIfZeroSize;
- (BOOL)shouldNavigate;
- (id)childrenInReadContentsOrder;
- (id)readContentsElement;
- (void)forgetReadContentsElement;
- (void)prepareReadContentsElementVisibleOnly:(BOOL)arg1;
- (unsigned long long)readContentsElementCount;
- (BOOL)startReadToEndWithOutputRequest:(id)arg1;
- (BOOL)readFromBeginningWithRequest:(id)arg1;
- (BOOL)shouldStopReadFromBeginning;
- (void)_setReadContentsElement:(id)arg1;
- (void)moveInsertionToElement:(id)arg1 affinity:(long long)arg2;
- (BOOL)moveToSelectedText:(id)arg1;
- (id)selectedText;
- (id)selectedTextMarkerRange;
- (id)elementContainingSelectedText;
- (BOOL)_handleTextAction:(long long)arg1 request:(id)arg2;
- (id)currentCursorPosition;
- (struct CGRect)boundsForRange:(id)arg1;
- (BOOL)_handleLineNavigation:(BOOL)arg1 request:(id)arg2;
- (void)_resetLineNavigation;
- (id)_textMarkerRangeElementsFromAttributedString:(id)arg1;
- (void)_addString:(id)arg1 forMarkerRange:(struct _NSRange)arg2 toTextObject:(id)arg3;
- (BOOL)_handleWebOverview:(id)arg1 request:(id)arg2;
- (BOOL)interactDownWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactUpWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)shouldIncludeDescendants;
- (BOOL)performDefaultActionWithRequest:(id)arg1 allowClick:(BOOL)arg2;
- (id)childAtIndex:(unsigned long long)arg1;
- (id)_nextChildInAXOrderFromIndex:(long long)arg1 movingForward:(BOOL)arg2 visibleOnly:(BOOL)arg3 childIndex:(long long *)arg4 wrapped:(char *)arg5;
- (id)_nextChildInAXOrderMovingForward:(BOOL)arg1 visibleOnly:(BOOL)arg2 childIndex:(long long *)arg3 wrapped:(char *)arg4;
- (id)nextElement;
- (id)previousElement;
- (BOOL)_navigateDOMToChild:(id)arg1 ofIndex:(long long)arg2 withEvent:(id)arg3 withRequest:(id)arg4 commandString:(id)arg5 forward:(BOOL)arg6 horizontal:(BOOL)arg7 allowFullWrapping:(BOOL)arg8 wrapped:(BOOL)arg9 allowScrolling:(BOOL)arg10;
- (BOOL)navigateToChildInAXOrderWithEvent:(id)arg1 request:(id)arg2 commandString:(id)arg3 forward:(BOOL)arg4 horizontal:(BOOL)arg5 allowFullWrapping:(BOOL)arg6 visibleOnly:(BOOL)arg7;
- (BOOL)webElementDOMMoveEdge:(long long)arg1 withEvent:(id)arg2 request:(id)arg3 visibleOnly:(BOOL)arg4;
- (BOOL)speakWordOnEdgeMovementEvents;
- (BOOL)handleEvent:(id)arg1 request:(id)arg2;
- (BOOL)moveFirstWithEvent:(id)arg1 request:(id)arg2 visibleOnly:(BOOL)arg3;
- (BOOL)moveLastWithEvent:(id)arg1 request:(id)arg2 visibleOnly:(BOOL)arg3;
- (BOOL)moveToLastElementWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)moveToFirstElementWithEvent:(id)arg1 request:(id)arg2;
- (void)showRotor;
- (BOOL)chainEvent:(id)arg1 request:(id)arg2;
- (id)onlyChildForFocusingIntoInArray:(id)arg1;
- (void)_processLandmarkStatus:(id)arg1 request:(id)arg2 handled:(BOOL)arg3;
- (void)setCurrentLandmark:(id)arg1;
- (id)currentLandmark;
- (BOOL)focusInto:(id)arg1 event:(id)arg2;
- (void)setFocusedChild:(id)arg1;
- (void)endFocus;
- (void)beginFocusFromElement:(id)arg1 withEvent:(id)arg2;
- (BOOL)didLoadPage;
- (id)lastChildForFocusing;
- (id)firstChildForFocusing;
- (BOOL)supportsScrollToVisible;
- (BOOL)shouldFocusOntoChild:(id)arg1;
- (void)_updateNativeSearchPerformed:(id)arg1;
- (id)_frames;
- (id)urls;
- (void)_finishedBuildingHash;
- (void)_determineFrameIndex;
- (BOOL)canFocusOutInto;
- (id)focusOntoUIElement:(id)arg1 withScrolling:(BOOL)arg2 withSelection:(BOOL)arg3;
- (BOOL)needToRebuildChildren;
- (id)prepareArrayToFocusInto;
- (void)_processRedundantLabels;
- (BOOL)shouldPromoteForMovingUIElement:(id)arg1;
- (BOOL)shouldPromoteUIElement:(id)arg1;
- (void)_resetVOCursorAfterLayoutChange;
- (void)layoutCoalescor:(id)arg1;
- (void)pageLoadDidComplete;
- (void)_loadCompleteHandler:(id)arg1;
- (void)_elementExpandedHandler:(id)arg1;
- (void)_performInitializationTasks;
- (long long)_didPerformNativeSearch;
- (void)_setDidPerformNativeSearch:(long long)arg1;
- (CDUnknownBlockType)_indexPathComparator;
- (BOOL)_isAncestorOfUIElement:(id)arg1;
- (void)_layoutCompleteHandler:(id)arg1;
- (void)_handleProgressUpdate;
- (id)potentialTitleElementFromChild:(id)arg1;
- (BOOL)supportsInAppSearching;
- (void)_handleLayoutComplete:(id)arg1;
- (void)_checkFocusedChildIndex;
- (double)loadingProgress;
- (void)_setCoalescingLayouts:(BOOL)arg1;
- (BOOL)_coalescingLayouts;
- (id)topLevelWebArea;
- (void)_setChildIndex:(long long)arg1;
- (long long)_childIndex;
- (void)_setPreviousURLCount:(unsigned long long)arg1;
- (void)setKeyboardFocus:(BOOL)arg1;
- (BOOL)hasKeyboardFocus;
- (unsigned long long)_previousURLCount;
- (void)registerForLayoutCompleteNotification;
- (BOOL)navigatingWithWebGroups;
- (BOOL)navigatingWithGroups;
- (void)setIsEventHandler:(BOOL)arg1 isKeyboardHandler:(BOOL)arg2;
- (id)roleDescription;
- (BOOL)isTopLevelWebArea;
- (Class)classForChildUIElement:(id)arg1 parent:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_setNavigationType:(id)arg1;
- (void)dealloc;
- (id)initWithUIElement:(id)arg1 parent:(id)arg2;
- (void)_addDataDetectorOutput:(id)arg1 toOutputRequest:(id)arg2;
- (struct CGPoint)_midPointForTextMarkerRange:(id)arg1;
- (id)_dataDetectorLocator;
- (BOOL)openContextualMenuForDataDetectorItemInTextMarkerRange:(id)arg1;
- (void)outputDataDetectorItemsInTextMarkerRange:(id)arg1 outputRequest:(id)arg2;
- (void)_detectLiveRegions;
- (void)_detectLiveRegionsHandler:(id)arg1;
- (void)_initializeLiveRegionTrees:(id)arg1;
- (id)_liveRegionQueue;
- (void)_updateLiveRegionTreeForUIElement:(id)arg1 initialization:(BOOL)arg2;
- (void)_processLiveRegionUpdate:(id)arg1;
- (BOOL)isLiveRegionEnabled:(id)arg1;
- (void)setLiveRegion:(id)arg1 isEnabled:(BOOL)arg2;
- (id)_flattenedLiveRegionTree:(id)arg1;
- (void)_liveRegionUpdate:(id)arg1;
- (id)_liveRegionDifference:(id)arg1 oldTree:(id)arg2 newTree:(id)arg3 relevantMask:(int)arg4;
- (void)_addString:(id)arg1 forAttributeName:(id)arg2 ofElement:(id)arg3 toOutputRequest:(id)arg4;
- (void)_outputLiveRegionDifference:(id)arg1 changedElements:(id)arg2;
- (BOOL)_shouldImageElementBeProcessed:(id)arg1;
- (BOOL)_handleLiveRegionToggle:(id)arg1 request:(id)arg2;
- (void)_liveRegionCleanup;
- (void)_setLiveRegionTree:(id)arg1 forKey:(id)arg2;
- (id)_liveRegionTreeForKey:(id)arg1;
- (id)_bestMatchingLiveRegionTreeForNewLiveRegionTree:(id)arg1 bestMatchKey:(id *)arg2;
- (BOOL)_liveRegionTreeExistsForKey:(id)arg1;
- (void)_setLiveRegions:(id)arg1;
- (BOOL)addSelectionDescriptionToRequest:(id)arg1;
- (id)selectionDescriptionFromAttributedText:(id)arg1;
- (void)moveSelectionToMarker:(id)arg1;
- (void)moveSelectionToElement:(id)arg1;
- (void)setSelectedTextRange:(id)arg1;
- (BOOL)modifySelection:(CDStruct_d20431f8)arg1 event:(id)arg2;
- (void)_setSelectionToCurrentElement;
- (void)clearWebSelection;
- (BOOL)handledKeyboardSelectionEvent:(id)arg1;
- (BOOL)_handledKeyboardSelectionEvent:(id)arg1;
- (BOOL)setAsSweetSpotWithRequest:(id)arg1;
- (BOOL)removeFromSpotWithRequest:(id)arg1;
- (BOOL)setAsSpotWithRequest:(id)arg1;
- (BOOL)_setWebspotWithRequest:(id)arg1;
- (BOOL)_setSweetspotWithRequest:(id)arg1;
- (BOOL)_removeWebspotWithRequest:(id)arg1;
- (void)_removeWebspotWithElement:(id)arg1;
- (id)_findWebspotsWithElement:(id)arg1;
- (void)_storeWebspots;
- (id)createStoredDictionaryForUIElement:(id)arg1;
- (id)webSpots;
- (id)sweetSpot;
- (BOOL)_handleWebspotNavigation:(BOOL)arg1 request:(id)arg2;
- (void)_loadWebspots;
- (void)_clearWebspotCache;
- (id)retrieveUIElementWithStoredInformation:(id)arg1;
- (id)_nearbyUIElements:(long long)arg1 fromUIElement:(id)arg2;
- (BOOL)_uiElementDirectMatch:(id)arg1 withAttributes:(id)arg2;
- (unsigned long long)_sweetSpotIndex;
- (BOOL)_hasLoadedWebspots;

@end

