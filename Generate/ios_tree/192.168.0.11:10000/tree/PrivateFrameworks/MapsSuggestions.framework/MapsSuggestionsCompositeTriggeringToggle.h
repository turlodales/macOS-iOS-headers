/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsCompositeTriggeringToggle : MapsSuggestionsTriggeringToggle <MapsSuggestionsTriggerObserver> {
    NSMutableArray * _runConditions;
    NSMutableArray * _triggers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (void)addRunCondition:(id)arg1;
- (void)addTrigger:(id)arg1;
- (void)dealloc;
- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (id)initWithName:(id)arg1 behavior:(unsigned long long)arg2;
- (id)objectForJSON;
- (bool)shouldRun;
- (void)triggerFired:(id)arg1;

@end
