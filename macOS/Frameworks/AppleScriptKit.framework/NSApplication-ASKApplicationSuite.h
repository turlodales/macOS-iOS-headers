//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSApplication.h"

@interface NSApplication (ASKApplicationSuite)
+ (void)setCoordinateSystem:(int)arg1;
+ (int)coordinateSystem;
- (id)handlePathForScriptCommand:(id)arg1;
- (id)handleDisplayDialogScriptCommand:(id)arg1;
- (id)handleDisplayAlertScriptCommand:(id)arg1;
- (void)setCoordinateSystem_ask:(unsigned long long)arg1;
- (unsigned long long)coordinateSystem_ask;
- (id)userDefaults_ask;
- (id)savePanel_ask;
- (id)openPanel_ask;
- (id)fontPanel_ask;
- (id)colorPanel_ask;
- (id)mainBundle;
- (id)valueInOrderedWindowsWithUniqueID:(long long)arg1;
- (id)orderedWindows_ask;
- (void)setIsHidden:(BOOL)arg1;
- (void)setIsActive_ask:(BOOL)arg1;
- (BOOL)isActive_ask;
- (BOOL)isFrontmost;
@end

