//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KHFrame, KHLayout, NSArray, NSMapTable, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface KHSelectionManager : NSObject
{
    NSMapTable *_flagsByObservers;
    NSMutableArray *_internalSelections;
    NSObject<OS_dispatch_queue> *_selectionQueue;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *selectionQueue; // @synthesize selectionQueue=_selectionQueue;
@property(readonly, nonatomic) NSMutableArray *internalSelections; // @synthesize internalSelections=_internalSelections;
@property(readonly, nonatomic) NSMapTable *flagsByObservers; // @synthesize flagsByObservers=_flagsByObservers;
- (void)_deselectAllObjects;
- (void)deselectAllObjects;
- (void)_deselectObjects:(id)arg1;
- (void)deselectObjects:(id)arg1;
- (void)deselectObject:(id)arg1;
- (void)toggleObjects:(id)arg1;
- (void)toggleObject:(id)arg1;
- (void)selectObjects:(id)arg1 forType:(unsigned long long)arg2;
- (void)selectObjects:(id)arg1;
- (void)selectObject:(id)arg1 forType:(unsigned long long)arg2;
- (void)selectObject:(id)arg1;
- (void)updateSelection;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)_notifyObserversForOption:(unsigned long long)arg1 withObjects:(id)arg2;
- (void)_addSelectionsForObjects:(id)arg1 type:(unsigned long long)arg2;
@property(readonly) NSArray *selections;
- (unsigned long long)selectionTypeForObject:(id)arg1;
- (BOOL)objectIsSelected:(id)arg1;
- (id)_selectionForObject:(id)arg1;
- (id)selectionForObject:(id)arg1;
- (id)init;
@property(readonly) KHFrame *selectedMapFrame;
@property(readonly) KHFrame *selectedPhotoFrame;
@property(readonly) KHFrame *selectedTextFrame;
@property(readonly) KHFrame *selectedFrame;
@property(readonly) NSArray *selectedFrames;
@property(readonly) NSArray *frameSelection;
@property(readonly) KHLayout *selectedLayout;
@property(readonly) NSArray *selectedLayouts;
@property(readonly) NSArray *layoutSelection;
- (id)debugViewController;

@end

