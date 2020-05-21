//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CalUICalendarPickerTouchBarItemControllerDelegate.h"

@class NSString, NSTouchBar;

@protocol CalUIEventViewTouchBarDelegate <CalUICalendarPickerTouchBarItemControllerDelegate>
- (void)reportJunk;
- (void)deleteEvent;
- (void)respondWithStatus:(long long)arg1;
- (void)datePickerChanged;
- (void)datePickerIsChanging;
- (void)selectInspectorInvitees;
- (void)selectInspectorDateTime;
- (void)selectInspectorLocation;
- (NSTouchBar *)inviteesCandidateTouchBar;
- (NSTouchBar *)locationCandidateTouchBar;
- (BOOL)shouldShowInspectorFields;
- (void)toggleInspector;
- (void)nopeButtonPressed;
- (void)yupButtonPressed;
- (NSString *)nopeButtonTitle;
- (NSString *)yupButtonTitle;
- (BOOL)inspectorIsOpen;
@end

