//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PreferencePanes/NSPreferencePane.h>

@class NSArray, NSCFPrefManager, NSDictionary, NSMutableArray, NSPrefTabsController;

@interface NSPreference : NSPreferencePane
{
    NSPrefTabsController *_prefTabsController;
    BOOL _isDirty;
    BOOL _isEditable;
    NSCFPrefManager *_prefs;
    NSMutableArray *_relevantDomains;
    NSArray *_macManagerSettings;
    NSDictionary *_taggedControls;
}

- (void).cxx_destruct;
- (void)deleteValueForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (double)doubleForKey:(id)arg1;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (float)floatForKey:(id)arg1;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (long long)integerForKey:(id)arg1;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (BOOL)booleanForKey:(id)arg1;
- (void)setBoolean:(BOOL)arg1 forKey:(id)arg2;
- (void)deleteValueForKey:(id)arg1 inDomain:(id)arg2;
- (id)objectForKey:(id)arg1 inDomain:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
- (id)stringForKey:(id)arg1 inDomain:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
- (double)doubleForKey:(id)arg1 inDomain:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2 inDomain:(id)arg3;
- (float)floatForKey:(id)arg1 inDomain:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2 inDomain:(id)arg3;
- (long long)integerForKey:(id)arg1 inDomain:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2 inDomain:(id)arg3;
- (BOOL)booleanForKey:(id)arg1 inDomain:(id)arg2;
- (void)setBoolean:(BOOL)arg1 forKey:(id)arg2 inDomain:(id)arg3;
- (void)setSuddenTerminationEnabled:(BOOL)arg1;
- (void)switchToPanel:(id)arg1 anchor:(id)arg2;
- (void)switchToPanel:(id)arg1;
- (void)synchronizePrefs;
- (void)makeDirty;
- (void)reflectEditableState;
- (BOOL)isEditable;
- (void)setEditable:(BOOL)arg1;
- (void)didResignActive;
- (void)willResignActive;
- (void)didBecomeActive;
- (void)willBecomeActive;
- (void)didUnhide;
- (void)willUnhide;
- (void)didHide;
- (void)willHide;
- (void)didSelect;
- (void)willSelect;
- (void)didUnselect;
- (void)willUnselect;
- (unsigned long long)shouldUnselect;
- (void)deleteAllRelevantDomains;
- (void)deleteRelevantDomainAtIndex:(long long)arg1;
- (long long)numberOfRelevantDomains;
- (id)relevantDomainAtIndex:(long long)arg1;
- (void)addRelevantDomain:(id)arg1;
- (id)initWithBundle:(id)arg1;
- (void)_addDisabledControls:(id)arg1;
- (void)_buildListOfDisabledControls;
- (id)_findControlWithTag:(long long)arg1 inView:(id)arg2;
- (id)findControlWithTag:(long long)arg1;
- (void)applyMacManagerSettings;
- (void)runSelfTest:(unsigned long long)arg1 duration:(double)arg2;
- (void)restoreState:(id)arg1;
- (void)encodeRestorableState:(id)arg1;

@end

