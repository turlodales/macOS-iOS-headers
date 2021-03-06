//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKit/EKFetchRequestToken-Protocol.h>
#import <EventKit/NSCopying-Protocol.h>

@class EKReminderStore;

@interface EKReminderFetchRequestToken : NSObject <EKFetchRequestToken, NSCopying>
{
    EKReminderStore *_reminderStore;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak EKReminderStore *reminderStore; // @synthesize reminderStore=_reminderStore;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)cancel;
- (id)initWithReminderStore:(id)arg1;

@end

