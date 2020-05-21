//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreSuggestions/SGObject.h>

#import "NSSecureCoding.h"

@class NSDate, NSDateComponents, NSString, NSURL, SGLocation;

@interface SGReminder : SGObject <NSSecureCoding>
{
    unsigned char _dueLocationType;
    unsigned char _dueLocationTrigger;
    unsigned char _reminderStatus;
    NSString *_title;
    NSDateComponents *_dueDateComponents;
    SGLocation *_dueLocation;
    NSURL *_sourceURL;
    NSDate *_creationDate;
    NSString *_opaqueKey;
    NSString *_uniqueKey;
    NSString *_contactIdentifier;
}

+ (id)describeReminderDueLocationType:(unsigned char)arg1;
+ (id)describeReminderDueLocationTrigger:(unsigned char)arg1;
+ (id)describeReminderStatus:(unsigned char)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned char reminderStatus; // @synthesize reminderStatus=_reminderStatus;
@property(readonly, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(readonly, nonatomic) NSString *uniqueKey; // @synthesize uniqueKey=_uniqueKey;
@property(readonly, nonatomic) NSString *opaqueKey; // @synthesize opaqueKey=_opaqueKey;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(readonly, nonatomic) unsigned char dueLocationTrigger; // @synthesize dueLocationTrigger=_dueLocationTrigger;
@property(readonly, nonatomic) SGLocation *dueLocation; // @synthesize dueLocation=_dueLocation;
@property(readonly, nonatomic) unsigned char dueLocationType; // @synthesize dueLocationType=_dueLocationType;
@property(readonly, nonatomic) NSDateComponents *dueDateComponents; // @synthesize dueDateComponents=_dueDateComponents;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)dictionaryRepresentation;
- (BOOL)isEqualToReminder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isAllDay;
- (id)initWithTitle:(id)arg1 dueDateComponents:(id)arg2 dueLocationType:(unsigned char)arg3 dueLocation:(id)arg4 dueLocationTrigger:(unsigned char)arg5 sourceURL:(id)arg6 reminderStatus:(unsigned char)arg7;
- (id)initWithRecordId:(id)arg1 origin:(id)arg2 title:(id)arg3 dueDateComponents:(id)arg4 dueLocationType:(unsigned char)arg5 dueLocation:(id)arg6 dueLocationTrigger:(unsigned char)arg7 sourceURL:(id)arg8 reminderStatus:(unsigned char)arg9 opaqueKey:(id)arg10 uniqueKey:(id)arg11 contactIdentifier:(id)arg12 creationDate:(id)arg13;

@end

