//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _INPBSelectionItem;

@protocol _INPBPayloadConfirmation <NSObject>
@property(nonatomic) BOOL hasAddTasksIntentTargetTaskListConfirmationReason;
@property(nonatomic) int addTasksIntentTargetTaskListConfirmationReason;
@property(nonatomic) BOOL hasReason;
@property(nonatomic) int reason;
@property(nonatomic) BOOL hasStartCallIntentContactsConfirmationReason;
@property(nonatomic) int startCallIntentContactsConfirmationReason;
@property(readonly, nonatomic) BOOL hasConfirmationItem;
@property(retain, nonatomic) _INPBSelectionItem *confirmationItem;
- (int)StringAsAddTasksIntentTargetTaskListConfirmationReason:(NSString *)arg1;
- (NSString *)addTasksIntentTargetTaskListConfirmationReasonAsString:(int)arg1;
- (int)StringAsReason:(NSString *)arg1;
- (NSString *)reasonAsString:(int)arg1;
- (int)StringAsStartCallIntentContactsConfirmationReason:(NSString *)arg1;
- (NSString *)startCallIntentContactsConfirmationReasonAsString:(int)arg1;
@end

