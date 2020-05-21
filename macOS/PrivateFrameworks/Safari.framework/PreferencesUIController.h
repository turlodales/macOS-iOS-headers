//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPreferences.h"

@class NSWindow;

__attribute__((visibility("hidden")))
@interface PreferencesUIController : NSPreferences
{
    BOOL _isCanceling;
    BOOL _snapshotsArePermitted;
}

+ (void)setShouldAlwaysPromptForDownloadPath:(BOOL)arg1;
+ (BOOL)shouldAlwaysPromptForDownloadPath;
+ (int)newWindowBehavior;
+ (int)newTabBehavior;
+ (id)preferencesModuleNameFromIdentifier:(int)arg1;
- (void)focusContentSearchField:(id)arg1;
- (BOOL)validate_focusContentSearchField:(id)arg1;
@property(readonly, nonatomic) NSWindow *window;
- (void)setSnapshotsOfPreferencesWindowArePermitted:(BOOL)arg1;
- (void)windowWillClose:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (BOOL)isCanceling;
- (void)cancel:(id)arg1;
- (BOOL)usesButtons;
- (id)init;

@end

