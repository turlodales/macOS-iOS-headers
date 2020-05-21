//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, NSString;

@protocol CRKFeatureDataStoreProtocol <NSObject>
+ (id <CRKFeatureDataStoreProtocol>)sharedDataStore;
@property(nonatomic, getter=isClassroomInstructorRoleEnabled) BOOL classroomInstructorRoleEnabled;
@property(nonatomic, getter=isClassroomStudentRoleEnabled) BOOL classroomStudentRoleEnabled;
@property(readonly, copy, nonatomic) NSSet *activeClassroomRoles;
@property(readonly, nonatomic, getter=isClassroomRequestPermissionToLeaveClassesForced) BOOL classroomRequestPermissionToLeaveClassesForced;
@property(readonly, nonatomic, getter=isClassroomAutomaticClassJoiningForced) BOOL classroomAutomaticClassJoiningForced;
@property(readonly, nonatomic, getter=isClassroomUnpromptedScreenObservationForced) BOOL classroomUnpromptedScreenObservationForced;
- (void)setBoolValue:(BOOL)arg1 ask:(BOOL)arg2 forSetting:(NSString *)arg3 configurationUUID:(NSString *)arg4;
- (unsigned long long)effectiveValueForSetting:(NSString *)arg1 configurationUUID:(NSString *)arg2 outAsk:(char *)arg3;
- (unsigned long long)boolRestrictionForFeature:(NSString *)arg1;
- (void)setBoolValue:(BOOL)arg1 ask:(BOOL)arg2 forSetting:(NSString *)arg3;
- (unsigned long long)effectiveBoolValueForSetting:(NSString *)arg1 outAsk:(char *)arg2;

@optional
- (BOOL)isFeatureForced:(NSString *)arg1;
@end

