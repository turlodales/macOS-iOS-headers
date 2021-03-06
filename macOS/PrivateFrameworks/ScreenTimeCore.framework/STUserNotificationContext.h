//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenTimeCore/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber, NSString, UNNotificationTrigger;

__attribute__((visibility("hidden")))
@interface STUserNotificationContext : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSArray *_localizedUserNotificationBodyArguments;
    UNNotificationTrigger *_trigger;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) UNNotificationTrigger *trigger; // @synthesize trigger=_trigger;
@property(copy, nonatomic) NSArray *localizedUserNotificationBodyArguments; // @synthesize localizedUserNotificationBodyArguments=_localizedUserNotificationBodyArguments;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *notificationBundleIdentifier;
@property(readonly) NSNumber *destinations;
- (void)customizeNotificationContent:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)notificationContentWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

@end

