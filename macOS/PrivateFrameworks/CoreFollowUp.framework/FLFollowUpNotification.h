//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class FLFollowUpAction, NSDate, NSSet, NSString;

@interface FLFollowUpNotification : NSObject <NSSecureCoding>
{
    NSString *_title;
    NSString *_informativeText;
    NSDate *_creationDate;
    FLFollowUpAction *_activateAction;
    FLFollowUpAction *_clearAction;
    NSString *_unlockActionLabel;
    double _frequency;
    double _firstNotificationDelay;
    NSSet *_options;
    unsigned long long _sqlID;
    NSDate *_previousNotificationActionDate;
    FLFollowUpAction *_dismissAction;
}

+ (id)defaultOptions;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) FLFollowUpAction *dismissAction; // @synthesize dismissAction=_dismissAction;
@property(retain, nonatomic) NSDate *previousNotificationActionDate; // @synthesize previousNotificationActionDate=_previousNotificationActionDate;
@property(nonatomic) unsigned long long sqlID; // @synthesize sqlID=_sqlID;
@property(copy, nonatomic) NSSet *options; // @synthesize options=_options;
@property(nonatomic) double firstNotificationDelay; // @synthesize firstNotificationDelay=_firstNotificationDelay;
@property(nonatomic) double frequency; // @synthesize frequency=_frequency;
@property(copy, nonatomic) NSString *unlockActionLabel; // @synthesize unlockActionLabel=_unlockActionLabel;
@property(retain, nonatomic) FLFollowUpAction *clearAction; // @synthesize clearAction=_clearAction;
@property(retain, nonatomic) FLFollowUpAction *activateAction; // @synthesize activateAction=_activateAction;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic) NSString *informativeText; // @synthesize informativeText=_informativeText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;
- (void)recalculateActionDateToAccountForDelay;
- (double)_creationDateAugmentedRepeatTimer;
- (double)_frequencyDelta;
- (void)set_optionsData:(id)arg1;
- (id)_optionsData;
@property(nonatomic) BOOL forceDelivery;
- (BOOL)_shouldDeliverNotificationWithStringOut:(id *)arg1;
- (BOOL)shouldDeliverNotification;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

