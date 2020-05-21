//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CRKCourseEnrollmentControllerDelegate.h"
#import "CRKSettingsUIVisibilityProvider.h"

@class CRKCourseEnrollmentController, CRKUserDefaultsObject, NSString;

@interface CRKDefaultSettingsUIVisibilityProvider : NSObject <CRKCourseEnrollmentControllerDelegate, CRKSettingsUIVisibilityProvider>
{
    CRKUserDefaultsObject *mUIPreviouslyVisible;
    CRKCourseEnrollmentController *mEnrollmentController;
    BOOL _settingsUIVisible;
}

- (void).cxx_destruct;
@property BOOL settingsUIVisible; // @synthesize settingsUIVisible=_settingsUIVisible;
- (void)enrollmentControllerDidUpdateSettingsUIVisibility:(id)arg1;
- (void)connectToDaemon;
- (void)updateVisibilityState;
- (void)updatePreviouslyVisibleDefaultWithValue:(BOOL)arg1;
- (void)migrateOldUserDefaultsValues;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

